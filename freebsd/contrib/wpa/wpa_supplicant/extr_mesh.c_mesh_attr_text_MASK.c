
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct ieee802_11_elems {int mesh_id_len; int mesh_config_len; int supp_rates_len; int ext_supp_rates_len; int* supp_rates; int* ext_supp_rates; int * mesh_config; int mesh_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,size_t,struct ieee802_11_elems*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int,char*,...) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(const u8 *VAR_1, size_t VAR_2, char *VAR_3, char *VAR_4)
{
 struct ieee802_11_elems VAR_5;
 char *VAR_6, *VAR_7 = VAR_3;
 u8 *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_0(VAR_1, VAR_2, &VAR_5, 0) == VAR_0)
  return -1;

 if (VAR_5.mesh_id_len < 1)
  return 0;

 VAR_6 = FUNC_2(VAR_5.mesh_id_len + 1);
 if (VAR_6 == ((void*)0))
  return -1;

 FUNC_3(VAR_6, VAR_5.mesh_id, VAR_5.mesh_id_len);
 VAR_6[VAR_5.mesh_id_len] = '\0';
 VAR_10 = FUNC_4(VAR_7, VAR_4 - VAR_7, "mesh_id=%s\n", VAR_6);
 FUNC_1(VAR_6);
 if (FUNC_5(VAR_4 - VAR_7, VAR_10))
  return VAR_7 - VAR_3;
 VAR_7 += VAR_10;

 if (VAR_5.mesh_config_len > 6) {
  VAR_10 = FUNC_4(VAR_7, VAR_4 - VAR_7,
      "active_path_selection_protocol_id=0x%02x\n"
      "active_path_selection_metric_id=0x%02x\n"
      "congestion_control_mode_id=0x%02x\n"
      "synchronization_method_id=0x%02x\n"
      "authentication_protocol_id=0x%02x\n"
      "mesh_formation_info=0x%02x\n"
      "mesh_capability=0x%02x\n",
      VAR_5.mesh_config[0], VAR_5.mesh_config[1],
      VAR_5.mesh_config[2], VAR_5.mesh_config[3],
      VAR_5.mesh_config[4], VAR_5.mesh_config[5],
      VAR_5.mesh_config[6]);
  if (FUNC_5(VAR_4 - VAR_7, VAR_10))
   return VAR_7 - VAR_3;
  VAR_7 += VAR_10;
 }

 VAR_8 = FUNC_2(VAR_5.supp_rates_len +
  VAR_5.ext_supp_rates_len);
 if (VAR_8 == ((void*)0))
  return -1;

 VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5.supp_rates_len; VAR_11++) {
  if (VAR_5.supp_rates[VAR_11] & 0x80) {
   VAR_8[VAR_9++] =
    (VAR_5.supp_rates[VAR_11] & 0x7f) * 5;
  }
 }
 for (VAR_11 = 0; VAR_11 < VAR_5.ext_supp_rates_len; VAR_11++) {
  if (VAR_5.ext_supp_rates[VAR_11] & 0x80) {
   VAR_8[VAR_9++] =
    (VAR_5.ext_supp_rates[VAR_11] & 0x7f) * 5;
  }
 }
 if (VAR_9 > 0) {
  VAR_10 = FUNC_4(VAR_7, VAR_4 - VAR_7, "bss_basic_rate_set=%d",
      VAR_8[0]);
  if (FUNC_5(VAR_4 - VAR_7, VAR_10))
   goto fail;
  VAR_7 += VAR_10;

  for (VAR_11 = 1; VAR_11 < VAR_9; VAR_11++) {
   VAR_10 = FUNC_4(VAR_7, VAR_4 - VAR_7, " %d",
       VAR_8[VAR_11]);
   if (FUNC_5(VAR_4 - VAR_7, VAR_10))
    goto fail;
   VAR_7 += VAR_10;
  }

  VAR_10 = FUNC_4(VAR_7, VAR_4 - VAR_7, "\n");
  if (FUNC_5(VAR_4 - VAR_7, VAR_10))
   goto fail;
  VAR_7 += VAR_10;
 }
fail:
 FUNC_1(VAR_8);

 return VAR_7 - VAR_3;
}

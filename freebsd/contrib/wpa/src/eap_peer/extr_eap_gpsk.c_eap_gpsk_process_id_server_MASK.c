
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_gpsk_data {int id_server_len; int * id_server; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_5(struct eap_gpsk_data *VAR_1,
          const u8 *VAR_2, const u8 *VAR_3)
{
 u16 VAR_4;

 if (VAR_3 - VAR_2 < 2) {
  FUNC_4(VAR_0, "EAP-GPSK: Too short GPSK-1 packet");
  return ((void*)0);
 }
 VAR_4 = FUNC_0(VAR_2);
 VAR_2 += 2;
 if (VAR_3 - VAR_2 < VAR_4) {
  FUNC_4(VAR_0, "EAP-GPSK: ID_Server overflow");
  return ((void*)0);
 }
 FUNC_1(VAR_1->id_server);
 VAR_1->id_server = FUNC_2(VAR_2, VAR_4);
 if (VAR_1->id_server == ((void*)0)) {
  FUNC_4(VAR_0, "EAP-GPSK: No memory for ID_Server");
  return ((void*)0);
 }
 VAR_1->id_server_len = VAR_4;
 FUNC_3(VAR_0, "EAP-GPSK: ID_Server",
     VAR_1->id_server, VAR_1->id_server_len);
 VAR_2 += VAR_4;

 return VAR_2;
}

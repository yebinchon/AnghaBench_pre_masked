
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct ldm_privhdr {void* log_size; void* conf_size; void** th_offset; void* db_size; void* db_offset; void* size; void* start; int dg_name; int dg_guid; int disk_guid; } ;
struct g_consumer {TYPE_1__* provider; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (struct ldm_privhdr*,int ,int) ;
 int FUNC_4 (int const*,int *) ;
 int FUNC_5 (int ,int const*,int) ;

__attribute__((used)) static int
FUNC_6(struct g_consumer *VAR_15, struct ldm_privhdr *VAR_16,
    const u_char *VAR_17)
{
 uint32_t VAR_18;
 int VAR_19;

 FUNC_3(VAR_16, 0, sizeof(*VAR_16));
 VAR_18 = FUNC_1(VAR_17 + VAR_12);
 if (VAR_18 != VAR_13 &&
     VAR_18 != VAR_14) {
  FUNC_0(0, "%s: unsupported LDM version %u.%u",
      VAR_15->provider->name, VAR_18 >> 16,
      VAR_18 & 0xFFFF);
  return (VAR_0);
 }
 VAR_19 = FUNC_4(VAR_17 + VAR_6, &VAR_16->disk_guid);
 if (VAR_19 != 0)
  return (VAR_19);
 VAR_19 = FUNC_4(VAR_17 + VAR_4, &VAR_16->dg_guid);
 if (VAR_19 != 0)
  return (VAR_19);
 FUNC_5(VAR_16->dg_name, VAR_17 + VAR_5, sizeof(VAR_16->dg_name));
 VAR_16->start = FUNC_2(VAR_17 + VAR_9);
 VAR_16->size = FUNC_2(VAR_17 + VAR_8);
 VAR_16->db_offset = FUNC_2(VAR_17 + VAR_3);
 VAR_16->db_size = FUNC_2(VAR_17 + VAR_2);
 VAR_16->th_offset[0] = FUNC_2(VAR_17 + VAR_10);
 VAR_16->th_offset[1] = FUNC_2(VAR_17 + VAR_11);
 VAR_16->conf_size = FUNC_2(VAR_17 + VAR_1);
 VAR_16->log_size = FUNC_2(VAR_17 + VAR_7);
 return (0);
}

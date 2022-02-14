
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_fast_pac {int a_id_info_len; int a_id_info; int i_id_len; int i_id; int a_id_len; int a_id; int pac_info_len; int pac_info; int pac_opaque_len; int pac_opaque; int pac_key; int pac_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char**,size_t*,char*,int ,int ,int) ;
 int FUNC_1 (char*,int,char*,...) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct eap_fast_pac *VAR_2, char **VAR_3,
     char **VAR_4, size_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(*VAR_4, *VAR_3 + *VAR_5 - *VAR_4,
     "START\nPAC-Type=%d\n", VAR_2->pac_type);
 if (FUNC_2(*VAR_3 + *VAR_5 - *VAR_4, VAR_6))
  return -1;

 *VAR_4 += VAR_6;
 FUNC_0(VAR_3, VAR_4, VAR_5, "PAC-Key",
         VAR_2->pac_key, VAR_0, 0);
 FUNC_0(VAR_3, VAR_4, VAR_5, "PAC-Opaque",
         VAR_2->pac_opaque, VAR_2->pac_opaque_len, 0);
 FUNC_0(VAR_3, VAR_4, VAR_5, "PAC-Info",
         VAR_2->pac_info, VAR_2->pac_info_len, 0);
 FUNC_0(VAR_3, VAR_4, VAR_5, "A-ID",
         VAR_2->a_id, VAR_2->a_id_len, 0);
 FUNC_0(VAR_3, VAR_4, VAR_5, "I-ID",
         VAR_2->i_id, VAR_2->i_id_len, 1);
 FUNC_0(VAR_3, VAR_4, VAR_5, "A-ID-Info",
         VAR_2->a_id_info, VAR_2->a_id_info_len, 1);
 if (*VAR_3 == ((void*)0)) {
  FUNC_3(VAR_1, "EAP-FAST: No memory for PAC "
      "data");
  return -1;
 }
 VAR_6 = FUNC_1(*VAR_4, *VAR_3 + *VAR_5 - *VAR_4, "END\n");
 if (FUNC_2(*VAR_3 + *VAR_5 - *VAR_4, VAR_6))
  return -1;
 *VAR_4 += VAR_6;

 return 0;
}

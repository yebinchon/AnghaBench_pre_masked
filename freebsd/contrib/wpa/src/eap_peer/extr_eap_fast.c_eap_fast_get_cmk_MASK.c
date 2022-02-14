
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_fast_data {int * simck; scalar_t__ simck_idx; } ;
typedef int isk ;
typedef int imck ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_fast_data*,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*,int *,int,int *,int) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_4, struct eap_fast_data *VAR_5,
       u8 *VAR_6)
{
 u8 VAR_7[32], VAR_8[60];

 FUNC_4(VAR_2, "EAP-FAST: Determining CMK[%d] for Compound MIC "
     "calculation", VAR_5->simck_idx + 1);
 if (FUNC_0(VAR_4, VAR_5, VAR_7, sizeof(VAR_7)) < 0)
  return -1;
 FUNC_3(VAR_3, "EAP-FAST: ISK[j]", VAR_7, sizeof(VAR_7));
 if (FUNC_2(VAR_5->simck, VAR_1,
         "Inner Methods Compound Keys",
         VAR_7, sizeof(VAR_7), VAR_8, sizeof(VAR_8)) < 0)
  return -1;
 VAR_5->simck_idx++;
 FUNC_1(VAR_5->simck, VAR_8, VAR_1);
 FUNC_3(VAR_3, "EAP-FAST: S-IMCK[j]",
   VAR_5->simck, VAR_1);
 FUNC_1(VAR_6, VAR_8 + VAR_1, VAR_0);
 FUNC_3(VAR_3, "EAP-FAST: CMK[j]",
   VAR_6, VAR_0);

 return 0;
}

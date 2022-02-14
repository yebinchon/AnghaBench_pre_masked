
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(const u8 *VAR_6, u8 *VAR_7, u8 *VAR_8, u8 *VAR_9, u8 *VAR_10)
{
 u8 VAR_11[VAR_3 + VAR_2 +
        VAR_1 + VAR_0], *VAR_12;
 if (FUNC_0(VAR_6, VAR_11, sizeof(VAR_11)) < 0) {
  FUNC_4(VAR_5, "EAP-SIM: Failed to derive keys");
  return -1;
 }
 VAR_12 = VAR_11;
 FUNC_1(VAR_7, VAR_12, VAR_3);
 VAR_12 += VAR_3;
 FUNC_1(VAR_8, VAR_12, VAR_2);
 VAR_12 += VAR_2;
 FUNC_1(VAR_9, VAR_12, VAR_1);
 VAR_12 += VAR_1;
 FUNC_1(VAR_10, VAR_12, VAR_0);

 FUNC_3(VAR_4, "EAP-SIM: K_encr",
   VAR_7, VAR_3);
 FUNC_3(VAR_4, "EAP-SIM: K_aut",
   VAR_8, VAR_2);
 FUNC_3(VAR_4, "EAP-SIM: keying material (MSK)",
   VAR_9, VAR_1);
 FUNC_3(VAR_4, "EAP-SIM: EMSK", VAR_10, VAR_0);
 FUNC_2(VAR_11, 0, sizeof(VAR_11));

 return 0;
}

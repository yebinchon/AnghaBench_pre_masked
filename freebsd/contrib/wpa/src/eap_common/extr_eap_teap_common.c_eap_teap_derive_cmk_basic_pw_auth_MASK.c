
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int imck ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,size_t,char*,int *,int,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,char*,int *,int ) ;

int FUNC_5(const u8 *VAR_4, u8 *VAR_5)
{
 u8 VAR_6[32], VAR_7[VAR_1];
 int VAR_8;






 FUNC_3(VAR_6, 0, 32);
 VAR_8 = FUNC_0(VAR_4, VAR_2,
          "Inner Methods Compound Keys",
          VAR_6, 32, VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  return -1;
 FUNC_2(VAR_5, &VAR_7[VAR_2], VAR_0);
 FUNC_4(VAR_3, "EAP-TEAP: CMK[no-inner-EAP]",
   VAR_5, VAR_0);
 FUNC_1(VAR_7, sizeof(VAR_7));
 return 0;
}

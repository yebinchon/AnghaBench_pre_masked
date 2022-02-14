
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int ,char*,int *,int ,int *,int ) ;
 int FUNC_1 (int ,char*,int *,int ) ;

int FUNC_2(const u8 *VAR_3, u8 *VAR_4)
{





 if (FUNC_0(VAR_3, VAR_1,
        "Session Key Generating Function", (u8 *) "", 0,
        VAR_4, VAR_0) < 0)
  return -1;
 FUNC_1(VAR_2, "EAP-TEAP: Derived key (MSK)",
   VAR_4, VAR_0);
 return 0;
}

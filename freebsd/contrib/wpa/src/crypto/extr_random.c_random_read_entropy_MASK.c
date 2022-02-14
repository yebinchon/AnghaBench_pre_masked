
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,size_t*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int ,...) ;

__attribute__((used)) static void FUNC_4(void)
{
 char *VAR_4;
 size_t VAR_5;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_4 == ((void*)0))
  return;

 if (VAR_5 != 1 + VAR_1) {
  FUNC_3(VAR_0, "random: Invalid entropy file %s",
      VAR_3);
  FUNC_0(VAR_4);
  return;
 }

 VAR_2 = (u8) VAR_4[0];
 FUNC_2(VAR_4 + 1, VAR_1);
 FUNC_0(VAR_4);
 FUNC_3(VAR_0, "random: Added entropy from %s "
     "(own_pool_ready=%u)",
     VAR_3, VAR_2);
}

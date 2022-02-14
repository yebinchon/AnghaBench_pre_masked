
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 char* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(void)
{
 VAR_3 = 0;
 if (VAR_1 == 0) {
  FUNC_3("\n%s> ", VAR_5 ? VAR_5 : "");
  FUNC_1(VAR_6);
  return;
 }
 FUNC_3("\n");
 VAR_0[VAR_1] = '\0';
 FUNC_2(VAR_0);
 VAR_2 = 0;
 VAR_1 = 0;
 FUNC_0(VAR_4, VAR_0);
 FUNC_3("%s> ", VAR_5 ? VAR_5 : "");
 FUNC_1(VAR_6);
}

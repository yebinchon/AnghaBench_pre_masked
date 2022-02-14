
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RES ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(RES* VAR_1, char* VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 if(VAR_3 == 0 && FUNC_3(VAR_2, "0") != 0) {
  FUNC_2(VAR_1, "error in verbosity number syntax: %s\n", VAR_2);
  return;
 }
 VAR_0 = VAR_3;
 FUNC_1(VAR_1);
}

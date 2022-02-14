
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

int FUNC_7(const char *VAR_2)
{
 if (FUNC_0(0, 0)) {
  FUNC_6(VAR_0, "daemon: %s", FUNC_5(VAR_1));
  return -1;
 }

 if (VAR_2) {
  FILE *VAR_3 = FUNC_2(VAR_2, "w");
  if (VAR_3) {
   FUNC_3(VAR_3, "%u\n", FUNC_4());
   FUNC_1(VAR_3);
  }
 }

 return -0;
}

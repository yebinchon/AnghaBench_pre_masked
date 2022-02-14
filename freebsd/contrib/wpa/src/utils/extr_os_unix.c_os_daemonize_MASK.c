
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
typedef scalar_t__ pid_t ;
typedef int intmax_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 struct pidfh* FUNC_7 (char const*,int,scalar_t__*) ;
 int FUNC_8 (struct pidfh*) ;
 int FUNC_9 (struct pidfh*) ;
 int FUNC_10 (char*) ;

int FUNC_11(const char *VAR_2)
{
 if (FUNC_5(0, 0)) {
  FUNC_6("daemon");



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

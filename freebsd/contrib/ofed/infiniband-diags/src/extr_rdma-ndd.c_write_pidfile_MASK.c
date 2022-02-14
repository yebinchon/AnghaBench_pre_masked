
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
 FILE *VAR_3;
 if (VAR_2) {
  FUNC_5();
  VAR_3 = FUNC_2(VAR_2, "w");
  if (VAR_3) {
   FUNC_3(VAR_3, "%d\n", FUNC_4());
   FUNC_1(VAR_3);
  } else {
   FUNC_6(VAR_0, "Failed to write pidfile : %s\n",
    VAR_2);
   FUNC_0(VAR_1);
  }
 }
}

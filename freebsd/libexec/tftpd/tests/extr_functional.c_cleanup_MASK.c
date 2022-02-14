
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 FILE *VAR_2;
 pid_t VAR_3;

 VAR_2 = FUNC_1(VAR_1, "r");
 if (VAR_2 == ((void*)0))
  return;
 if (FUNC_2(VAR_2, "%d", &VAR_3) == 1) {
  FUNC_3(VAR_3, VAR_0);
  FUNC_5(VAR_3, ((void*)0), 0);
 }
 FUNC_0(VAR_2);
 FUNC_4(VAR_1);
}

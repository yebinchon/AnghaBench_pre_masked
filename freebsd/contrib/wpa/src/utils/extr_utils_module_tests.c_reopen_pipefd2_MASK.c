
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_eloop {int* pipefd2; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct test_eloop*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void FUNC_6(struct test_eloop *VAR_3)
{
 if (VAR_3->pipefd2[0] < 0) {
  FUNC_5(VAR_0, "pipefd2 had been closed");
 } else {
  int VAR_4;

  FUNC_5(VAR_0, "close pipefd2");
  FUNC_2(VAR_3->pipefd2[0]);
  FUNC_0(VAR_3->pipefd2[0]);
  VAR_3->pipefd2[0] = -1;
  FUNC_0(VAR_3->pipefd2[1]);
  VAR_3->pipefd2[1] = -1;

  VAR_4 = FUNC_3(VAR_3->pipefd2);
  if (VAR_4 < 0) {
   FUNC_5(VAR_0, "pipe: %s", FUNC_4(VAR_2));
   VAR_3->pipefd2[0] = -1;
   VAR_3->pipefd2[1] = -1;
   return;
  }

  FUNC_5(VAR_0,
      "re-register pipefd2 with new sockets %d,%d",
      VAR_3->pipefd2[0], VAR_3->pipefd2[1]);
  FUNC_1(VAR_3->pipefd2[0], VAR_1,
      VAR_3, ((void*)0));
 }
}

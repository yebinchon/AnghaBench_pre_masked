
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_eloop {int magic; int close_in_timeout; int * pipefd2; int * pipefd1; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct test_eloop*,int *) ;
 int FUNC_2 (int ,int,int ,struct test_eloop*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct test_eloop*) ;
 int FUNC_4 (int ,int) ;
 struct test_eloop* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void FUNC_10(int VAR_6)
{
 struct test_eloop *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7));
 if (!VAR_7)
  return;
 VAR_7->magic = 0x12345678;
 VAR_7->close_in_timeout = VAR_6;

 FUNC_8(VAR_0, "starting eloop tests (%p) (close_in_timeout=%d)",
     VAR_7, VAR_6);

 VAR_8 = FUNC_6(VAR_7->pipefd1);
 if (VAR_8 < 0) {
  FUNC_8(VAR_0, "pipe: %s", FUNC_7(VAR_5));
  FUNC_3(VAR_7);
  return;
 }

 VAR_8 = FUNC_6(VAR_7->pipefd2);
 if (VAR_8 < 0) {
  FUNC_8(VAR_0, "pipe: %s", FUNC_7(VAR_5));
  FUNC_0(VAR_7->pipefd1[0]);
  FUNC_0(VAR_7->pipefd1[1]);
  FUNC_3(VAR_7);
  return;
 }

 FUNC_8(VAR_0, "pipe fds: %d,%d %d,%d",
     VAR_7->pipefd1[0], VAR_7->pipefd1[1],
     VAR_7->pipefd2[0], VAR_7->pipefd2[1]);

 FUNC_1(VAR_7->pipefd1[0], VAR_2, VAR_7, ((void*)0));
 FUNC_1(VAR_7->pipefd2[0], VAR_3, VAR_7, ((void*)0));
 FUNC_2(0, 0, VAR_1, VAR_7, ((void*)0));
 FUNC_2(0, 200000, VAR_4, VAR_7, ((void*)0));

 if (FUNC_9(VAR_7->pipefd1[1], "HELLO", 5) < 0)
  FUNC_8(VAR_0, "write: %s", FUNC_7(VAR_5));
 if (FUNC_9(VAR_7->pipefd2[1], "TEST", 4) < 0)
  FUNC_8(VAR_0, "write: %s", FUNC_7(VAR_5));
 FUNC_4(0, 50000);
 FUNC_8(VAR_0, "waiting for eloop callbacks");
}

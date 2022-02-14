
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_ctx {scalar_t__ sp_magic; int sp_side; int* sp_fd; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;



 int FUNC_2 (int) ;
 int FUNC_3 (struct sp_ctx*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct sp_ctx *VAR_2 = VAR_1;

 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_2->sp_magic == VAR_0);

 switch (VAR_2->sp_side) {
 case 128:
  FUNC_1(VAR_2->sp_fd[0] >= 0);
  FUNC_2(VAR_2->sp_fd[0]);
  VAR_2->sp_fd[0] = -1;
  FUNC_1(VAR_2->sp_fd[1] >= 0);
  FUNC_2(VAR_2->sp_fd[1]);
  VAR_2->sp_fd[1] = -1;
  break;
 case 130:
  FUNC_1(VAR_2->sp_fd[0] >= 0);
  FUNC_2(VAR_2->sp_fd[0]);
  VAR_2->sp_fd[0] = -1;
  FUNC_1(VAR_2->sp_fd[1] == -1);
  break;
 case 129:
  FUNC_1(VAR_2->sp_fd[1] >= 0);
  FUNC_2(VAR_2->sp_fd[1]);
  VAR_2->sp_fd[1] = -1;
  FUNC_1(VAR_2->sp_fd[0] == -1);
  break;
 default:
  FUNC_0("Invalid socket side (%d).", VAR_2->sp_side);
 }

 VAR_2->sp_magic = 0;
 FUNC_3(VAR_2);
}

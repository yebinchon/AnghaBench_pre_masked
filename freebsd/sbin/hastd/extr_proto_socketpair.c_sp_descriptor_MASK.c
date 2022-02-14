
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_ctx {scalar_t__ sp_magic; int sp_side; int* sp_fd; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;



__attribute__((used)) static int
FUNC_2(const void *VAR_1)
{
 const struct sp_ctx *VAR_2 = VAR_1;

 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_2->sp_magic == VAR_0);
 FUNC_1(VAR_2->sp_side == 129 ||
     VAR_2->sp_side == 128);

 switch (VAR_2->sp_side) {
 case 129:
  FUNC_1(VAR_2->sp_fd[0] >= 0);
  return (VAR_2->sp_fd[0]);
 case 128:
  FUNC_1(VAR_2->sp_fd[1] >= 0);
  return (VAR_2->sp_fd[1]);
 }

 FUNC_0("Invalid socket side (%d).", VAR_2->sp_side);
}

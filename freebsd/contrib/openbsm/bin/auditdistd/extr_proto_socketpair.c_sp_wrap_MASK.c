
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_ctx {int* sp_fd; int sp_magic; int sp_side; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sp_ctx* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_4, bool VAR_5, void **VAR_6)
{
 struct sp_ctx *VAR_7;

 FUNC_0(VAR_4 >= 0);

 VAR_7 = FUNC_1(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_3);

 if (VAR_5) {
  VAR_7->sp_side = VAR_1;
  VAR_7->sp_fd[0] = VAR_4;
  VAR_7->sp_fd[1] = -1;
 } else {
  VAR_7->sp_side = VAR_2;
  VAR_7->sp_fd[0] = -1;
  VAR_7->sp_fd[1] = VAR_4;
 }
 VAR_7->sp_magic = VAR_0;
 *VAR_6 = VAR_7;

 return (0);
}

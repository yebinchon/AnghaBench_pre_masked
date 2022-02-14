
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_args_args {int stream; int fi; int func; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_4 (void *VAR_0)
{
  int VAR_1;
  struct print_args_args *VAR_2 = (struct print_args_args *) VAR_0;

  if (FUNC_1 ())
    {
      VAR_1 = FUNC_0 (VAR_2->fi);
      FUNC_2 (VAR_1 >= 0);
    }
  else
    VAR_1 = -1;
  FUNC_3 (VAR_2->func, VAR_2->fi, VAR_1, VAR_2->stream);
  return 0;
}

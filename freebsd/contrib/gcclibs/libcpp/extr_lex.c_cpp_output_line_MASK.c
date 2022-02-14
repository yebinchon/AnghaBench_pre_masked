
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int flags; } ;
typedef TYPE_1__ cpp_token ;
typedef int cpp_reader ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__ const*,int *) ;
 int FUNC_2 (char,int *) ;

void
FUNC_3 (cpp_reader *VAR_2, FILE *VAR_3)
{
  const cpp_token *VAR_4;

  VAR_4 = FUNC_0 (VAR_2);
  while (VAR_4->type != VAR_0)
    {
      FUNC_1 (VAR_4, VAR_3);
      VAR_4 = FUNC_0 (VAR_2);
      if (VAR_4->flags & VAR_1)
 FUNC_2 (' ', VAR_3);
    }

  FUNC_2 ('\n', VAR_3);
}

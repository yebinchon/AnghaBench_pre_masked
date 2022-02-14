
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct builtin {int value; int len; int name; } ;
typedef int cpp_reader ;
struct TYPE_3__ {int directive_index; scalar_t__ is_directive; int flags; } ;
typedef TYPE_1__ cpp_hashnode ;


 int FUNC_0 (struct builtin const*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int ,int ) ;
 struct builtin const* VAR_1 ;

__attribute__((used)) static void
FUNC_2 (cpp_reader *VAR_2)
{
  const struct builtin *VAR_3;

  for (VAR_3 = VAR_1;
       VAR_3 < (VAR_1 + FUNC_0 (VAR_1));
       VAR_3++)
    {
      cpp_hashnode *VAR_4 = FUNC_1 (VAR_2, VAR_3->name, VAR_3->len);
      VAR_4->flags |= VAR_0;
      VAR_4->is_directive = 0;
      VAR_4->directive_index = VAR_3->value;
    }
}

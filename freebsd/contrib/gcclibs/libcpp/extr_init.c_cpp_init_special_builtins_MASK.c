
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct builtin {scalar_t__ value; int len; int name; } ;
typedef enum builtin_type { ____Placeholder_builtin_type } builtin_type ;
typedef int cpp_reader ;
struct TYPE_4__ {int builtin; } ;
struct TYPE_5__ {int flags; TYPE_1__ value; int type; } ;
typedef TYPE_2__ cpp_hashnode ;


 size_t FUNC_0 (struct builtin const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct builtin const* VAR_3 ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3 (cpp_reader *VAR_7)
{
  const struct builtin *VAR_8;
  size_t VAR_9 = FUNC_0 (VAR_3);

  if (FUNC_1 (VAR_7, VAR_6))
    VAR_9 -= 2;
  else if (! FUNC_1 (VAR_7, VAR_5)
    || FUNC_1 (VAR_7, VAR_4))
    VAR_9--;

  for (VAR_8 = VAR_3; VAR_8 < VAR_3 + VAR_9; VAR_8++)
    {
      cpp_hashnode *VAR_10 = FUNC_2 (VAR_7, VAR_8->name, VAR_8->len);
      VAR_10->type = VAR_2;
      VAR_10->flags |= VAR_0 | VAR_1;
      VAR_10->value.builtin = (enum builtin_type) VAR_8->value;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_10__ {int * tokens; } ;
struct TYPE_11__ {unsigned int paramc; scalar_t__ fun_like; scalar_t__ variadic; scalar_t__* params; unsigned int count; TYPE_2__ exp; } ;
typedef TYPE_3__ cpp_macro ;
struct TYPE_9__ {TYPE_3__* macro; } ;
struct TYPE_12__ {int flags; TYPE_1__ value; } ;
typedef TYPE_4__ cpp_hashnode ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__ const*,TYPE_3__ const*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_3 (cpp_reader *VAR_2, const cpp_hashnode *VAR_3,
        const cpp_macro *VAR_4)
{
  const cpp_macro *VAR_5;
  unsigned int VAR_6;


  if (VAR_3->flags & VAR_0)
    return 1;



  VAR_5 = VAR_3->value.macro;



  if (VAR_5->paramc != VAR_4->paramc
      || VAR_5->fun_like != VAR_4->fun_like
      || VAR_5->variadic != VAR_4->variadic)
    return 1;


  for (VAR_6 = 0; VAR_6 < VAR_5->paramc; VAR_6++)
    if (VAR_5->params[VAR_6] != VAR_4->params[VAR_6])
      return 1;


  if (FUNC_0 (VAR_2, VAR_1))
    return FUNC_2 (VAR_5, VAR_4);

  if (VAR_5->count != VAR_4->count)
    return 1;

  for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++)
    if (!FUNC_1 (&VAR_5->exp.tokens[VAR_6], &VAR_4->exp.tokens[VAR_6]))
      return 1;

  return 0;
}

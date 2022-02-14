
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * source; } ;
struct TYPE_14__ {scalar_t__ type; int flags; TYPE_1__ val; } ;
typedef TYPE_3__ cpp_token ;
struct TYPE_13__ {int parsing_args; } ;
struct TYPE_15__ {TYPE_3__ const eof; TYPE_2__ state; } ;
typedef TYPE_4__ cpp_reader ;
typedef int cpp_hashnode ;
typedef int _cpp_buff ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int *,TYPE_3__ const*,int) ;
 int * FUNC_2 (TYPE_4__*,int *) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static _cpp_buff *
FUNC_4 (cpp_reader *VAR_4, cpp_hashnode *VAR_5)
{
  const cpp_token *VAR_6, *VAR_7 = ((void*)0);

  for (;;)
    {
      VAR_6 = FUNC_3 (VAR_4);
      if (VAR_6->type != VAR_2)
 break;
      if (VAR_7 == ((void*)0)
   || (!(VAR_7->flags & VAR_3) && VAR_6->val.source == ((void*)0)))
 VAR_7 = VAR_6;
    }

  if (VAR_6->type == VAR_1)
    {
      VAR_4->state.parsing_args = 2;
      return FUNC_2 (VAR_4, VAR_5);
    }



  if (VAR_6->type != VAR_0 || VAR_6 == &VAR_4->eof)
    {



      FUNC_0 (VAR_4, 1);
      if (VAR_7)
 FUNC_1 (VAR_4, ((void*)0), VAR_7, 1);
    }

  return ((void*)0);
}

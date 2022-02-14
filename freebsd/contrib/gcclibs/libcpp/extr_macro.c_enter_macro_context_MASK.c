
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int macro_arg ;
struct TYPE_25__ {int angled_headers; int parsing_args; int prevent_expansion; } ;
struct TYPE_28__ {int mi_valid; TYPE_1__ state; int keep_tokens; } ;
typedef TYPE_4__ cpp_reader ;
struct TYPE_27__ {int tokens; } ;
struct TYPE_29__ {scalar_t__ paramc; int used; int count; TYPE_3__ exp; int syshdr; scalar_t__ fun_like; } ;
typedef TYPE_5__ cpp_macro ;
struct TYPE_26__ {TYPE_5__* macro; } ;
struct TYPE_30__ {int flags; TYPE_2__ value; } ;
typedef TYPE_6__ cpp_hashnode ;
struct TYPE_31__ {scalar_t__ base; } ;
typedef TYPE_7__ _cpp_buff ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_6__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,int ,char*,int ) ;
 TYPE_7__* FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*,TYPE_5__*,int *) ;

__attribute__((used)) static int
FUNC_8 (cpp_reader *VAR_3, cpp_hashnode *VAR_4)
{

  VAR_3->mi_valid = 0;

  VAR_3->state.angled_headers = 0;


  if (! (VAR_4->flags & VAR_1))
    {
      cpp_macro *VAR_5 = VAR_4->value.macro;

      if (VAR_5->fun_like)
 {
   _cpp_buff *VAR_6;

   VAR_3->state.prevent_expansion++;
   VAR_3->keep_tokens++;
   VAR_3->state.parsing_args = 1;
   VAR_6 = FUNC_6 (VAR_3, VAR_4);
   VAR_3->state.parsing_args = 0;
   VAR_3->keep_tokens--;
   VAR_3->state.prevent_expansion--;

   if (VAR_6 == ((void*)0))
     {
       if (FUNC_0 (VAR_3) && ! VAR_4->value.macro->syshdr)
  FUNC_5 (VAR_3, VAR_0,
 "function-like macro \"%s\" must be used with arguments in traditional C",
      FUNC_1 (VAR_4));

       return 0;
     }

   if (VAR_5->paramc > 0)
     FUNC_7 (VAR_3, VAR_4, VAR_5, (macro_arg *) VAR_6->base);
   FUNC_3 (VAR_3, VAR_6);
 }


      VAR_4->flags |= VAR_2;

      VAR_5->used = 1;

      if (VAR_5->paramc == 0)
 FUNC_2 (VAR_3, VAR_4, VAR_5->exp.tokens, VAR_5->count);

      return 1;
    }


  return FUNC_4 (VAR_3, VAR_4);
}

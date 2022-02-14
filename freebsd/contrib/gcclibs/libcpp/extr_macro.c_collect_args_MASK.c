
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_33__ {unsigned int count; TYPE_5__ const** first; } ;
typedef TYPE_4__ macro_arg ;
struct TYPE_34__ {scalar_t__ type; int flags; } ;
typedef TYPE_5__ cpp_token ;
struct TYPE_32__ {scalar_t__ in_directive; } ;
struct TYPE_35__ {TYPE_3__ state; TYPE_2__* context; TYPE_5__ const eof; } ;
typedef TYPE_6__ cpp_reader ;
struct TYPE_36__ {int paramc; scalar_t__ variadic; } ;
typedef TYPE_7__ cpp_macro ;
struct TYPE_30__ {TYPE_7__* macro; } ;
struct TYPE_37__ {TYPE_1__ value; } ;
typedef TYPE_8__ cpp_hashnode ;
struct TYPE_38__ {unsigned char* cur; unsigned char* limit; scalar_t__ base; } ;
typedef TYPE_9__ _cpp_buff ;
struct TYPE_31__ {scalar_t__ prev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_8__ const*) ;
 TYPE_9__* FUNC_2 (TYPE_6__*,TYPE_9__*,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_7__*,TYPE_8__ const*,unsigned int) ;
 int FUNC_4 (TYPE_6__*,int) ;
 TYPE_9__* FUNC_5 (TYPE_6__*,unsigned int) ;
 int FUNC_6 (TYPE_6__*,TYPE_9__*) ;
 int FUNC_7 (TYPE_6__*,int ,char*,int ) ;
 TYPE_5__* FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_4__*,int ,unsigned int) ;
 int VAR_8 ;

__attribute__((used)) static _cpp_buff *
FUNC_10 (cpp_reader *VAR_9, const cpp_hashnode *VAR_10)
{
  _cpp_buff *VAR_11, *VAR_12;
  cpp_macro *VAR_13;
  macro_arg *VAR_14, *VAR_15;
  const cpp_token *VAR_16;
  unsigned int VAR_17;

  VAR_13 = VAR_10->value.macro;
  if (VAR_13->paramc)
    VAR_17 = VAR_13->paramc;
  else
    VAR_17 = 1;
  VAR_11 = FUNC_5 (VAR_9, VAR_17 * (50 * sizeof (cpp_token *)
           + sizeof (macro_arg)));
  VAR_12 = VAR_11;
  VAR_14 = (macro_arg *) VAR_11->base;
  FUNC_9 (VAR_14, 0, VAR_17 * sizeof (macro_arg));
  VAR_11->cur = (unsigned char *) &VAR_14[VAR_17];
  VAR_15 = VAR_14, VAR_17 = 0;




  do
    {
      unsigned int VAR_18 = 0;
      unsigned int VAR_19 = 0;

      VAR_17++;
      VAR_15->first = (const cpp_token **) VAR_11->cur;

      for (;;)
 {

   if ((unsigned char *) &VAR_15->first[VAR_19 + 2] > VAR_11->limit)
     {
       VAR_11 = FUNC_2 (VAR_9, VAR_11,
           1000 * sizeof (cpp_token *));
       VAR_15->first = (const cpp_token **) VAR_11->cur;
     }

   VAR_16 = FUNC_8 (VAR_9);

   if (VAR_16->type == VAR_7)
     {

       if (VAR_19 == 0)
  continue;
     }
   else if (VAR_16->type == VAR_6)
     VAR_18++;
   else if (VAR_16->type == VAR_1)
     {
       if (VAR_18-- == 0)
  break;
     }
   else if (VAR_16->type == VAR_2)
     {


       if (VAR_18 == 0
    && ! (VAR_13->variadic && VAR_17 == VAR_13->paramc))
  break;
     }
   else if (VAR_16->type == VAR_4
     || (VAR_16->type == VAR_5 && VAR_16->flags & VAR_0))
     break;

   VAR_15->first[VAR_19++] = VAR_16;
 }


      while (VAR_19 > 0 && VAR_15->first[VAR_19 - 1]->type == VAR_7)
 VAR_19--;

      VAR_15->count = VAR_19;
      VAR_15->first[VAR_19] = &VAR_9->eof;



      if (VAR_17 <= VAR_13->paramc)
 {
   VAR_11->cur = (unsigned char *) &VAR_15->first[VAR_19 + 1];
   if (VAR_17 != VAR_13->paramc)
     VAR_15++;
 }
    }
  while (VAR_16->type != VAR_1 && VAR_16->type != VAR_4);

  if (VAR_16->type == VAR_4)
    {




      if (VAR_9->context->prev || VAR_9->state.in_directive)
 FUNC_4 (VAR_9, 1);
      FUNC_7 (VAR_9, VAR_3,
   "unterminated argument list invoking macro \"%s\"",
   FUNC_1 (VAR_10));
    }
  else
    {

      if (VAR_17 == 1 && VAR_13->paramc == 0 && VAR_14[0].count == 0)
 VAR_17 = 0;
      if (FUNC_3 (VAR_9, VAR_13, VAR_10, VAR_17))
 {







   if (VAR_13->variadic && (VAR_17 < VAR_13->paramc
      || (VAR_17 == 1 && VAR_14[0].count == 0
          && !FUNC_0 (VAR_9, VAR_8))))
     VAR_14[VAR_13->paramc - 1].first = ((void*)0);
   return VAR_12;
 }
    }


  FUNC_6 (VAR_9, VAR_12);
  return ((void*)0);
}

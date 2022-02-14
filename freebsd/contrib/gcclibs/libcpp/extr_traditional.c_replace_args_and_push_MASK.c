
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char uchar ;
struct fun_macro {int* args; TYPE_9__* node; } ;
struct block {size_t text_len; size_t arg_index; int text; } ;
struct TYPE_15__ {int base; } ;
struct TYPE_17__ {TYPE_4__* context; TYPE_3__ out; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_14__ {char* text; } ;
struct TYPE_18__ {scalar_t__ paramc; TYPE_2__ exp; } ;
typedef TYPE_6__ cpp_macro ;
typedef int _cpp_buff ;
struct TYPE_13__ {TYPE_6__* macro; } ;
struct TYPE_19__ {TYPE_1__ value; } ;
struct TYPE_16__ {int * buff; } ;


 int FUNC_0 (size_t) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_5__*,size_t) ;
 int FUNC_3 (TYPE_5__*,TYPE_9__*,char*,size_t) ;
 int FUNC_4 (char*,int,size_t) ;
 int FUNC_5 (TYPE_5__*,TYPE_9__*) ;

__attribute__((used)) static void
FUNC_6 (cpp_reader *VAR_0, struct fun_macro *VAR_1)
{
  cpp_macro *VAR_2 = VAR_1->node->value.macro;

  if (VAR_2->paramc == 0)
    FUNC_5 (VAR_0, VAR_1->node);
  else
    {
      const uchar *VAR_3;
      uchar *VAR_4;
      _cpp_buff *VAR_5;
      size_t VAR_6 = 0;


      for (VAR_3 = VAR_2->exp.text;;)
 {
   struct block *VAR_7 = (struct block *) VAR_3;

   VAR_6 += VAR_7->text_len;
   if (VAR_7->arg_index == 0)
     break;
   VAR_6 += (VAR_1->args[VAR_7->arg_index]
    - VAR_1->args[VAR_7->arg_index - 1] - 1);
   VAR_3 += FUNC_0 (VAR_7->text_len);
 }


      VAR_5 = FUNC_2 (VAR_0, VAR_6 + 1);


      VAR_4 = FUNC_1 (VAR_5);
      for (VAR_3 = VAR_2->exp.text;;)
 {
   struct block *VAR_8 = (struct block *) VAR_3;
   size_t VAR_9;

   FUNC_4 (VAR_4, VAR_8->text, VAR_8->text_len);
   VAR_4 += VAR_8->text_len;
   if (VAR_8->arg_index == 0)
     break;
   VAR_9 = (VAR_1->args[VAR_8->arg_index]
      - VAR_1->args[VAR_8->arg_index - 1] - 1);
   FUNC_4 (VAR_4, VAR_0->out.base + VAR_1->args[VAR_8->arg_index - 1],
    VAR_9);
   VAR_4 += VAR_9;
   VAR_3 += FUNC_0 (VAR_8->text_len);
 }


      *VAR_4 = '\n';
      FUNC_3 (VAR_0, VAR_1->node, FUNC_1 (VAR_5), VAR_6);


      VAR_0->context->buff = VAR_5;
    }
}

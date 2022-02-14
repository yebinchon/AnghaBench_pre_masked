
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar ;
struct block {int arg_index; scalar_t__ text_len; } ;
struct TYPE_4__ {int * text; } ;
struct TYPE_5__ {scalar_t__ paramc; size_t count; int * params; TYPE_1__ exp; scalar_t__ fun_like; } ;
typedef TYPE_2__ cpp_macro ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

size_t
FUNC_2 (const cpp_macro *VAR_0)
{
  size_t VAR_1;

  if (VAR_0->fun_like && (VAR_0->paramc != 0))
    {
      const uchar *VAR_2;

      VAR_1 = 0;
      for (VAR_2 = VAR_0->exp.text;;)
 {
   struct block *VAR_3 = (struct block *) VAR_2;

   VAR_1 += VAR_3->text_len;
   if (VAR_3->arg_index == 0)
     break;
   VAR_1 += FUNC_1 (VAR_0->params[VAR_3->arg_index - 1]);
   VAR_2 += FUNC_0 (VAR_3->text_len);
 }
    }
  else
    VAR_1 = VAR_0->count;

  return VAR_1;
}

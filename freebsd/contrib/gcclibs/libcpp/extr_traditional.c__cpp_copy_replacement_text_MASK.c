
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar ;
struct block {int arg_index; int text_len; int * text; } ;
struct TYPE_4__ {int * text; } ;
struct TYPE_5__ {scalar_t__ paramc; int count; TYPE_1__ exp; int ** params; scalar_t__ fun_like; } ;
typedef TYPE_2__ cpp_macro ;
typedef int cpp_hashnode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;

uchar *
FUNC_4 (const cpp_macro *VAR_0, uchar *VAR_1)
{
  if (VAR_0->fun_like && (VAR_0->paramc != 0))
    {
      const uchar *VAR_2;

      for (VAR_2 = VAR_0->exp.text;;)
 {
   struct block *VAR_3 = (struct block *) VAR_2;
   cpp_hashnode *VAR_4;

   FUNC_3 (VAR_1, VAR_3->text, VAR_3->text_len);
   VAR_1 += VAR_3->text_len;
   if (VAR_3->arg_index == 0)
     break;
   VAR_4 = VAR_0->params[VAR_3->arg_index - 1];
   FUNC_3 (VAR_1, FUNC_2 (VAR_4), FUNC_1 (VAR_4));
   VAR_1 += FUNC_1 (VAR_4);
   VAR_2 += FUNC_0 (VAR_3->text_len);
 }
    }
  else
    {
      FUNC_3 (VAR_1, VAR_0->exp.text, VAR_0->count);
      VAR_1 += VAR_0->count;
    }

  return VAR_1;
}

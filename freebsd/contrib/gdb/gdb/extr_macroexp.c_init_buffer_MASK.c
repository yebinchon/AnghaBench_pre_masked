
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {int size; char* text; int last_token; scalar_t__ shared; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (struct macro_buffer *VAR_0, int VAR_1)
{

  VAR_1 = 1;

  VAR_0->size = VAR_1;
  if (VAR_1 > 0)
    VAR_0->text = (char *) FUNC_0 (VAR_1);
  else
    VAR_0->text = ((void*)0);
  VAR_0->len = 0;
  VAR_0->shared = 0;
  VAR_0->last_token = -1;
}

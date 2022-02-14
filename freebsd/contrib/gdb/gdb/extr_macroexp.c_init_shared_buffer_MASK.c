
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {char* text; int len; int shared; int last_token; scalar_t__ size; } ;



__attribute__((used)) static void
FUNC_0 (struct macro_buffer *VAR_0, char *VAR_1, int VAR_2)
{
  VAR_0->text = VAR_1;
  VAR_0->len = VAR_2;
  VAR_0->shared = 1;
  VAR_0->size = 0;
  VAR_0->last_token = -1;
}

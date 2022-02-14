
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_print_info {int options; char last_char; scalar_t__ demangle_failure; void* opaque; int callback; int * modifiers; int * templates; scalar_t__ len; } ;
typedef int demangle_callbackref ;



__attribute__((used)) static void
FUNC_0 (struct d_print_info *VAR_0, int VAR_1,
              demangle_callbackref VAR_2, void *VAR_3)
{
  VAR_0->options = VAR_1;
  VAR_0->len = 0;
  VAR_0->last_char = '\0';
  VAR_0->templates = ((void*)0);
  VAR_0->modifiers = ((void*)0);

  VAR_0->callback = VAR_2;
  VAR_0->opaque = VAR_3;

  VAR_0->demangle_failure = 0;
}

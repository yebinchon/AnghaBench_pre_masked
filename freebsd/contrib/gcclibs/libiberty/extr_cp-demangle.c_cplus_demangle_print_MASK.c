
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_print_info {int options; int alc; char* buf; size_t allocation_failure; int * modifiers; int * templates; scalar_t__ len; } ;


 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,struct demangle_component const*) ;
 scalar_t__ FUNC_2 (int) ;

char *
FUNC_3 (int VAR_0, const struct demangle_component *VAR_1,
                      int VAR_2, size_t *VAR_3)
{
  struct d_print_info VAR_4;

  VAR_4.options = VAR_0;

  VAR_4.alc = VAR_2 + 1;
  VAR_4.buf = (char *) FUNC_2 (VAR_4.alc);
  if (VAR_4.buf == ((void*)0))
    {
      *VAR_3 = 1;
      return ((void*)0);
    }

  VAR_4.len = 0;
  VAR_4.templates = ((void*)0);
  VAR_4.modifiers = ((void*)0);

  VAR_4.allocation_failure = 0;

  FUNC_1 (&VAR_4, VAR_1);

  FUNC_0 (&VAR_4, '\0');

  if (VAR_4.buf != ((void*)0))
    *VAR_3 = VAR_4.alc;
  else
    *VAR_3 = VAR_4.allocation_failure;

  return VAR_4.buf;
}

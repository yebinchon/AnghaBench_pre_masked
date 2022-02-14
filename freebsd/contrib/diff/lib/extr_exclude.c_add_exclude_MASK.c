
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patopts {char const* pattern; int options; } ;
struct exclude {scalar_t__ exclude_count; scalar_t__ exclude_alloc; struct patopts* exclude; } ;


 struct patopts* FUNC_0 (struct patopts*,scalar_t__*,int) ;

void
FUNC_1 (struct exclude *VAR_0, char const *VAR_1, int VAR_2)
{
  struct patopts *VAR_3;

  if (VAR_0->exclude_count == VAR_0->exclude_alloc)
    VAR_0->exclude = FUNC_0 (VAR_0->exclude, &VAR_0->exclude_alloc,
         sizeof *VAR_0->exclude);

  VAR_3 = &VAR_0->exclude[VAR_0->exclude_count++];
  VAR_3->pattern = VAR_1;
  VAR_3->options = VAR_2;
}

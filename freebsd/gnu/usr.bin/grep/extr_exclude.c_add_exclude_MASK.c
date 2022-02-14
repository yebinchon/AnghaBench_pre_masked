
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {int exclude_alloc; int exclude_count; char const** exclude; } ;


 scalar_t__ FUNC_0 (char const**,int) ;

void
FUNC_1 (struct exclude *VAR_0, char const *VAR_1)
{
  if (VAR_0->exclude_alloc <= VAR_0->exclude_count)
    VAR_0->exclude = (char const **) FUNC_0 (VAR_0->exclude,
         ((VAR_0->exclude_alloc *= 2)
          * sizeof (char *)));

  VAR_0->exclude[VAR_0->exclude_count++] = VAR_1;
}

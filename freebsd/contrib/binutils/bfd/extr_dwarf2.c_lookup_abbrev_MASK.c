
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abbrev_info {unsigned int number; struct abbrev_info* next; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct abbrev_info *
FUNC_0 (unsigned int VAR_1, struct abbrev_info **VAR_2)
{
  unsigned int VAR_3;
  struct abbrev_info *VAR_4;

  VAR_3 = VAR_1 % VAR_0;
  VAR_4 = VAR_2[VAR_3];

  while (VAR_4)
    {
      if (VAR_4->number == VAR_1)
 return VAR_4;
      else
 VAR_4 = VAR_4->next;
    }

  return ((void*)0);
}

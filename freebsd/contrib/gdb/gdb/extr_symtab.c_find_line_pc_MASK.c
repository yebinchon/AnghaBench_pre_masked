
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {int dummy; } ;
struct linetable {TYPE_1__* item; } ;
struct TYPE_2__ {int pc; } ;
typedef int CORE_ADDR ;


 struct linetable* FUNC_0 (struct symtab*) ;
 struct symtab* FUNC_1 (struct symtab*,int,int*,int *) ;

int
FUNC_2 (struct symtab *VAR_0, int VAR_1, CORE_ADDR *VAR_2)
{
  struct linetable *VAR_3;
  int VAR_4;

  *VAR_2 = 0;
  if (VAR_0 == 0)
    return 0;

  VAR_0 = FUNC_1 (VAR_0, VAR_1, &VAR_4, ((void*)0));
  if (VAR_0 != ((void*)0))
    {
      VAR_3 = FUNC_0 (VAR_0);
      *VAR_2 = VAR_3->item[VAR_4].pc;
      return 1;
    }
  else
    return 0;
}

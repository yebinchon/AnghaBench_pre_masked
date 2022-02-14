
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int num; struct loop** parray; } ;
struct loop {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct loop*,int *,void (*) (struct loop const*,int *,int),int) ;
 int FUNC_1 (struct loops const*,int *) ;
 int FUNC_2 (int *,char*,int) ;

void
FUNC_3 (const struct loops *VAR_0, FILE *VAR_1, void (*VAR_2) (const struct loop *, FILE *, int), int VAR_3)
{
  int VAR_4;
  int VAR_5;

  VAR_5 = VAR_0->num;
  if (! VAR_5 || ! VAR_1)
    return;

  FUNC_2 (VAR_1, ";; %d loops found\n", VAR_5);

  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    {
      struct loop *VAR_6 = VAR_0->parray[VAR_4];

      if (!VAR_6)
 continue;

      FUNC_0 (VAR_6, VAR_1, VAR_2, VAR_3);
    }

  if (VAR_3)
    FUNC_1 (VAR_0, VAR_1);
}

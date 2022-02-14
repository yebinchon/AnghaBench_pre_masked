
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; struct loop** parray; } ;
struct loop {int dummy; } ;


 int FUNC_0 (struct loop*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3 (struct loops *VAR_0)
{
  unsigned VAR_1;
  struct loop *VAR_2;



  FUNC_1 ();

  for (VAR_1 = 1; VAR_1 < VAR_0->num; VAR_1++)
    {
      VAR_2 = VAR_0->parray[VAR_1];
      if (VAR_2)
 FUNC_0 (VAR_2);
    }

  FUNC_2 ();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; struct loop** parray; } ;
struct loop {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct loops*,struct loop*,int,int ,int) ;
 int FUNC_1 () ;

unsigned int
FUNC_2 (struct loops *VAR_2)
{
  unsigned VAR_3;
  struct loop *VAR_4;
  bool VAR_5 = 0;

  for (VAR_3 = 1; VAR_3 < VAR_2->num; VAR_3++)
    {
      VAR_4 = VAR_2->parray[VAR_3];

      if (VAR_4)
 VAR_5 |= FUNC_0 (VAR_2, VAR_4,
         1, VAR_1,
         1);
    }



  FUNC_1 ();

  if (VAR_5)
    return VAR_0;
  return 0;
}

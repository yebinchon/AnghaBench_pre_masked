
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int num; struct loop** parray; } ;
struct loop {scalar_t__ inner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct loops*,struct loop*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct loops*) ;

void
FUNC_4 (struct loops *VAR_2)
{
  int VAR_3, VAR_4;
  struct loop *VAR_5;


  VAR_4 = VAR_2->num;

  for (VAR_3 = 1; VAR_3 < VAR_4; VAR_3++)
    {

      VAR_5 = VAR_2->parray[VAR_3];
      if (!VAR_5)
 continue;

      if (VAR_5->inner)
 continue;

      FUNC_1 (VAR_2, VAR_5, VAR_1, 0);




    }

  FUNC_0 ();
}

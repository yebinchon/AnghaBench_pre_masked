
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; struct loop** parray; } ;
struct loop {int * aux; } ;
typedef int * loop_vec_info ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct loop*) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int * FUNC_6 (struct loop*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,struct loops*) ;
 int VAR_5 ;

void
FUNC_10 (struct loops *VAR_6)
{
  unsigned int VAR_7;
  unsigned int VAR_8 = 0;


  FUNC_8 ();



  VAR_5 = FUNC_0 (((void*)0));






  VAR_4 = VAR_6->num;
  for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++)
    {
      loop_vec_info VAR_9;
      struct loop *VAR_10 = VAR_6->parray[VAR_7];

      if (!VAR_10)
        continue;

      VAR_3 = FUNC_4 (VAR_10);
      VAR_9 = FUNC_6 (VAR_10);
      VAR_10->aux = VAR_9;

      if (!VAR_9 || !FUNC_2 (VAR_9))
 continue;

      FUNC_9 (VAR_9, VAR_6);
      VAR_8++;
    }
  VAR_3 = VAR_1;

  if (FUNC_7 (VAR_0))
    FUNC_5 (VAR_2, "vectorized %u loops in function.\n",
      VAR_8);



  FUNC_1 (VAR_5);

  for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++)
    {
      struct loop *VAR_11 = VAR_6->parray[VAR_7];
      loop_vec_info VAR_12;

      if (!VAR_11)
 continue;
      VAR_12 = VAR_11->aux;
      FUNC_3 (VAR_12);
      VAR_11->aux = ((void*)0);
    }
}

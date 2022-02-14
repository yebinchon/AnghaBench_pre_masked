
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct loop {unsigned int num_nodes; } ;
typedef int bitmap ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 struct loop* VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__**) ;
 TYPE_1__** FUNC_9 (struct loop*) ;
 int FUNC_10 (int,int ,int ,int (*) (TYPE_1__**)) ;

void
FUNC_11 (struct loop *VAR_8)
{
  basic_block *VAR_9 = FUNC_9 (VAR_8), VAR_10;
  bitmap VAR_11 = FUNC_0 (((void*)0));
  unsigned VAR_12;
  bool VAR_13 = (VAR_7 == ((void*)0));

  VAR_6 = VAR_8;


  if (VAR_13)
    {
      VAR_7 = FUNC_6 (VAR_1 | VAR_0);
      FUNC_5 (VAR_7, VAR_2);
      VAR_5 = FUNC_10 (10, VAR_4, VAR_3, FUNC_8);
    }
  else
    FUNC_3 ();

  for (VAR_12 = 0; VAR_12 < VAR_8->num_nodes; VAR_12++)
    {
      VAR_10 = VAR_9[VAR_12];
      FUNC_2 (VAR_11, VAR_10->index);
    }
  FUNC_7 (VAR_7, VAR_11);
  FUNC_4 (VAR_7);
  FUNC_1 (VAR_11);
  FUNC_8 (VAR_9);
}

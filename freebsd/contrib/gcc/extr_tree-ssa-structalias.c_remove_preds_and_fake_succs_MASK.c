
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* constraint_graph_t ;
typedef int bitmap ;
struct TYPE_3__ {unsigned int size; int * preds; int * implicit_preds; scalar_t__* succs; } ;


 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_6 (constraint_graph_t VAR_4)
{
  unsigned int VAR_5;



  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
      if (VAR_4->succs[VAR_5])
 FUNC_2 (VAR_4->succs[VAR_5], VAR_0,
       VAR_0 * 2);
    }


  for (VAR_5 = VAR_0; VAR_5 < VAR_4->size; VAR_5++)
    {
      if (VAR_4->succs[VAR_5])
 FUNC_0 (VAR_4->succs[VAR_5]);
    }



  VAR_4->size = FUNC_1 (VAR_2, VAR_3);
  VAR_4->succs = FUNC_5 (VAR_4->succs, VAR_4->size * sizeof (bitmap));

  FUNC_4 (VAR_4->implicit_preds);
  VAR_4->implicit_preds = ((void*)0);
  FUNC_4 (VAR_4->preds);
  VAR_4->preds = ((void*)0);
  FUNC_3 (&VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct loop {unsigned int num_nodes; } ;
typedef int bitmap ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (struct loop *VAR_1, basic_block *VAR_2)
{
  unsigned VAR_3;
  bitmap VAR_4 = FUNC_0 (((void*)0));

  for (VAR_3 = 0; VAR_3 < VAR_1->num_nodes; VAR_3++)
    FUNC_2 (VAR_4, VAR_2[VAR_3]->index);

  FUNC_4 (VAR_0, VAR_4);
  FUNC_3 (VAR_0);
  FUNC_1 (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {unsigned int num_nodes; int latch; } ;
typedef int bitmap ;
typedef int basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct loop *VAR_1, basic_block *VAR_2,
   bitmap VAR_3, bitmap VAR_4)
{
  unsigned VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_1->num_nodes; VAR_5++)
    {
      if (FUNC_2 (VAR_0, VAR_1->latch, VAR_2[VAR_5]))
 FUNC_1 (VAR_4, VAR_5);

      if (FUNC_0 (VAR_3, VAR_5))
 return;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {unsigned int num_nodes; } ;
typedef int bitmap ;
typedef int basic_block ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct loop *VAR_0, basic_block *VAR_1,
        bitmap VAR_2, bitmap VAR_3)
{
  unsigned VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0->num_nodes; VAR_4++)
    FUNC_1 (VAR_1[VAR_4],
   FUNC_0 (VAR_2, VAR_4),
   FUNC_0 (VAR_3, VAR_4));
}

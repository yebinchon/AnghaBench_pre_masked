
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {unsigned int num_nodes; } ;
typedef int basic_block ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct loop*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3 (struct loop *VAR_0)
{
  unsigned VAR_1;
  basic_block *VAR_2;

  VAR_2 = FUNC_1 (VAR_0);

  for (VAR_1 = 0; VAR_1 < VAR_0->num_nodes; VAR_1++)
    FUNC_2 (VAR_2[VAR_1]);

  FUNC_0 (VAR_2);
}

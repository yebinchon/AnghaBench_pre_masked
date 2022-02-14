
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {unsigned int num_nodes; } ;
typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (struct loop*) ;

int
FUNC_6 (struct loop *VAR_0)
{
  basic_block *VAR_1, VAR_2;
  unsigned VAR_3, VAR_4 = 0;
  rtx VAR_5;

  VAR_1 = FUNC_5 (VAR_0);
  for (VAR_3 = 0; VAR_3 < VAR_0->num_nodes; VAR_3++)
    {
      VAR_2 = VAR_1[VAR_3];
      VAR_4++;
      for (VAR_5 = FUNC_1 (VAR_2); VAR_5 != FUNC_0 (VAR_2); VAR_5 = FUNC_3 (VAR_5))
 if (FUNC_2 (VAR_5))
   VAR_4++;
    }
  FUNC_4(VAR_1);

  return VAR_4;
}

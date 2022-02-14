
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df {scalar_t__* problems_by_index; } ;
typedef int bitmap ;
typedef int basic_block ;


 int FUNC_0 (struct df*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct df*,int ) ;
 int FUNC_2 (struct df*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (scalar_t__) ;

bitmap
FUNC_4 (struct df *VAR_3, basic_block VAR_4)
{
  FUNC_3 (VAR_3->problems_by_index[VAR_0]);

  if (VAR_3->problems_by_index[VAR_2])
    return FUNC_1 (VAR_3, VAR_4);
  else if (VAR_3->problems_by_index[VAR_1])
    return FUNC_0 (VAR_3, VAR_4);
  else
    return FUNC_2 (VAR_3, VAR_4);
}

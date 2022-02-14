
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ value; } ;
typedef TYPE_1__ prop_value_t ;
typedef enum ssa_prop_result { ____Placeholder_ssa_prop_result } ssa_prop_result ;
typedef int edge ;
typedef int basic_block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static enum ssa_prop_result
FUNC_3 (tree VAR_2, edge *VAR_3)
{
  prop_value_t VAR_4;
  basic_block VAR_5;

  VAR_5 = FUNC_0 (VAR_2);
  VAR_4 = FUNC_1 (VAR_2);





  *VAR_3 = VAR_4.value ? FUNC_2 (VAR_5, VAR_4.value) : 0;
  if (*VAR_3)
    return VAR_0;
  else
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct tree_phi_node {int dummy; } ;
struct phi_arg_d {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static inline tree
FUNC_3 (int VAR_8)
{
  tree VAR_9;
  int VAR_10 = VAR_0 - 2;
  int VAR_11 = (sizeof (struct tree_phi_node)
       + (VAR_8 - 1) * sizeof (struct phi_arg_d));

  if (VAR_1)
    for (VAR_10 = VAR_8 - 2; VAR_10 < VAR_0 - 2; VAR_10++)
      if (VAR_2[VAR_10])
 break;


  if (VAR_10 < VAR_0 - 2
      && FUNC_0 (VAR_2[VAR_10]) >= VAR_8)
    {
      VAR_1--;
      VAR_9 = VAR_2[VAR_10];
      VAR_2[VAR_10] = FUNC_1 (VAR_2[VAR_10]);



    }
  else
    {
      VAR_9 = FUNC_2 (VAR_11);





    }

  return VAR_9;
}

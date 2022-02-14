
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_phi_node {int dummy; } ;
struct phi_arg_d {int dummy; } ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static int
FUNC_1 (int VAR_0)
{
  size_t VAR_1, VAR_2;
  int VAR_3, VAR_4;


  if (VAR_0 < 2)
    VAR_0 = 2;


  VAR_1 = sizeof (struct tree_phi_node) + (VAR_0 - 1) * sizeof (struct phi_arg_d);


  VAR_3 = FUNC_0 (VAR_1);
  VAR_2 = 1 << VAR_3;



  VAR_4 = VAR_0 + (VAR_2 - VAR_1) / sizeof (struct phi_arg_d);
  return VAR_4;
}

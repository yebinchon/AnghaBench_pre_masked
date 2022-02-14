
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_parm {int attrs; int specs; int declarator; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int *) ;

tree
FUNC_2 (const struct c_parm *VAR_1)
{
  tree VAR_2 = FUNC_1 (VAR_1->declarator, VAR_1->specs, VAR_0, 0,
         ((void*)0));

  FUNC_0 (&VAR_2, VAR_1->attrs, 0);

  return VAR_2;
}

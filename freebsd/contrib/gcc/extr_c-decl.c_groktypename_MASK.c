
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct c_type_name {TYPE_1__* specs; int declarator; } ;
struct TYPE_2__ {int attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int,int *) ;

tree
FUNC_2 (struct c_type_name *VAR_2)
{
  tree VAR_3;
  tree VAR_4 = VAR_2->specs->attrs;

  VAR_2->specs->attrs = VAR_0;

  VAR_3 = FUNC_1 (VAR_2->declarator, VAR_2->specs, VAR_1,
    0, ((void*)0));


  FUNC_0 (&VAR_3, VAR_4, 0);

  return VAR_3;
}

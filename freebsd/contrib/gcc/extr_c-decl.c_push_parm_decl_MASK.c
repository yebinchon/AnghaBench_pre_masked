
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_parm {int attrs; int specs; int declarator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4 (const struct c_parm *VAR_2)
{
  tree VAR_3;

  VAR_3 = FUNC_2 (VAR_2->declarator, VAR_2->specs, VAR_1, 0, ((void*)0));
  FUNC_0 (&VAR_3, VAR_2->attrs, 0);

  VAR_3 = FUNC_3 (VAR_3);

  FUNC_1 (VAR_3, VAR_0, VAR_0);
}

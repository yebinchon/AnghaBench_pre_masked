
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f_ksid; } ;
typedef TYPE_1__ fuid_domain_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,void**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(avl_tree_t *VAR_0, avl_tree_t *VAR_1)
{
 fuid_domain_t *VAR_2;
 void *VAR_3;

 VAR_3 = ((void*)0);
 while ((VAR_2 = FUNC_1(VAR_1, &VAR_3)))
  FUNC_3(VAR_2->f_ksid);

 FUNC_0(VAR_1);
 VAR_3 = ((void*)0);
 while ((VAR_2 = FUNC_1(VAR_0, &VAR_3)))
  FUNC_2(VAR_2, sizeof (fuid_domain_t));
 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l_rwlock; } ;
typedef TYPE_1__ zap_leaf_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 zap_leaf_t *VAR_1 = VAR_0;

 FUNC_1(&VAR_1->l_rwlock);
 FUNC_0(VAR_1, sizeof (zap_leaf_t));
}

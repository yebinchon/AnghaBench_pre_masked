
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ rbnode_type ;


 TYPE_1__* VAR_0 ;
 void FUNC_0 (TYPE_1__*,void*) ;

__attribute__((used)) static void
FUNC_1(void (*VAR_1)(rbnode_type*, void*), void* VAR_2, rbnode_type* VAR_3)
{
 if(!VAR_3 || VAR_3 == VAR_0)
  return;

 FUNC_1(VAR_1, VAR_2, VAR_3->left);
 FUNC_1(VAR_1, VAR_2, VAR_3->right);

 (*VAR_1)(VAR_3, VAR_2);
}

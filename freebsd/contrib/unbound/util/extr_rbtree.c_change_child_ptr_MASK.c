
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* parent; } ;
typedef TYPE_1__ rbnode_type ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(rbnode_type* VAR_1, rbnode_type* VAR_2,
 rbnode_type* VAR_3)
{
 if(VAR_1 == VAR_0) return;
 FUNC_0(VAR_1->parent == VAR_2 || VAR_1->parent == VAR_3);
 if(VAR_1->parent == VAR_2) VAR_1->parent = VAR_3;
}

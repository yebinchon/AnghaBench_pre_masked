
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; int * right; int * left; int * pre; scalar_t__ visited; int status; int * linklist; scalar_t__ channelID; } ;
typedef TYPE_1__ cdg_node_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(cdg_node_t * VAR_1)
{
 VAR_1->channelID = 0;
 VAR_1->linklist = ((void*)0);
 VAR_1->status = VAR_0;
 VAR_1->visited = 0;
 VAR_1->pre = ((void*)0);
 VAR_1->left = ((void*)0);
 VAR_1->right = ((void*)0);
 VAR_1->parent = ((void*)0);
}

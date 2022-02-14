
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ channelID; struct TYPE_4__* parent; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ cdg_node_t ;



__attribute__((used)) static void FUNC_0(cdg_node_t ** VAR_0, cdg_node_t * VAR_1)
{
 cdg_node_t *VAR_2 = *VAR_0;

 if (!VAR_2) {
  VAR_2 = VAR_1;
  *VAR_0 = VAR_2;
  return;
 }

 while (VAR_2) {
  if (VAR_1->channelID < VAR_2->channelID) {
   if (VAR_2->left) {
    VAR_2 = VAR_2->left;
   } else {
    VAR_2->left = VAR_1;
    VAR_1->parent = VAR_2;
    break;
   }
  } else if (VAR_1->channelID > VAR_2->channelID) {
   if (VAR_2->right) {
    VAR_2 = VAR_2->right;
   } else {
    VAR_2->right = VAR_1;
    VAR_1->parent = VAR_2;
    break;
   }
  } else if (VAR_1->channelID == VAR_2->channelID) {

   break;
  }
 }
}

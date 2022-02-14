
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ channelID; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ cdg_node_t ;



__attribute__((used)) static cdg_node_t *FUNC_0(cdg_node_t * VAR_0, uint64_t VAR_1)
{
 while (VAR_0) {
  if (VAR_1 < VAR_0->channelID)
   VAR_0 = VAR_0->left;
  else if (VAR_1 > VAR_0->channelID)
   VAR_0 = VAR_0->right;
  else if (VAR_1 == VAR_0->channelID)
   return VAR_0;
 }
 return ((void*)0);
}

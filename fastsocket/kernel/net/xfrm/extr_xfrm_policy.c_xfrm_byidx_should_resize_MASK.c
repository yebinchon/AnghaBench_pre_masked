
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int policy_idx_hmask; } ;
struct net {TYPE_1__ xfrm; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct net *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->xfrm.policy_idx_hmask;

 if ((VAR_3 + 1) < VAR_0 &&
     VAR_2 > VAR_3)
  return 1;

 return 0;
}

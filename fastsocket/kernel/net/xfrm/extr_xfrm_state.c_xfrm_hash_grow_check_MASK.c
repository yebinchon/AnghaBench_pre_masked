
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state_hmask; scalar_t__ state_num; int state_hash_work; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct net *VAR_1, int VAR_2)
{
 if (VAR_2 &&
     (VAR_1->xfrm.state_hmask + 1) < VAR_0 &&
     VAR_1->xfrm.state_num > VAR_1->xfrm.state_hmask)
  FUNC_0(&VAR_1->xfrm.state_hash_work);
}

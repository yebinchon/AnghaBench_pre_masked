
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int policy_idx_hmask; struct hlist_head* policy_byidx; } ;
struct net {TYPE_1__ xfrm; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hlist_head* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct hlist_head*,unsigned int) ;
 int FUNC_4 (struct hlist_head*,struct hlist_head*,unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct net *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->xfrm.policy_idx_hmask;
 unsigned int VAR_4 = FUNC_5(VAR_3);
 unsigned int VAR_5 = (VAR_4 + 1) * sizeof(struct hlist_head);
 struct hlist_head *VAR_6 = VAR_1->xfrm.policy_byidx;
 struct hlist_head *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 if (!VAR_7)
  return;

 FUNC_0(&VAR_0);

 for (VAR_8 = VAR_3; VAR_8 >= 0; VAR_8--)
  FUNC_4(VAR_6 + VAR_8, VAR_7, VAR_4);

 VAR_1->xfrm.policy_byidx = VAR_7;
 VAR_1->xfrm.policy_idx_hmask = VAR_4;

 FUNC_1(&VAR_0);

 FUNC_3(VAR_6, (VAR_3 + 1) * sizeof(struct hlist_head));
}

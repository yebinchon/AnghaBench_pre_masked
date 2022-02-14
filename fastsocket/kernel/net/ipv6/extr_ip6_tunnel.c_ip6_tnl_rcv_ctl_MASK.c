
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip6_tnl_parm {int flags; int raddr; int laddr; scalar_t__ link; } ;
struct ip6_tnl {int dev; struct ip6_tnl_parm parms; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct net*,int *,struct net_device*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct ip6_tnl *VAR_1)
{
 struct ip6_tnl_parm *VAR_2 = &VAR_1->parms;
 int VAR_3 = 0;
 struct net *VAR_4 = FUNC_1(VAR_1->dev);

 if (VAR_2->flags & VAR_0) {
  struct net_device *VAR_5 = ((void*)0);

  if (VAR_2->link)
   VAR_5 = FUNC_0(VAR_4, VAR_2->link);

  if ((FUNC_3(&VAR_2->laddr) ||
       FUNC_5(FUNC_4(VAR_4, &VAR_2->laddr, VAR_5, 0))) &&
      FUNC_5(!FUNC_4(VAR_4, &VAR_2->raddr, ((void*)0), 0)))
   VAR_3 = 1;

  if (VAR_5)
   FUNC_2(VAR_5);
 }
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_tnl_parm {int flags; scalar_t__ link; int raddr; int laddr; } ;
struct ip6_tnl {struct ip6_tnl_parm parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ip6_tnl *VAR_6)
{
 struct ip6_tnl_parm *VAR_7 = &VAR_6->parms;
 int VAR_8 = FUNC_0(&VAR_7->laddr);
 int VAR_9 = FUNC_0(&VAR_7->raddr);

 VAR_7->flags &= ~(VAR_1|VAR_0);

 if (VAR_8 & (VAR_5|VAR_4) &&
     VAR_9 & (VAR_5|VAR_4) &&
     !((VAR_8|VAR_9) & VAR_3) &&
     (!((VAR_8|VAR_9) & VAR_2) || VAR_7->link)) {
  if (VAR_8&VAR_5)
   VAR_7->flags |= VAR_1;
  if (VAR_9&VAR_5)
   VAR_7->flags |= VAR_0;
 }
}

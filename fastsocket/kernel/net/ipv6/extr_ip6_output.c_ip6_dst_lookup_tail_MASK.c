
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rt6_info {int dummy; } ;
struct net {int dummy; } ;
struct inet6_ifaddr {int flags; } ;
struct in6_addr {int dummy; } ;
struct flowi {int fl6_dst; int fl6_src; } ;
struct dst_entry {int error; int dev; TYPE_1__* neighbour; } ;
struct TYPE_4__ {int srcprefs; } ;
struct TYPE_3__ {int nud_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct net*,struct rt6_info*,int *,int ,int *) ;
 struct dst_entry* FUNC_5 (struct net*,struct sock*,struct flowi*) ;
 scalar_t__ FUNC_6 (int *) ;
 struct inet6_ifaddr* FUNC_7 (struct net*,int *,int ,int) ;
 int FUNC_8 (struct flowi*,struct flowi*,int) ;
 int FUNC_9 (int *,int ,int) ;
 struct net* FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_4,
          struct dst_entry **VAR_5, struct flowi *VAR_6)
{
 int VAR_7;
 struct net *VAR_8 = FUNC_10(VAR_4);

 if (*VAR_5 == ((void*)0))
  *VAR_5 = FUNC_5(VAR_8, VAR_4, VAR_6);

 if ((VAR_7 = (*VAR_5)->error))
  goto out_err_release;

 if (FUNC_6(&VAR_6->fl6_src)) {
  struct rt6_info *VAR_9 = (struct rt6_info *) *VAR_5;
  VAR_7 = FUNC_4(VAR_8, VAR_9, &VAR_6->fl6_dst,
       VAR_4 ? FUNC_3(VAR_4)->srcprefs : 0,
       &VAR_6->fl6_src);

  if (VAR_7)
   goto out_err_release;
 }
 return 0;

out_err_release:
 if (VAR_7 == -VAR_0)
  FUNC_0(VAR_8, ((void*)0), VAR_2);
 FUNC_1(*VAR_5);
 *VAR_5 = ((void*)0);
 return VAR_7;
}

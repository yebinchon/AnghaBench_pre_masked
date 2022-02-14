
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct flowi {int fl6_src; int fl6_dst; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {unsigned int srcprefs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dst_entry* FUNC_0 (struct net*,struct flowi*,int,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

struct dst_entry * FUNC_4(struct net *VAR_9, struct sock *VAR_10,
        struct flowi *VAR_11)
{
 int VAR_12 = 0;

 if ((VAR_10 && VAR_10->sk_bound_dev_if) || FUNC_3(&VAR_11->fl6_dst))
  VAR_12 |= VAR_4;

 if (!FUNC_2(&VAR_11->fl6_src))
  VAR_12 |= VAR_3;
 else if (VAR_10) {
  unsigned int VAR_13 = FUNC_1(VAR_10)->srcprefs;
  if (VAR_13 & VAR_2)
   VAR_12 |= VAR_7;
  if (VAR_13 & VAR_1)
   VAR_12 |= VAR_6;
  if (VAR_13 & VAR_0)
   VAR_12 |= VAR_5;
 }

 return FUNC_0(VAR_9, VAR_11, VAR_12, VAR_8);
}

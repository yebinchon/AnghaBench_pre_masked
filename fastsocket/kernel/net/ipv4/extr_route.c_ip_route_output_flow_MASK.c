
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rtable {scalar_t__ rt_dst; scalar_t__ rt_src; } ;
struct net {int dummy; } ;
struct flowi {scalar_t__ fl4_dst; scalar_t__ fl4_src; scalar_t__ proto; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct rtable**,struct flowi*) ;
 int FUNC_1 (struct net*,struct dst_entry**,struct flowi*,struct sock*,int ) ;
 int FUNC_2 (struct net*,struct rtable**,struct flowi*) ;

int FUNC_3(struct net *VAR_2, struct rtable **VAR_3, struct flowi *VAR_4,
    struct sock *VAR_5, int VAR_6)
{
 int VAR_7;

 if ((VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4)) != 0)
  return VAR_7;

 if (VAR_4->proto) {
  if (!VAR_4->fl4_src)
   VAR_4->fl4_src = (*VAR_3)->rt_src;
  if (!VAR_4->fl4_dst)
   VAR_4->fl4_dst = (*VAR_3)->rt_dst;
  VAR_7 = FUNC_1(VAR_2, (struct dst_entry **)VAR_3, VAR_4, VAR_5,
        VAR_6 ? VAR_1 : 0);
  if (VAR_7 == -VAR_0)
   VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);

  return VAR_7;
 }

 return 0;
}

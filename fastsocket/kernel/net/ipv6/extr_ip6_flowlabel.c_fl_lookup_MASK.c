
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip6_flowlabel {int users; } ;
typedef int __be32 ;


 struct ip6_flowlabel* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ip6_flowlabel *FUNC_4(struct net *VAR_1, __be32 VAR_2)
{
 struct ip6_flowlabel *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(&VAR_3->users);
 FUNC_3(&VAR_0);
 return VAR_3;
}

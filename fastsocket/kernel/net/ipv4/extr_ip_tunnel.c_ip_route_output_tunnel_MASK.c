
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int oif; int proto; int fl4_tos; void* fl4_src; void* fl4_dst; } ;
typedef int __u8 ;
typedef void* __be32 ;


 struct rtable* FUNC_0 (int) ;
 int FUNC_1 (struct net*,struct rtable**,struct flowi*) ;
 int FUNC_2 (struct flowi*,int ,int) ;

__attribute__((used)) static inline struct rtable *FUNC_3(struct net *VAR_0,
          struct flowi *VAR_1,
          int VAR_2,
          __be32 VAR_3, __be32 VAR_4,
          __be32 VAR_5, __u8 VAR_6, int VAR_7)
{
 struct rtable *VAR_8;
 int VAR_9;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->oif = VAR_7;
 VAR_1->fl4_dst = VAR_3;
 VAR_1->fl4_src = VAR_4;
 VAR_1->fl4_tos = VAR_6;
 VAR_1->proto = VAR_2;
 VAR_9 = FUNC_1(VAR_0, &VAR_8, VAR_1);
 if (VAR_9)
  return FUNC_0(VAR_9);
 return VAR_8;
}

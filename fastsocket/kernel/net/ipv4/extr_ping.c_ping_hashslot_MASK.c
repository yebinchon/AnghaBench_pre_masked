
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ping_table {struct hlist_nulls_head* hash; } ;
struct net {int dummy; } ;
struct hlist_nulls_head {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct net*,unsigned int,int ) ;

__attribute__((used)) static inline struct hlist_nulls_head *FUNC_1(struct ping_table *VAR_1,
          struct net *VAR_2, unsigned VAR_3)
{
 return &VAR_1->hash[FUNC_0(VAR_2, VAR_3, VAR_0)];
}

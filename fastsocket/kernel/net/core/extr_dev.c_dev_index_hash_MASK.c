
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {struct hlist_head* dev_index_head; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct hlist_head *FUNC_0(struct net *VAR_1, int VAR_2)
{
 return &VAR_1->dev_index_head[VAR_2 & (VAR_0 - 1)];
}

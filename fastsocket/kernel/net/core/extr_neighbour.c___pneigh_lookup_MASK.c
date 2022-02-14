
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pneigh_entry {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct neigh_table {int key_len; int * phash_buckets; } ;


 struct pneigh_entry* FUNC_0 (int ,struct net*,void const*,int,struct net_device*) ;
 size_t FUNC_1 (void const*,int) ;

struct pneigh_entry *FUNC_2(struct neigh_table *VAR_0,
  struct net *VAR_1, const void *VAR_2, struct net_device *VAR_3)
{
 int VAR_4 = VAR_0->key_len;
 u32 VAR_5 = FUNC_1(VAR_2, VAR_4);

 return FUNC_0(VAR_0->phash_buckets[VAR_5],
     VAR_1, VAR_2, VAR_4, VAR_3);
}

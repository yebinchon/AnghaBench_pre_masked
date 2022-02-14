
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pneigh_entry {struct pneigh_entry* next; struct net_device* dev; int key; int net; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct neigh_table {int key_len; int lock; struct pneigh_entry** phash_buckets; scalar_t__ (* pconstructor ) (struct pneigh_entry*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct pneigh_entry* FUNC_1 (struct pneigh_entry*,struct net*,void const*,int,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net*) ;
 int FUNC_5 (struct pneigh_entry*) ;
 struct pneigh_entry* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,void const*,int) ;
 size_t FUNC_8 (void const*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct net*) ;
 scalar_t__ FUNC_12 (struct pneigh_entry*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;

struct pneigh_entry * FUNC_16(struct neigh_table *VAR_1,
        struct net *VAR_2, const void *VAR_3,
        struct net_device *VAR_4, int VAR_5)
{
 struct pneigh_entry *VAR_6;
 int VAR_7 = VAR_1->key_len;
 u32 VAR_8 = FUNC_8(VAR_3, VAR_7);

 FUNC_9(&VAR_1->lock);
 VAR_6 = FUNC_1(VAR_1->phash_buckets[VAR_8],
         VAR_2, VAR_3, VAR_7, VAR_4);
 FUNC_10(&VAR_1->lock);

 if (VAR_6 || !VAR_5)
  goto out;

 FUNC_0();

 VAR_6 = FUNC_6(sizeof(*VAR_6) + VAR_7, VAR_0);
 if (!VAR_6)
  goto out;

 FUNC_14(&VAR_6->net, FUNC_4(VAR_2));
 FUNC_7(VAR_6->key, VAR_3, VAR_7);
 VAR_6->dev = VAR_4;
 if (VAR_4)
  FUNC_2(VAR_4);

 if (VAR_1->pconstructor && VAR_1->pconstructor(VAR_6)) {
  if (VAR_4)
   FUNC_3(VAR_4);
  FUNC_11(VAR_2);
  FUNC_5(VAR_6);
  VAR_6 = ((void*)0);
  goto out;
 }

 FUNC_13(&VAR_1->lock);
 VAR_6->next = VAR_1->phash_buckets[VAR_8];
 VAR_1->phash_buckets[VAR_8] = VAR_6;
 FUNC_15(&VAR_1->lock);
out:
 return VAR_6;
}

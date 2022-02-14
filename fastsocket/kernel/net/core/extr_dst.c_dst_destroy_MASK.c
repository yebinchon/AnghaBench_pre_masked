
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int dummy; } ;
struct hh_cache {int hh_refcnt; } ;
struct dst_entry {int flags; int __refcnt; TYPE_1__* ops; scalar_t__ dev; struct neighbour* neighbour; struct hh_cache* hh; struct dst_entry* child; } ;
struct TYPE_2__ {int kmem_cachep; int (* destroy ) (struct dst_entry*) ;int entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (struct hh_cache*) ;
 int FUNC_4 (int ,struct dst_entry*) ;
 int FUNC_5 (struct neighbour*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct dst_entry*) ;

struct dst_entry *FUNC_8(struct dst_entry * VAR_2)
{
 struct dst_entry *VAR_3;
 struct neighbour *VAR_4;
 struct hh_cache *VAR_5;

 FUNC_6();

again:
 VAR_4 = VAR_2->neighbour;
 VAR_5 = VAR_2->hh;
 VAR_3 = VAR_2->child;

 VAR_2->hh = ((void*)0);
 if (VAR_5 && FUNC_1(&VAR_5->hh_refcnt))
  FUNC_3(VAR_5);

 if (VAR_4) {
  VAR_2->neighbour = ((void*)0);
  FUNC_5(VAR_4);
 }

 FUNC_0(&VAR_2->ops->entries);

 if (VAR_2->ops->destroy)
  VAR_2->ops->destroy(VAR_2);
 if (VAR_2->dev)
  FUNC_2(VAR_2->dev);



 FUNC_4(VAR_2->ops->kmem_cachep, VAR_2);

 VAR_2 = VAR_3;
 if (VAR_2) {
  int VAR_6 = VAR_2->flags & VAR_0;

  if (FUNC_1(&VAR_2->__refcnt)) {

   if (VAR_6)
    goto again;
  } else {

   if (VAR_6)
    return VAR_2;

  }
 }
 return ((void*)0);
}

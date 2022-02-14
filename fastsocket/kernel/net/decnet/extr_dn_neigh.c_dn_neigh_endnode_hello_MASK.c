
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; scalar_t__ data; } ;
struct neighbour {int nud_state; int lock; int ha; TYPE_1__* dev; void* updated; void* used; } ;
struct endnode_hello_message {int blksize; int id; } ;
struct dn_neigh {int flags; scalar_t__ priority; int blksize; } ;
typedef int __le16 ;
struct TYPE_4__ {int h_source; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct neighbour* FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 void* VAR_6 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct neighbour*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct sk_buff *VAR_7)
{
 struct endnode_hello_message *VAR_8 = (struct endnode_hello_message *)VAR_7->data;
 struct neighbour *VAR_9;
 struct dn_neigh *VAR_10;
 __le16 VAR_11;

 VAR_11 = FUNC_1(VAR_8->id);

 VAR_9 = FUNC_0(&VAR_5, &VAR_11, VAR_7->dev, 1);

 VAR_10 = (struct dn_neigh *)VAR_9;

 if (VAR_9) {
  FUNC_7(&VAR_9->lock);

  VAR_9->used = VAR_6;

  if (!(VAR_9->nud_state & VAR_4)) {
   VAR_9->updated = VAR_6;

   if (VAR_9->dev->type == VAR_0)
    FUNC_5(VAR_9->ha, &FUNC_2(VAR_7)->h_source, VAR_3);
   VAR_10->flags &= ~(VAR_1 | VAR_2);
   VAR_10->blksize = FUNC_4(VAR_8->blksize);
   VAR_10->priority = 0;
  }

  FUNC_8(&VAR_9->lock);
  FUNC_6(VAR_9);
 }

 FUNC_3(VAR_7);
 return 0;
}

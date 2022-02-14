
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; scalar_t__ data; } ;
struct rtnode_hello_message {scalar_t__ priority; int iinfo; int blksize; int id; } ;
struct neighbour {int nud_state; int lock; int ha; TYPE_1__* dev; void* updated; void* used; } ;
struct dn_neigh {int blksize; scalar_t__ priority; int flags; } ;
struct dn_dev {scalar_t__ router; } ;
typedef int __le16 ;
struct TYPE_4__ {int h_source; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ dn_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct neighbour* FUNC_0 (int *,int *,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 void* VAR_9 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (struct neighbour*) ;
 int FUNC_7 (struct neighbour*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct neighbour* FUNC_10 (scalar_t__*,scalar_t__) ;

int FUNC_11(struct sk_buff *VAR_10)
{
 struct rtnode_hello_message *VAR_11 = (struct rtnode_hello_message *)VAR_10->data;

 struct neighbour *VAR_12;
 struct dn_neigh *VAR_13;
 struct dn_dev *VAR_14;
 __le16 VAR_15;

 VAR_15 = FUNC_1(VAR_11->id);

 VAR_12 = FUNC_0(&VAR_8, &VAR_15, VAR_10->dev, 1);

 VAR_13 = (struct dn_neigh *)VAR_12;

 if (VAR_12) {
  FUNC_8(&VAR_12->lock);

  VAR_12->used = VAR_9;
  VAR_14 = (struct dn_dev *)VAR_12->dev->dn_ptr;

  if (!(VAR_12->nud_state & VAR_6)) {
   VAR_12->updated = VAR_9;

   if (VAR_12->dev->type == VAR_0)
    FUNC_5(VAR_12->ha, &FUNC_2(VAR_10)->h_source, VAR_5);

   VAR_13->blksize = FUNC_4(VAR_11->blksize);
   VAR_13->priority = VAR_11->priority;

   VAR_13->flags &= ~VAR_1;

   switch(VAR_11->iinfo & VAR_4) {
    case 129:
     VAR_13->flags &=~VAR_3;
     VAR_13->flags |= VAR_2;
     break;
    case 128:
     VAR_13->flags |= VAR_3;
   }
  }


  if ((FUNC_4(VAR_15)>>10) == (FUNC_4((VAR_7))>>10)) {
   if (!VAR_14->router) {
    VAR_14->router = FUNC_6(VAR_12);
   } else {
    if (VAR_11->priority > ((struct dn_neigh *)VAR_14->router)->priority)
     FUNC_7(FUNC_10(&VAR_14->router, FUNC_6(VAR_12)));
   }
  }
  FUNC_9(&VAR_12->lock);
  FUNC_7(VAR_12);
 }

 FUNC_3(VAR_10);
 return 0;
}

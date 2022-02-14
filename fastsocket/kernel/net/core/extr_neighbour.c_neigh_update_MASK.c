
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int addr_len; } ;
struct neighbour {int nud_state; int* ha; int flags; int lock; int arp_queue; int (* output ) (struct sk_buff*) ;TYPE_1__* parms; void* confirmed; void* updated; struct net_device* dev; } ;
struct TYPE_4__ {struct neighbour* neighbour; } ;
struct TYPE_3__ {int base_reachable_time; int reachable_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct sk_buff* FUNC_0 (int *) ;
 void* VAR_18 ;
 int FUNC_1 (int const*,int*,int ) ;
 int FUNC_2 (int const**,int const*,int ) ;
 int FUNC_3 (struct neighbour*,void*) ;
 int FUNC_4 (struct neighbour*) ;
 int FUNC_5 (struct neighbour*) ;
 int FUNC_6 (struct neighbour*) ;
 int FUNC_7 (struct neighbour*) ;
 int FUNC_8 (struct neighbour*) ;
 int FUNC_9 (struct neighbour*) ;
 TYPE_2__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct neighbour *VAR_19, const u8 *VAR_20, u8 VAR_21,
   u32 VAR_22)
{
 u8 VAR_23;
 int VAR_24;
 int VAR_25 = 0;
 struct net_device *VAR_26;
 int VAR_27 = 0;

 FUNC_13(&VAR_19->lock);

 VAR_26 = VAR_19->dev;
 VAR_23 = VAR_19->nud_state;
 VAR_24 = -VAR_1;

 if (!(VAR_22 & VAR_2) &&
     (VAR_23 & (VAR_12 | VAR_13)))
  goto out;

 if (!(VAR_21 & VAR_17)) {
  FUNC_5(VAR_19);
  if (VAR_23 & VAR_8)
   FUNC_7(VAR_19);
  VAR_19->nud_state = VAR_21;
  VAR_24 = 0;
  VAR_25 = VAR_23 & VAR_17;
  if ((VAR_23 & (VAR_10 | VAR_14)) &&
      (VAR_21 & VAR_9)) {
   FUNC_6(VAR_19);
   VAR_25 = 1;
  }
  goto out;
 }


 if (!VAR_26->addr_len) {

  VAR_20 = VAR_19->ha;
 } else if (VAR_20) {





  if ((VAR_23 & VAR_17) &&
      !FUNC_1(VAR_20, VAR_19->ha, VAR_26->addr_len))
   VAR_20 = VAR_19->ha;
 } else {



  VAR_24 = -VAR_0;
  if (!(VAR_23 & VAR_17))
   goto out;
  VAR_20 = VAR_19->ha;
 }

 if (VAR_21 & VAR_8)
  VAR_19->confirmed = VAR_18;
 VAR_19->updated = VAR_18;




 VAR_24 = 0;
 VAR_27 = VAR_22 & VAR_5;
 if (VAR_23 & VAR_17) {
  if (VAR_20 != VAR_19->ha && !(VAR_22 & VAR_4)) {
   VAR_27 = 0;
   if ((VAR_22 & VAR_6) &&
       (VAR_23 & VAR_8)) {
    VAR_20 = VAR_19->ha;
    VAR_21 = VAR_16;
   } else
    goto out;
  } else {
   if (VAR_20 == VAR_19->ha && VAR_21 == VAR_16 &&
       ((VAR_22 & VAR_6) ||
        (VAR_23 & VAR_8))
       )
    VAR_21 = VAR_23;
  }
 }

 if (VAR_21 != VAR_23) {
  FUNC_5(VAR_19);
  if (VAR_21 & VAR_11)
   FUNC_3(VAR_19, (VAR_18 +
      ((VAR_21 & VAR_15) ?
       VAR_19->parms->reachable_time :
       0)));
  VAR_19->nud_state = VAR_21;
 }

 if (VAR_20 != VAR_19->ha) {
  FUNC_2(&VAR_19->ha, VAR_20, VAR_26->addr_len);
  FUNC_8(VAR_19);
  if (!(VAR_21 & VAR_8))
   VAR_19->confirmed = VAR_18 -
          (VAR_19->parms->base_reachable_time << 1);
  VAR_25 = 1;
 }
 if (VAR_21 == VAR_23)
  goto out;
 if (VAR_21 & VAR_8)
  FUNC_4(VAR_19);
 else
  FUNC_7(VAR_19);
 if (!(VAR_23 & VAR_17)) {
  struct sk_buff *VAR_28;



  while (VAR_19->nud_state & VAR_17 &&
         (VAR_28 = FUNC_0(&VAR_19->arp_queue)) != ((void*)0)) {
   struct neighbour *VAR_29 = VAR_19;
   FUNC_14(&VAR_19->lock);

   if (FUNC_10(VAR_28) && FUNC_10(VAR_28)->neighbour)
    VAR_29 = FUNC_10(VAR_28)->neighbour;
   VAR_29->output(VAR_28);
   FUNC_13(&VAR_19->lock);
  }
  FUNC_11(&VAR_19->arp_queue);
 }
out:
 if (VAR_27) {
  VAR_19->flags = (VAR_22 & VAR_3) ?
   (VAR_19->flags | VAR_7) :
   (VAR_19->flags & ~VAR_7);
 }
 FUNC_14(&VAR_19->lock);

 if (VAR_25)
  FUNC_9(VAR_19);

 return VAR_24;
}

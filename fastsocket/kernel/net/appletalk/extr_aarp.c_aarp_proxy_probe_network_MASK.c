
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atalk_iface {TYPE_2__* dev; } ;
struct atalk_addr {int s_node; int s_net; } ;
struct TYPE_3__ {int s_node; int s_net; } ;
struct aarp_entry {int expires_at; int status; struct aarp_entry* next; TYPE_2__* dev; TYPE_1__ target_addr; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct aarp_entry* FUNC_0 () ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,struct atalk_addr*) ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 struct aarp_entry** VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct atalk_iface *VAR_12, struct atalk_addr *VAR_13)
{
 int VAR_14, VAR_15 = -VAR_8;
 struct aarp_entry *VAR_16;
 unsigned int VAR_17;





 if (VAR_12->dev->type == VAR_2 ||
     VAR_12->dev->type == VAR_3)
  goto out;





 VAR_16 = FUNC_0();
 VAR_15 = -VAR_7;
 if (!VAR_16)
  goto out;

 VAR_16->expires_at = -1;
 VAR_16->status = VAR_4;
 VAR_16->target_addr.s_node = VAR_13->s_node;
 VAR_16->target_addr.s_net = VAR_13->s_net;
 VAR_16->dev = VAR_12->dev;

 FUNC_3(&VAR_9);

 VAR_14 = VAR_13->s_node % (VAR_0 - 1);
 VAR_16->next = VAR_11[VAR_14];
 VAR_11[VAR_14] = VAR_16;

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  FUNC_1(VAR_12->dev, VAR_13);


  FUNC_4(&VAR_9);
  FUNC_2(100);
  FUNC_3(&VAR_9);

  if (VAR_16->status & VAR_5)
   break;
 }

 if (VAR_16->status & VAR_5) {
  VAR_16->expires_at = VAR_10 - 1;
  VAR_15 = -VAR_6;
 } else {
  VAR_16->status &= ~VAR_4;
  VAR_15 = 1;
 }

 FUNC_4(&VAR_9);
out:
 return VAR_15;
}

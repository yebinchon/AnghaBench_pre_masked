
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct update {int set; scalar_t__ ifindex; int rb; TYPE_3__ rb_bcast; TYPE_2__ rb_mask; scalar_t__ bcast; TYPE_2__ mask; } ;
struct TYPE_4__ {int s_addr; } ;
struct mibifa {scalar_t__ ifindex; TYPE_3__ inbcast; TYPE_2__ inmask; TYPE_1__ inaddr; } ;
struct mibif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mibif* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct mibifa*) ;
 int FUNC_2 (struct mibifa*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct update *VAR_9, struct mibifa *VAR_10)
{
 struct mibif *VAR_11;

 if ((VAR_11 = FUNC_0(VAR_10->ifindex)) == ((void*)0))
  return (VAR_5);
 if ((VAR_9->set & VAR_7) && VAR_9->ifindex != VAR_10->ifindex)
  return (VAR_3);

 VAR_9->rb_mask = VAR_10->inmask;
 VAR_9->rb_bcast = VAR_10->inbcast;
 if (((VAR_9->set & VAR_8) && VAR_9->mask.s_addr != VAR_10->inmask.s_addr) ||
     (VAR_9->set & VAR_6)) {
  if (VAR_9->set & VAR_8)
   VAR_10->inmask = VAR_9->mask;
  if (VAR_9->set & VAR_6) {
   VAR_10->inbcast.s_addr = VAR_10->inaddr.s_addr
       & VAR_10->inmask.s_addr;
   if (VAR_9->bcast)
    VAR_10->inbcast.s_addr |= 0xffffffff
        & ~VAR_10->inmask.s_addr;
  }
  if (FUNC_1(VAR_10)) {
   FUNC_3(VAR_0, "set netmask/bcast: %m");
   VAR_10->inmask = VAR_9->rb_mask;
   VAR_10->inbcast = VAR_9->rb_bcast;
   FUNC_2(VAR_10);
   return (VAR_2);
  }
  VAR_9->rb |= VAR_1;
 }
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nf_queue_entry {TYPE_5__* skb; TYPE_1__* outdev; TYPE_6__* indev; } ;
struct TYPE_12__ {unsigned long ifindex; } ;
struct TYPE_11__ {TYPE_4__* nf_bridge; } ;
struct TYPE_10__ {TYPE_3__* physoutdev; TYPE_2__* physindev; } ;
struct TYPE_9__ {unsigned long ifindex; } ;
struct TYPE_8__ {unsigned long ifindex; } ;
struct TYPE_7__ {unsigned long ifindex; } ;



__attribute__((used)) static int
FUNC_0(struct nf_queue_entry *VAR_0, unsigned long VAR_1)
{
 if (VAR_0->indev)
  if (VAR_0->indev->ifindex == VAR_1)
   return 1;

 if (VAR_0->outdev)
  if (VAR_0->outdev->ifindex == VAR_1)
   return 1;
 return 0;
}

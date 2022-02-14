
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_queue_entry {TYPE_1__* elem; TYPE_2__* skb; scalar_t__ outdev; scalar_t__ indev; } ;
struct nf_bridge_info {scalar_t__ physoutdev; scalar_t__ physindev; } ;
struct TYPE_4__ {struct nf_bridge_info* nf_bridge; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nf_queue_entry *VAR_0)
{

 if (VAR_0->indev)
  FUNC_0(VAR_0->indev);
 if (VAR_0->outdev)
  FUNC_0(VAR_0->outdev);
 FUNC_1(VAR_0->elem->owner);
}

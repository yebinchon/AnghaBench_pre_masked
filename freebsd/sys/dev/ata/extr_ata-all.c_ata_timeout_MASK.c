
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int flags; int parent; } ;
struct TYPE_2__ {int (* unload ) (struct ata_request*) ;} ;
struct ata_channel {scalar_t__ state; int state_mtx; int dev; int * running; TYPE_1__ dma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_request*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ata_request*) ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ata_request*) ;

void
FUNC_5(struct ata_request *VAR_3)
{
 struct ata_channel *VAR_4;

 VAR_4 = FUNC_2(VAR_3->parent);

 FUNC_0(VAR_3, "timeout");







 if (VAR_4->state == VAR_0) {
  VAR_3->flags |= VAR_2;
  if (VAR_4->dma.unload)
   VAR_4->dma.unload(VAR_3);
  VAR_4->running = ((void*)0);
  VAR_4->state = VAR_1;
  FUNC_1(VAR_4->dev, VAR_3);
 }
 FUNC_3(&VAR_4->state_mtx);
}

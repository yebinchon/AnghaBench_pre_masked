
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int result; int callout; } ;
struct TYPE_2__ {int (* unload ) (struct ata_request*) ;} ;
struct ata_channel {scalar_t__ state; int sim; int path; TYPE_1__ dma; struct ata_request* running; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ata_request*) ;
 int FUNC_2 (int *) ;
 struct ata_channel* FUNC_3 (int ) ;
 int FUNC_4 (struct ata_request*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

int
FUNC_8(device_t VAR_5)
{
    struct ata_channel *VAR_6 = FUNC_3(VAR_5);
    struct ata_request *VAR_7;

 FUNC_6(VAR_6->sim, 1);
 if ((VAR_7 = VAR_6->running)) {
  VAR_6->running = ((void*)0);
  if (VAR_6->state == VAR_1)
      VAR_6->state = VAR_2;
  FUNC_2(&VAR_7->callout);
  if (VAR_6->dma.unload)
      VAR_6->dma.unload(VAR_7);
  VAR_7->result = VAR_3;
  FUNC_1(VAR_5, VAR_7);
 }

 FUNC_0(VAR_5);

 FUNC_5(VAR_0, VAR_6->path, ((void*)0));
 FUNC_7(VAR_6->sim, VAR_4);
 return(0);
}

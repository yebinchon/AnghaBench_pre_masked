
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opc; } ;
struct nvme_request {TYPE_1__ cmd; int timeout; } ;
struct nvme_controller {int dummy; } ;
struct nvme_async_event_request {struct nvme_request* req; struct nvme_controller* ctrlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvme_request* FUNC_0 (int ,struct nvme_async_event_request*) ;
 int VAR_2 ;
 int FUNC_1 (struct nvme_controller*,struct nvme_request*) ;

__attribute__((used)) static void
FUNC_2(struct nvme_controller *VAR_3,
    struct nvme_async_event_request *VAR_4)
{
 struct nvme_request *VAR_5;

 VAR_4->ctrlr = VAR_3;
 VAR_5 = FUNC_0(VAR_2, VAR_4);
 VAR_4->req = VAR_5;





 VAR_5->timeout = VAR_0;
 VAR_5->cmd.opc = VAR_1;
 FUNC_1(VAR_3, VAR_5);
}

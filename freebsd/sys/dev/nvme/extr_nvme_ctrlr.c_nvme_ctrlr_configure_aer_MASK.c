
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {scalar_t__ ver; scalar_t__ aerl; } ;
struct nvme_controller {int async_event_config; size_t num_aers; struct nvme_async_event_request* aer; TYPE_1__ cdata; } ;
struct TYPE_4__ {int cdw0; } ;
struct nvme_completion_poll_status {TYPE_2__ cpl; scalar_t__ done; } ;
struct nvme_async_event_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int) ;
 size_t FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct nvme_completion_poll_status*) ;
 int VAR_7 ;
 int FUNC_4 (struct nvme_controller*,int ,int ,int *,int ,int ,struct nvme_completion_poll_status*) ;
 int FUNC_5 (struct nvme_controller*,int,int *,int *) ;
 int FUNC_6 (struct nvme_controller*,struct nvme_async_event_request*) ;
 int FUNC_7 (struct nvme_controller*,char*) ;

__attribute__((used)) static void
FUNC_8(struct nvme_controller *VAR_8)
{
 struct nvme_completion_poll_status VAR_9;
 struct nvme_async_event_request *VAR_10;
 uint32_t VAR_11;

 VAR_8->async_event_config = VAR_0 |
     VAR_1 |
     VAR_2 |
     VAR_4;
 if (VAR_8->cdata.ver >= FUNC_0(1, 2))
  VAR_8->async_event_config |= 0x300;

 VAR_9.done = 0;
 FUNC_4(VAR_8, VAR_5,
     0, ((void*)0), 0, VAR_7, &VAR_9);
 FUNC_3(&VAR_9);
 if (FUNC_2(&VAR_9.cpl) ||
     (VAR_9.cpl.cdw0 & 0xFFFF) == 0xFFFF ||
     (VAR_9.cpl.cdw0 & 0xFFFF) == 0x0000) {
  FUNC_7(VAR_8, "temperature threshold not supported\n");
 } else
  VAR_8->async_event_config |= VAR_3;

 FUNC_5(VAR_8,
     VAR_8->async_event_config, ((void*)0), ((void*)0));


 VAR_8->num_aers = FUNC_1(VAR_6, (VAR_8->cdata.aerl+1));

 for (VAR_11 = 0; VAR_11 < VAR_8->num_aers; VAR_11++) {
  VAR_10 = &VAR_8->aer[VAR_11];
  FUNC_6(VAR_8, VAR_10);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mdts; } ;
struct nvme_controller {int min_page_size; TYPE_1__ cdata; int max_xfer_size; } ;
struct nvme_completion_poll_status {int cpl; scalar_t__ done; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_completion_poll_status*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct nvme_controller*,TYPE_1__*,int ,struct nvme_completion_poll_status*) ;
 int FUNC_5 (struct nvme_controller*,char*) ;

__attribute__((used)) static int
FUNC_6(struct nvme_controller *VAR_2)
{
 struct nvme_completion_poll_status VAR_3;

 VAR_3.done = 0;
 FUNC_4(VAR_2, &VAR_2->cdata,
     VAR_1, &VAR_3);
 FUNC_2(&VAR_3);
 if (FUNC_1(&VAR_3.cpl)) {
  FUNC_5(VAR_2, "nvme_identify_controller failed!\n");
  return (VAR_0);
 }


 FUNC_3(&VAR_2->cdata);





 if (VAR_2->cdata.mdts > 0)
  VAR_2->max_xfer_size = FUNC_0(VAR_2->max_xfer_size,
      VAR_2->min_page_size * (1 << (VAR_2->cdata.mdts)));

 return (0);
}

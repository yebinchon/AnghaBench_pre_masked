
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ nsze; int flbas; int nlbaf; int noiob; } ;
struct nvme_namespace {int id; int boundary; TYPE_4__* cdev; int flags; TYPE_1__ data; int lock; struct nvme_controller* ctrlr; } ;
struct TYPE_6__ {int* vs; int vwc; } ;
struct nvme_controller {int min_page_size; int dev; TYPE_2__ cdata; } ;
struct nvme_completion_poll_status {int cpl; scalar_t__ done; } ;
struct make_dev_args {int mda_unit; int mda_mode; struct nvme_namespace* mda_si_drv1; int * mda_devsw; } ;
struct TYPE_7__ {int si_flags; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct make_dev_args*) ;
 int FUNC_2 (struct make_dev_args*,TYPE_4__**,char*,int,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct nvme_completion_poll_status*) ;
 int VAR_10 ;
 int FUNC_7 (struct nvme_controller*,int,TYPE_1__*,int ,struct nvme_completion_poll_status*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_11 ;
 int FUNC_10 (struct nvme_namespace*) ;
 int FUNC_11 (struct nvme_controller*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int,int) ;

int
FUNC_14(struct nvme_namespace *VAR_12, uint32_t VAR_13,
    struct nvme_controller *VAR_14)
{
 struct make_dev_args VAR_15;
 struct nvme_completion_poll_status VAR_16;
 int VAR_17;
 int VAR_18;
 uint8_t VAR_19;
 uint8_t VAR_20;

 VAR_12->ctrlr = VAR_14;
 VAR_12->id = VAR_13;
 if (!FUNC_4(&VAR_12->lock))
  FUNC_3(&VAR_12->lock, "nvme ns lock", ((void*)0), VAR_1);

 VAR_16.done = 0;
 FUNC_7(VAR_14, VAR_13, &VAR_12->data,
     VAR_10, &VAR_16);
 FUNC_6(&VAR_16);
 if (FUNC_5(&VAR_16.cpl)) {
  FUNC_11(VAR_14, "nvme_identify_namespace failed\n");
  return (VAR_0);
 }


 FUNC_9(&VAR_12->data);







 if (VAR_12->data.nsze == 0)
  return (VAR_0);

 VAR_19 = (VAR_12->data.flbas >> VAR_6) &
  VAR_5;




 if (VAR_19 > VAR_12->data.nlbaf) {
  FUNC_13("lba format %d exceeds number supported (%d)\n",
      VAR_19, VAR_12->data.nlbaf + 1);
  return (VAR_0);
 }






 switch (FUNC_12(VAR_14->dev)) {
 case 0x09538086:
 case 0x0a538086:
 case 0x0a548086:
 case 0x0a558086:
  if (VAR_14->cdata.vs[3] != 0)
   VAR_12->boundary =
       (1 << VAR_14->cdata.vs[3]) * VAR_14->min_page_size;
  else
   VAR_12->boundary = 0;
  break;
 default:
  VAR_12->boundary = VAR_12->data.noiob * FUNC_10(VAR_12);
  break;
 }

 if (FUNC_8(&VAR_14->cdata))
  VAR_12->flags |= VAR_7;

 VAR_20 = (VAR_14->cdata.vwc >> VAR_3) &
  VAR_2;
 if (VAR_20)
  VAR_12->flags |= VAR_8;





 if (VAR_12->cdev != ((void*)0))
  return (0);





 VAR_18 = FUNC_0(VAR_14->dev) * VAR_4 + VAR_12->id - 1;

 FUNC_1(&VAR_15);
 VAR_15.mda_devsw = &VAR_11;
 VAR_15.mda_unit = VAR_18;
 VAR_15.mda_mode = 0600;
 VAR_15.mda_si_drv1 = VAR_12;
 VAR_17 = FUNC_2(&VAR_15, &VAR_12->cdev, "nvme%dns%d",
     FUNC_0(VAR_14->dev), VAR_12->id);
 if (VAR_17 != 0)
  return (VAR_0);

 VAR_12->cdev->si_flags |= VAR_9;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ u_int32_t ;
struct mrsas_softc {int mrsas_dev; int io_lock; int data_tag; } ;
struct mrsas_mpt_cmd {scalar_t__ error_code; int length; int * data; int data_dmamap; TYPE_2__* ccb_ptr; } ;
struct cam_sim {int dummy; } ;
struct TYPE_3__ {int path; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,int ,struct mrsas_mpt_cmd*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,union ccb*,int ,struct mrsas_mpt_cmd*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (struct mrsas_mpt_cmd*,struct cam_sim*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cam_sim* FUNC_6 (int ) ;

int
FUNC_7(struct mrsas_softc *VAR_3,
    struct mrsas_mpt_cmd *VAR_4, union ccb *VAR_5)
{
 u_int32_t VAR_6 = 0;
 struct cam_sim *VAR_7;

 VAR_7 = FUNC_6(VAR_4->ccb_ptr->ccb_h.path);

 if (VAR_4->data != ((void*)0)) {

  FUNC_4(&VAR_3->io_lock);




  VAR_6 = FUNC_0(VAR_3->data_tag, VAR_4->data_dmamap, VAR_4->data,
      VAR_4->length, VAR_2, VAR_4, VAR_0);

  FUNC_5(&VAR_3->io_lock);
  if (VAR_6)
   FUNC_2(VAR_3->mrsas_dev, "bus_dmamap_load(): retcode = %d\n", VAR_6);
  if (VAR_6 == VAR_1) {
   FUNC_2(VAR_3->mrsas_dev, "request load in progress\n");
   FUNC_3(VAR_4, VAR_7);
  }
 }
 if (VAR_4->error_code)
  return (1);
 return (VAR_6);
}

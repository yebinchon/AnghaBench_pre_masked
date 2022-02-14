
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int GlobalCredits; } ;
struct mpt_softc {int role; int * phydisk_sim; int phydisk_path; int dev; TYPE_2__* ioc_page2; int * sim; int path; TYPE_5__* tmf_req; scalar_t__ is_sas; int scsi_tgt_handler_id; scalar_t__ is_fc; scalar_t__ els_cmds_allocated; TYPE_1__ ioc_facts; int request_timeout_list; } ;
struct cam_devq {int dummy; } ;
struct TYPE_8__ {int reply_handler; } ;
typedef TYPE_3__ mpt_handler_t ;
struct TYPE_9__ {int state; } ;
struct TYPE_7__ {scalar_t__ MaxPhysDisks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mpt_softc*) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cam_devq* FUNC_5 (int) ;
 int FUNC_6 (struct cam_devq*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (struct mpt_softc*) ;
 int FUNC_8 (struct mpt_softc*) ;
 int VAR_12 ;
 TYPE_5__* FUNC_9 (struct mpt_softc*,scalar_t__) ;
 int FUNC_10 (struct mpt_softc*,int ,char*) ;
 int VAR_13 ;
 int FUNC_11 (struct mpt_softc*,char*) ;
 int FUNC_12 (struct mpt_softc*,int ,TYPE_3__,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_13 (int ,int ,char*,struct mpt_softc*,int,int,struct cam_devq*) ;
 scalar_t__ FUNC_14 (struct mpt_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_15 (int *,int ,int) ;
 scalar_t__ FUNC_16 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_17(struct mpt_softc *VAR_21)
{
 struct cam_devq *VAR_22;
 mpt_handler_t VAR_23;
 int VAR_24;
 int VAR_25;

 FUNC_0(VAR_21);
 FUNC_3(&VAR_21->request_timeout_list);
 VAR_24 = (VAR_21->ioc_facts.GlobalCredits < FUNC_1(VAR_21))?
     VAR_21->ioc_facts.GlobalCredits : FUNC_1(VAR_21);

 VAR_23.reply_handler = VAR_15;
 VAR_25 = FUNC_12(VAR_21, VAR_6, VAR_23,
         &VAR_19);
 if (VAR_25 != 0) {
  FUNC_2(VAR_21);
  goto cleanup;
 }

 VAR_23.reply_handler = VAR_17;
 VAR_25 = FUNC_12(VAR_21, VAR_6, VAR_23,
         &VAR_20);
 if (VAR_25 != 0) {
  FUNC_2(VAR_21);
  goto cleanup;
 }





 if (VAR_21->is_fc && (VAR_21->role & VAR_8) != 0) {
  VAR_23.reply_handler = VAR_12;
  VAR_25 = FUNC_12(VAR_21, VAR_6, VAR_23,
      &VAR_10);
  if (VAR_25 != 0) {
   FUNC_2(VAR_21);
   goto cleanup;
  }
  if (FUNC_7(VAR_21) == VAR_5) {
   VAR_25 = VAR_4;
   FUNC_2(VAR_21);
   goto cleanup;
  }
  VAR_24 -= VAR_21->els_cmds_allocated;
 }






 if (VAR_21->is_fc && (VAR_21->role & VAR_8) != 0) {
  VAR_23.reply_handler = VAR_16;
  VAR_25 = FUNC_12(VAR_21, VAR_6, VAR_23,
      &VAR_21->scsi_tgt_handler_id);
  if (VAR_25 != 0) {
   FUNC_2(VAR_21);
   goto cleanup;
  }
 }

 if (VAR_21->is_sas) {
  VAR_23.reply_handler = VAR_14;
  VAR_25 = FUNC_12(VAR_21, VAR_6, VAR_23,
      &VAR_18);
  if (VAR_25 != 0) {
   FUNC_2(VAR_21);
   goto cleanup;
  }
 }




 VAR_21->tmf_req = FUNC_9(VAR_21, VAR_5);
 if (VAR_21->tmf_req == ((void*)0)) {
  FUNC_11(VAR_21, "Unable to allocate dedicated TMF request!\n");
  VAR_25 = VAR_4;
  FUNC_2(VAR_21);
  goto cleanup;
 }







 VAR_21->tmf_req->state = VAR_9;
 VAR_24--;




 FUNC_2(VAR_21);

 if (FUNC_14(VAR_21) != 0) {
  FUNC_11(VAR_21, "Unable to spawn recovery thread!\n");
  VAR_25 = VAR_4;
  goto cleanup;
 }




 VAR_22 = FUNC_5(VAR_24);
 if (VAR_22 == ((void*)0)) {
  FUNC_11(VAR_21, "Unable to allocate CAM SIMQ!\n");
  VAR_25 = VAR_4;
  goto cleanup;
 }




 VAR_21->sim =
     FUNC_13(VAR_11, VAR_13, "mpt", VAR_21, 1, VAR_24, VAR_22);
 if (VAR_21->sim == ((void*)0)) {
  FUNC_11(VAR_21, "Unable to allocate CAM SIM!\n");
  FUNC_6(VAR_22);
  VAR_25 = VAR_4;
  goto cleanup;
 }




 FUNC_0(VAR_21);
 if (FUNC_15(VAR_21->sim, VAR_21->dev, 0) != VAR_2) {
  FUNC_11(VAR_21, "Bus registration Failed!\n");
  VAR_25 = VAR_4;
  FUNC_2(VAR_21);
  goto cleanup;
 }

 if (FUNC_16(&VAR_21->path, ((void*)0), FUNC_4(VAR_21->sim),
     VAR_3, VAR_0) != VAR_1) {
  FUNC_11(VAR_21, "Unable to allocate Path!\n");
  VAR_25 = VAR_4;
  FUNC_2(VAR_21);
  goto cleanup;
 }
 FUNC_2(VAR_21);





 if (VAR_21->ioc_page2 == ((void*)0) || VAR_21->ioc_page2->MaxPhysDisks == 0) {
  return (0);
 }




 VAR_21->phydisk_sim =
     FUNC_13(VAR_11, VAR_13, "mpt", VAR_21, 1, VAR_24, VAR_22);
 if (VAR_21->phydisk_sim == ((void*)0)) {
  FUNC_11(VAR_21, "Unable to allocate Physical Disk CAM SIM!\n");
  VAR_25 = VAR_4;
  goto cleanup;
 }




 FUNC_0(VAR_21);
 if (FUNC_15(VAR_21->phydisk_sim, VAR_21->dev, 1) !=
     VAR_2) {
  FUNC_11(VAR_21, "Physical Disk Bus registration Failed!\n");
  VAR_25 = VAR_4;
  FUNC_2(VAR_21);
  goto cleanup;
 }

 if (FUNC_16(&VAR_21->phydisk_path, ((void*)0),
     FUNC_4(VAR_21->phydisk_sim),
     VAR_3, VAR_0) != VAR_1) {
  FUNC_11(VAR_21, "Unable to allocate Physical Disk Path!\n");
  VAR_25 = VAR_4;
  FUNC_2(VAR_21);
  goto cleanup;
 }
 FUNC_2(VAR_21);
 FUNC_10(VAR_21, VAR_7, "attached cam\n");
 return (0);

cleanup:
 FUNC_8(VAR_21);
 return (VAR_25);
}

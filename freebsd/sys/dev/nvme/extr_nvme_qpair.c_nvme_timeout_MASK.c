
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_tracker {int cid; struct nvme_qpair* qpair; } ;
struct nvme_qpair {int id; struct nvme_controller* ctrlr; } ;
struct nvme_controller {scalar_t__ enable_aborts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvme_controller*,int ,int ,int ,struct nvme_tracker*) ;
 int FUNC_1 (struct nvme_controller*) ;
 int FUNC_2 (struct nvme_controller*,int) ;
 int FUNC_3 (struct nvme_controller*,char*,...) ;
 scalar_t__ FUNC_4 (struct nvme_qpair*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct nvme_tracker *VAR_4 = VAR_3;
 struct nvme_qpair *VAR_5 = VAR_4->qpair;
 struct nvme_controller *VAR_6 = VAR_5->ctrlr;
 uint32_t VAR_7;
 uint8_t VAR_8;
 VAR_7 = FUNC_2(VAR_6, VAR_7);
 VAR_8 = (VAR_7 >> VAR_1) & VAR_0;
 if (VAR_8 == 0 && FUNC_4(VAR_5)) {
  FUNC_3(VAR_6, "Missing interrupt\n");
  return;
 }
 if (VAR_6->enable_aborts && VAR_8 == 0) {
  FUNC_3(VAR_6, "Aborting command due to a timeout.\n");
  FUNC_0(VAR_6, VAR_4->cid, VAR_5->id,
      VAR_2, VAR_4);
 } else {
  FUNC_3(VAR_6, "Resetting controller due to a timeout%s.\n",
      (VAR_7 == 0xffffffff) ? " and possible hot unplug" :
      (VAR_8 ? " and fatal error status" : ""));
  FUNC_1(VAR_6);
 }
}

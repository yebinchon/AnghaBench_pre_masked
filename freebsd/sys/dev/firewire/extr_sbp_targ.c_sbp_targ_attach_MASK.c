
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xferlist; int end; int start; } ;
struct TYPE_3__ {void* post_busreset; void* post_explore; int dev; struct firewire_comm* fc; } ;
struct sbp_targ_softc {int * sim; TYPE_2__ fwb; int path; int mtx; TYPE_1__ fd; } ;
struct firewire_comm {int dummy; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sbp_targ_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sbp_targ_softc*) ;
 int FUNC_2 (int *) ;
 int VAR_12 ;
 int FUNC_3 (void*,int) ;
 int * FUNC_4 (int ,int ,char*,struct sbp_targ_softc*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct cam_devq* FUNC_7 (int) ;
 int FUNC_8 (struct cam_devq*) ;
 struct firewire_comm* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct firewire_comm*,TYPE_2__*) ;
 int FUNC_13 (int *,int ,int ,int ,int,struct firewire_comm*,void*,int ) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *,int ,int ) ;
 scalar_t__ FUNC_17 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_18)
{
 struct sbp_targ_softc *VAR_19;
 struct cam_devq *VAR_20;
 struct firewire_comm *VAR_21;

        VAR_19 = (struct sbp_targ_softc *) FUNC_10(VAR_18);
 FUNC_3((void *)VAR_19, sizeof(struct sbp_targ_softc));

 FUNC_14(&VAR_19->mtx, "sbp_targ", ((void*)0), VAR_7);
 VAR_19->fd.fc = VAR_21 = FUNC_9(VAR_18);
 VAR_19->fd.dev = VAR_18;
 VAR_19->fd.post_explore = (void *) VAR_16;
 VAR_19->fd.post_busreset = (void *) VAR_15;

        VAR_20 = FUNC_7( VAR_6*VAR_5);
 if (VAR_20 == ((void*)0))
  return (VAR_4);

 VAR_19->sim = FUNC_4(VAR_13, VAR_14,
     "sbp_targ", VAR_19, FUNC_11(VAR_18), &VAR_19->mtx,
                  1, 1, VAR_20);
 if (VAR_19->sim == ((void*)0)) {
  FUNC_8(VAR_20);
  return (VAR_4);
 }

 FUNC_0(VAR_19);
 if (FUNC_16(VAR_19->sim, VAR_18, 0) != VAR_2)
  goto fail;

 if (FUNC_17(&VAR_19->path, ((void*)0), FUNC_6(VAR_19->sim),
     VAR_3, VAR_0) != VAR_1) {
  FUNC_15(FUNC_6(VAR_19->sim));
  goto fail;
 }
 FUNC_1(VAR_19);

 VAR_19->fwb.start = VAR_10;
 VAR_19->fwb.end = VAR_9;


 FUNC_2(&VAR_19->fwb.xferlist);
 FUNC_13(&VAR_19->fwb.xferlist, VAR_8,
              0, VAR_11, VAR_6 ,
     VAR_21, (void *)VAR_19, VAR_17);
 FUNC_12(VAR_21, &VAR_19->fwb);
 return 0;

fail:
 FUNC_1(VAR_19);
 FUNC_5(VAR_19->sim, VAR_12);
 return (VAR_4);
}

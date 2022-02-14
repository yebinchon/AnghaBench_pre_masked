
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct targ_softc {int state; scalar_t__ maxio; int * periph; } ;
struct TYPE_2__ {int status; } ;
struct ccb_pathinq {int target_sprt; scalar_t__ maxio; TYPE_1__ ccb_h; } ;
struct cam_periph {int unit_number; scalar_t__ softc; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int ,int ,char*,int ,struct cam_path*,int ,int ,struct targ_softc*) ;
 struct cam_periph* FUNC_1 (struct cam_path*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct cam_path*,int,int,int) ;
 int VAR_12 ;
 int FUNC_6 (struct ccb_pathinq*,struct cam_path*) ;

__attribute__((used)) static cam_status
FUNC_7(struct targ_softc *VAR_13, struct cam_path *VAR_14, int VAR_15,
    int VAR_16)
{
 struct cam_periph *VAR_17;
 struct ccb_pathinq VAR_18;
 cam_status VAR_19;

 if ((VAR_13->state & VAR_8) != 0)
  return (VAR_1);


 FUNC_6(&VAR_18, VAR_14);
 VAR_19 = VAR_18.ccb_h.status & VAR_4;
 if (VAR_19 != VAR_3) {
  FUNC_4("pathinq failed, status %#x\n", VAR_19);
  goto enable_fail;
 }
 if ((VAR_18.target_sprt & VAR_7) == 0) {
  FUNC_4("controller does not support target mode\n");
  VAR_19 = VAR_0;
  goto enable_fail;
 }
 if (VAR_18.maxio == 0)
  VAR_13->maxio = VAR_5;
 else if (VAR_18.maxio > VAR_6)
  VAR_13->maxio = VAR_6;
 else
  VAR_13->maxio = VAR_18.maxio;


 VAR_17 = FUNC_1(VAR_14, "targ");
 if (VAR_17 != ((void*)0)) {
  struct targ_softc *VAR_20;

  VAR_20 = (struct targ_softc *)VAR_17->softc;
  if ((VAR_20->state & VAR_8) == 0) {
   FUNC_2(VAR_20->periph);
   VAR_20->periph = ((void*)0);
  } else {
   FUNC_4("Requested path still in use by targ%d\n",
          VAR_17->unit_number);
   VAR_19 = VAR_1;
   goto enable_fail;
  }
 }


 VAR_19 = FUNC_0(VAR_10, ((void*)0), VAR_11, VAR_12,
   "targ", VAR_2, VAR_14, VAR_9, 0, VAR_13);
 if (VAR_19 != VAR_3) {
  FUNC_4("cam_periph_alloc failed, status %#x\n", VAR_19);
  goto enable_fail;
 }


 if (FUNC_1(VAR_14, "targ") == ((void*)0)) {
  FUNC_3("targenable: succeeded but no periph?");

 }


 VAR_19 = FUNC_5(VAR_14, 1, VAR_15, VAR_16);
 if (VAR_19 != VAR_3) {
  FUNC_4("enable lun failed, status %#x\n", VAR_19);
  goto enable_fail;
 }
 VAR_13->state |= VAR_8;

enable_fail:
 return (VAR_19);
}

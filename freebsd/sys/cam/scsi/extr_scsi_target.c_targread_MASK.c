
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_ccb ;
struct TYPE_3__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct uio {int uio_resid; } ;
struct descr_queue {int dummy; } ;
struct targ_softc {int periph; int path; struct descr_queue abort_queue; struct descr_queue user_ccb_queue; } ;
struct targ_cmd_descr {union ccb* user_ccb; scalar_t__ targ_descr; } ;
struct cdev {int dummy; } ;
typedef struct descr_queue ccb_queue ;
struct ccb_hdr {union ccb* user_ccb; scalar_t__ targ_descr; } ;
typedef int caddr_t ;
struct TYPE_4__ {int tqe; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct targ_cmd_descr* FUNC_1 (struct descr_queue*) ;
 int FUNC_2 (struct descr_queue*,struct targ_cmd_descr*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct descr_queue*,int,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void**) ;
 TYPE_2__ VAR_8 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct targ_softc*,union ccb*) ;
 int VAR_9 ;
 int FUNC_9 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_10, struct uio *VAR_11, int VAR_12)
{
 struct descr_queue *VAR_13;
 struct targ_cmd_descr *VAR_14;
 struct targ_softc *VAR_15;
 struct ccb_queue *VAR_16;
 struct ccb_hdr *VAR_17;
 union ccb *VAR_18;
 int VAR_19, VAR_20;

 VAR_20 = 0;
 VAR_19 = 0;
 FUNC_6((void **)&VAR_15);
 VAR_16 = &VAR_15->user_ccb_queue;
 VAR_13 = &VAR_15->abort_queue;
 FUNC_0(VAR_15->path, VAR_0, ("targread\n"));


 FUNC_3(VAR_15->periph);
 VAR_17 = FUNC_1(VAR_16);
 VAR_14 = FUNC_1(VAR_13);
 while (VAR_17 == ((void*)0) && VAR_14 == ((void*)0)) {
  if ((VAR_12 & VAR_5) == 0) {
   VAR_20 = FUNC_4(VAR_15->periph, VAR_16,
       VAR_7 | VAR_6, "targrd", 0);
   VAR_17 = FUNC_1(VAR_16);
   VAR_14 = FUNC_1(VAR_13);
   if (VAR_20 != 0) {
    if (VAR_20 == VAR_4) {
     continue;
    } else {
     goto read_fail;
    }
   }
  } else {
   FUNC_5(VAR_15->periph);
   return (VAR_2);
  }
 }


 while (VAR_17 != ((void*)0)) {
  struct targ_cmd_descr *VAR_21;

  if (VAR_11->uio_resid < sizeof(VAR_18))
   break;
  FUNC_2(VAR_16, VAR_17, VAR_8.tqe);
  VAR_21 = (struct targ_cmd_descr *)VAR_17->targ_descr;
  VAR_18 = VAR_21->user_ccb;
  FUNC_0(VAR_15->path, VAR_0,
     ("targread ccb %p (%p)\n", VAR_17, VAR_18));
  VAR_20 = FUNC_8(VAR_15, (union ccb *)VAR_17);
  if (VAR_20 != 0)
   goto read_fail;
  FUNC_5(VAR_15->periph);
  VAR_20 = FUNC_9((caddr_t)&VAR_18, sizeof(VAR_18), VAR_11);
  FUNC_3(VAR_15->periph);
  if (VAR_20 != 0)
   goto read_fail;
  VAR_19 += sizeof(VAR_18);

  VAR_17 = FUNC_1(VAR_16);
 }


 while (VAR_14 != ((void*)0)) {
  if (VAR_11->uio_resid < sizeof(VAR_18))
   break;
  FUNC_2(VAR_13, VAR_14, VAR_9);
  VAR_18 = VAR_14->user_ccb;
  FUNC_0(VAR_15->path, VAR_0,
     ("targread aborted descr %p (%p)\n",
     VAR_14, VAR_18));
  FUNC_7(&VAR_18->ccb_h.status, VAR_1);
  FUNC_5(VAR_15->periph);
  VAR_20 = FUNC_9((caddr_t)&VAR_18, sizeof(VAR_18), VAR_11);
  FUNC_3(VAR_15->periph);
  if (VAR_20 != 0)
   goto read_fail;
  VAR_19 += sizeof(VAR_18);

  VAR_14 = FUNC_1(VAR_13);
 }






 if (VAR_19 == 0 && VAR_11->uio_resid != 0)
  VAR_20 = VAR_3;

read_fail:
 FUNC_5(VAR_15->periph);
 return (VAR_20);
}

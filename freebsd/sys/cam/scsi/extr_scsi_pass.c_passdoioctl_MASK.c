
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xpt_opcode ;
struct TYPE_9__ {int priority; } ;
struct TYPE_11__ {int func_code; int flags; int periph_priv; int periph_links; int cbfcnp; TYPE_3__ pinfo; struct pass_io_req* ccb_ioreq; } ;
struct TYPE_7__ {union ccb* cdb_bytes; union ccb* cdb_ptr; } ;
struct TYPE_10__ {int cdb_len; TYPE_1__ cdb_io; int * bio; } ;
union ccb {TYPE_5__ ccb_h; TYPE_4__ csio; } ;
typedef int uint32_t ;
typedef int u_long ;
struct thread {int td_proc; } ;
struct pass_softc {int flags; int pass_zone; int done_queue; int active_queue; int incoming_queue; } ;
struct TYPE_8__ {int num_bufs_used; } ;
struct pass_io_req {union ccb ccb; int user_periph_priv; int user_periph_links; TYPE_2__ mapinfo; union ccb* user_ccb_ptr; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
typedef scalar_t__ caddr_t ;





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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 struct pass_io_req* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pass_io_req*,int ) ;
 int FUNC_3 (int *,struct pass_io_req*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 union ccb* FUNC_4 (struct cam_periph*,int ) ;
 int FUNC_5 (struct cam_periph*,int,scalar_t__,int ) ;
 int FUNC_6 (struct cam_periph*) ;
 int FUNC_7 (struct cam_periph*) ;
 int FUNC_8 (union ccb*,union ccb*,int) ;
 int FUNC_9 (union ccb*,union ccb*,int) ;
 int VAR_23 ;
 int FUNC_10 (struct cam_periph*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (struct cam_periph*,struct pass_io_req*) ;
 int FUNC_12 (struct cam_periph*,struct pass_io_req*) ;
 int FUNC_13 (struct cam_periph*,union ccb*,union ccb*) ;
 struct pass_io_req* FUNC_14 (int ,int) ;
 int FUNC_15 (int ,struct pass_io_req*) ;
 int FUNC_16 (union ccb*) ;
 union ccb* FUNC_17 () ;
 int FUNC_18 (union ccb*) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (union ccb*) ;
 int FUNC_21 (struct cam_periph*,int ) ;
 int FUNC_22 (TYPE_5__*,int ,int ) ;
 int FUNC_23 (TYPE_5__*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_24(struct cdev *VAR_26, u_long VAR_27, caddr_t VAR_28, int VAR_29, struct thread *VAR_30)
{
 struct cam_periph *VAR_31;
 struct pass_softc *VAR_32;
 int VAR_33;
 uint32_t VAR_34;

 VAR_31 = (struct cam_periph *)VAR_26->si_drv1;
 FUNC_6(VAR_31);
 VAR_32 = (struct pass_softc *)VAR_31->softc;

 VAR_33 = 0;

 switch (VAR_27) {

 case 130:
 {
  union ccb *VAR_35;
  union ccb *VAR_36;
  int VAR_37;

  VAR_35 = (union ccb *)VAR_28;





  if (VAR_35->ccb_h.flags & VAR_2) {
   VAR_33 = VAR_3;
   break;
  }





  if (VAR_35->ccb_h.func_code & VAR_18) {
   FUNC_19(VAR_31->path, "CCB function code %#x is "
       "restricted to the XPT device\n",
       VAR_35->ccb_h.func_code);
   VAR_33 = VAR_4;
   break;
  }


  VAR_34 = VAR_35->ccb_h.pinfo.priority;
  if (VAR_34 <= VAR_1)
      VAR_34 += VAR_1 + 1;







  if ((VAR_35->ccb_h.func_code & VAR_16)
   && ((VAR_35->ccb_h.func_code & VAR_17) == 0)) {
   VAR_36 = FUNC_4(VAR_31, VAR_34);
   VAR_37 = 0;
  } else {
   VAR_36 = FUNC_17();

   if (VAR_36 != ((void*)0))
    FUNC_22(&VAR_36->ccb_h, VAR_31->path,
           VAR_34);
   VAR_37 = 1;
  }

  if (VAR_36 == ((void*)0)) {
   FUNC_19(VAR_31->path, "unable to allocate CCB\n");
   VAR_33 = VAR_6;
   break;
  }

  VAR_33 = FUNC_13(VAR_31, VAR_36, VAR_35);

  if (VAR_37)
   FUNC_18(VAR_36);
  else
   FUNC_20(VAR_36);

  break;
 }
 case 128:
 {
  struct pass_io_req *VAR_38;
  union ccb **VAR_39, *VAR_40;
  xpt_opcode VAR_41;







  if ((VAR_32->flags & VAR_11) == 0) {
   VAR_33 = FUNC_10(VAR_31);
   if (VAR_33 != 0)
    goto bailout;
  }





  FUNC_7(VAR_31);

  VAR_38 = FUNC_14(VAR_32->pass_zone, VAR_9 | VAR_10);
  VAR_40 = &VAR_38->ccb;
  VAR_39 = (union ccb **)VAR_28;
  VAR_33 = FUNC_8(*VAR_39, VAR_40, sizeof(*VAR_40));
  if (VAR_33 != 0) {
   FUNC_19(VAR_31->path, "Copy of user CCB %p to "
      "kernel address %p failed with error %d\n",
      *VAR_39, VAR_40, VAR_33);
   goto camioqueue_error;
  }





  if (VAR_40->ccb_h.flags & VAR_2) {
   VAR_33 = VAR_3;
   goto camioqueue_error;
  }

  if (VAR_40->ccb_h.flags & VAR_0) {
   if (VAR_40->csio.cdb_len > VAR_8) {
    VAR_33 = VAR_3;
    goto camioqueue_error;
   }
   VAR_33 = FUNC_8(VAR_40->csio.cdb_io.cdb_ptr,
       VAR_40->csio.cdb_io.cdb_bytes, VAR_40->csio.cdb_len);
   if (VAR_33 != 0)
    goto camioqueue_error;
   VAR_40->ccb_h.flags &= ~VAR_0;
  }





  if (VAR_40->ccb_h.func_code & VAR_18) {
   FUNC_19(VAR_31->path, "CCB function code %#x is "
       "restricted to the XPT device\n",
       VAR_40->ccb_h.func_code);
   VAR_33 = VAR_4;
   goto camioqueue_error;
  }






  VAR_38->user_ccb_ptr = *VAR_39;
  VAR_38->user_periph_links = VAR_40->ccb_h.periph_links;
  VAR_38->user_periph_priv = VAR_40->ccb_h.periph_priv;





  VAR_40->ccb_h.ccb_ioreq = VAR_38;


  VAR_34 = VAR_40->ccb_h.pinfo.priority;
  if (VAR_34 <= VAR_1)
      VAR_34 += VAR_1 + 1;






  FUNC_23(&VAR_40->ccb_h, VAR_31->path, VAR_34,
        VAR_40->ccb_h.flags);





  VAR_40->ccb_h.cbfcnp = VAR_24;

  VAR_41 = VAR_40->ccb_h.func_code;




  if ((VAR_41 == VAR_21) || (VAR_41 == VAR_13)
   || (VAR_41 == VAR_22) || (VAR_41 == VAR_15)
   || (VAR_41 == VAR_14)
   || (VAR_41 == VAR_19) || (VAR_41 == VAR_20)) {
   VAR_33 = FUNC_12(VAR_31, VAR_38);
   if (VAR_33 != 0)
    goto camioqueue_error;
  } else
   VAR_38->mapinfo.num_bufs_used = 0;

  FUNC_6(VAR_31);




  FUNC_2(&VAR_32->incoming_queue, VAR_38, VAR_23);







  if ((VAR_41 & VAR_16)
   && ((VAR_41 & VAR_17) == 0)) {
   FUNC_21(VAR_31, VAR_34);
   break;
  }
  FUNC_3(&VAR_32->incoming_queue, VAR_38, VAR_23);
  FUNC_2(&VAR_32->active_queue, VAR_38, VAR_23);

  FUNC_16(VAR_40);






  if ((VAR_41 & VAR_16) == 0) {
   FUNC_3(&VAR_32->active_queue, VAR_38, VAR_23);
   FUNC_2(&VAR_32->done_queue, VAR_38, VAR_23);
  }
  break;

camioqueue_error:
  FUNC_15(VAR_32->pass_zone, VAR_38);
  FUNC_6(VAR_31);
  break;
 }
 case 129:
 {
  union ccb **VAR_42;
  struct pass_io_req *VAR_43;
  int VAR_44;







  VAR_42 = (union ccb **)VAR_28;
  VAR_44 = 0;

  VAR_43 = FUNC_1(&VAR_32->done_queue);
  if (VAR_43 == ((void*)0)) {
   VAR_33 = VAR_5;
   break;
  }




  FUNC_3(&VAR_32->done_queue, VAR_43, VAR_23);





  FUNC_7(VAR_31);





  VAR_33 = FUNC_11(VAR_31, VAR_43);

  VAR_44 = VAR_33;

  VAR_43->ccb.ccb_h.periph_links = VAR_43->user_periph_links;
  VAR_43->ccb.ccb_h.periph_priv = VAR_43->user_periph_priv;






  VAR_33 = FUNC_9(&VAR_43->ccb, *VAR_42, sizeof(union ccb));
  if (VAR_33 != 0) {
   FUNC_19(VAR_31->path, "Copy to user CCB %p from "
      "kernel address %p failed with error %d\n",
      *VAR_42, &VAR_43->ccb, VAR_33);
  }





  if (VAR_44 != 0)
   VAR_33 = VAR_44;

  FUNC_6(VAR_31);







  FUNC_15(VAR_32->pass_zone, VAR_43);
  break;
 }
 default:
  VAR_33 = FUNC_5(VAR_31, VAR_27, VAR_28, VAR_25);
  break;
 }

bailout:
 FUNC_7(VAR_31);

 return(VAR_33);
}

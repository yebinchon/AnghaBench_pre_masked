
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ctio_descr {int event; scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ status; scalar_t__ targ_descr; } ;
struct ccb_scsiio {TYPE_2__ ccb_h; } ;
struct ccb_hdr {int flags; } ;
struct TYPE_4__ {scalar_t__ targ_descr; } ;
struct ccb_accept_tio {TYPE_1__ ccb_h; } ;
struct atio_descr {scalar_t__ base_off; scalar_t__ targ_ack; scalar_t__ init_ack; int cmplt_io; } ;
struct TYPE_6__ {int tqe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ccb_hdr* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ccb_hdr*,int ) ;
 int FUNC_2 (union ccb*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (union ccb*,int) ;
 int FUNC_4 (struct ccb_accept_tio*,struct ccb_scsiio*,int) ;
 int FUNC_5 (char*,struct ccb_hdr*,struct atio_descr*,char*) ;

__attribute__((used)) static int
FUNC_6(struct ccb_accept_tio *VAR_5)
{
 struct atio_descr *VAR_6;
 struct ccb_hdr *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_5 == ((void*)0))
  return (0);

 VAR_6 = (struct atio_descr *)VAR_5->ccb_h.targ_descr;

 while ((VAR_7 = FUNC_0(&VAR_6->cmplt_io)) != ((void*)0)) {
  struct ccb_scsiio *VAR_10;
  struct ctio_descr *VAR_11;

  VAR_10 = (struct ccb_scsiio *)VAR_7;
  VAR_11 = (struct ctio_descr *)VAR_10->ccb_h.targ_descr;

  if (VAR_10->ccb_h.status == VAR_1) {
   FUNC_1(&VAR_6->cmplt_io, VAR_7,
         VAR_4.tqe);
   FUNC_2((union ccb *)VAR_10);
   FUNC_3((union ccb *)VAR_5, 1);
   continue;
  }


  if ((VAR_11->event == VAR_0 &&
      VAR_11->offset == VAR_6->base_off + VAR_6->targ_ack)
   || (VAR_11->event == VAR_3 &&
      VAR_11->offset == VAR_6->base_off + VAR_6->init_ack)) {
   VAR_8 = (VAR_7->flags & VAR_2) != 0;
   VAR_9 = VAR_11->event;

   FUNC_1(&VAR_6->cmplt_io, VAR_7,
         VAR_4.tqe);
   FUNC_4(VAR_5, VAR_10, VAR_11->event);


   if (VAR_8 != 0 && VAR_9 == VAR_3)
    FUNC_3((union ccb *)VAR_5, 1);
  } else {

   if ( 1)
    FUNC_5("IO %p:%p out of order %s", VAR_7,
        VAR_6, VAR_11->event == VAR_0?
        "aio" : "ctio");
   return (1);
  }
 }
 return (0);
}

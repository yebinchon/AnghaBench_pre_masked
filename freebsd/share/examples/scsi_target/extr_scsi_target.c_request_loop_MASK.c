
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ccb {int cin1; int atio; } ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct kevent {int flags; int filter; scalar_t__ udata; } ;
struct ctio_descr {int atio; int event; } ;
struct TYPE_3__ {scalar_t__ targ_descr; } ;
struct ccb_scsiio {TYPE_1__ ccb_h; } ;
struct ccb_hdr {int func_code; int status; } ;
struct TYPE_4__ {int tqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kevent*,int ,int,int,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 struct ccb_hdr* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ccb_hdr*,int ) ;


 int FUNC_4 () ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct kevent*,int,struct kevent*,int,struct timespec*) ;
 int VAR_12 ;
 int FUNC_9 () ;
 TYPE_2__ VAR_13 ;
 int FUNC_10 (struct ccb_scsiio*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int VAR_14 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_16()
{
 struct kevent VAR_16[VAR_6];
 struct timespec VAR_17, *VAR_18;
 int VAR_19;


 if ((VAR_12 = FUNC_9()) < 0)
  FUNC_5(1, "init kqueue");


 FUNC_0(&VAR_16[0], VAR_7, 130, VAR_3|VAR_4, 0, 0, 0);
 FUNC_0(&VAR_16[1], VAR_8, 130, VAR_3|VAR_4, 0, 0, 0);
 FUNC_0(&VAR_16[2], VAR_9, 130, VAR_3|VAR_4, 0, 0, 0);
 FUNC_0(&VAR_16[3], VAR_14, 131, VAR_3|VAR_4, 0, 0, 0);
 if (FUNC_8(VAR_12, VAR_16, 4, ((void*)0), 0, ((void*)0)) < 0)
  FUNC_5(1, "kevent signal registration");

 VAR_17.tv_sec = 0;
 VAR_17.tv_nsec = 0;
 VAR_18 = ((void*)0);
 VAR_19 = 0;


 while (VAR_19 == 0) {
  int VAR_20, VAR_21, VAR_22;
  struct ccb_hdr *VAR_23;


  VAR_20 = FUNC_8(VAR_12, ((void*)0), 0, VAR_16, VAR_6, VAR_18);
  if (VAR_20 < 0) {
   if (VAR_11 == VAR_2) {
    if (VAR_10)
     FUNC_13("EINTR, looping");
    continue;
              }
   else {
    FUNC_5(1, "kevent failed");
   }
  } else if (VAR_20 > VAR_6) {
   FUNC_6(1, "kevent returned more events than allocated?");
  }


  for (VAR_22 = VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
   if ((VAR_16[VAR_21].flags & VAR_5) != 0)
    FUNC_6(1, "kevent registration failed");

   switch (VAR_16[VAR_21].filter) {
   case 131:
    if (VAR_10)
     FUNC_13("read ready");
    FUNC_7();
    break;
   case 132:
   {
    struct ccb_scsiio *VAR_24;
    struct ctio_descr *VAR_25;
    if (VAR_10)
     FUNC_13("aio ready");

    VAR_24 = (struct ccb_scsiio *)VAR_16[VAR_21].udata;
    VAR_25 = (struct ctio_descr *)
       VAR_24->ccb_h.targ_descr;
    VAR_25->event = VAR_0;

    FUNC_10(VAR_24);

    VAR_22 += FUNC_12(VAR_25->atio);
    break;
   }
   case 130:
    if (VAR_10)
     FUNC_13("signal ready, setting quit");
    VAR_19 = 1;
    break;
   default:
    FUNC_13("unknown event %d", VAR_16[VAR_21].filter);
    break;
   }

   if (VAR_10)
    FUNC_13("event %d done", VAR_16[VAR_21].filter);
  }

  if (VAR_22) {
   VAR_18 = &VAR_17;
   continue;
  }


  if ((VAR_23 = FUNC_2(&VAR_15)) != ((void*)0)) {
   union ccb *VAR_26;

   VAR_26 = (union ccb *)VAR_23;
   switch (VAR_23->func_code) {
   case 129:

    VAR_20 = FUNC_14(&VAR_26->atio);
    break;
   case 128:
    VAR_20 = FUNC_15(&VAR_26->cin1);
    break;
   default:
    FUNC_13("Unhandled ccb type %#x on workq",
          VAR_23->func_code);
    FUNC_4();

   }


   if ((VAR_23->status & VAR_1) != 0) {
    if (VAR_10) {
     FUNC_13("Queue frozen receiving CCB, "
           "releasing");
    }
    FUNC_11();
   }


   if (VAR_20 == 0) {
    FUNC_3(&VAR_15, VAR_23,
          VAR_13.tqe);
   }
  }






  if (!FUNC_1(&VAR_15))
   VAR_18 = &VAR_17;
  else
   VAR_18 = ((void*)0);
 }
}

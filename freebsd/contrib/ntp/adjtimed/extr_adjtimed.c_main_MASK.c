
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct sigvec {int sv_mask; scalar_t__ sv_flags; int sv_handler; } ;
struct msqid_ds {int dummy; } ;
struct TYPE_3__ {int code; int mtype; struct timeval tv; } ;
struct TYPE_4__ {TYPE_1__ msgb; int msgp; } ;
typedef TYPE_2__ MsgBuf ;


 int FUNC_0 (struct timeval*,struct timeval*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_24 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,int const) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int,int ,int ) ;
 int VAR_25 ;
 int FUNC_12 (int,int ,struct msqid_ds*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int,int *,int ,int ,int ) ;
 int FUNC_15 (int,int *,int ,int ) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int) ;
 char FUNC_18 (int,char**,char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int ,...) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (char*,...) ;
 char* VAR_26 ;
 int FUNC_24 (char*) ;
 int FUNC_25 () ;
 int FUNC_26 (int ,int *,int ,int ) ;
 int FUNC_27 (int ,int (*) ()) ;
 int FUNC_28 (int ,struct sigvec*,struct sigvec*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 double FUNC_29 (struct timeval) ;
 scalar_t__ VAR_31 ;

int
FUNC_30(
 int VAR_32,
 char *VAR_33[]
 )
{
 struct timeval VAR_34;
 struct sigvec VAR_35;
 MsgBuf VAR_36;
 char VAR_37;
 int VAR_38 = 0;
 int VAR_39;

 VAR_26 = VAR_33[0];




 FUNC_20("adjtimed", VAR_12);


 while ((VAR_37 = FUNC_18(VAR_32, VAR_33, "hkrvdfp:")) != VAR_4) {
  switch (VAR_37) {
      case 'k':
      case 'r':
   if ((VAR_25 = FUNC_13(VAR_8, 0)) != -1) {
    if (FUNC_12(VAR_25, VAR_7, (struct msqid_ds *)0) == -1) {
     FUNC_16(VAR_9, "remove old message queue: %m");
     FUNC_21("adjtimed: remove old message queue");
     FUNC_6(1);
    }
   }

   if (VAR_37 == 'k')
       FUNC_6(0);

   break;

      case 'v':
   ++VAR_31, VAR_38 = 1;
   break;

      case 'd':
   ++VAR_30;
   break;

      case 'f':
   VAR_38 = 1;
   break;

      case 'p':
   FUNC_10("adjtimed: -p option ignored\n", VAR_27);
   break;

      default:
   FUNC_24("usage: adjtimed -hkrvdf");
   FUNC_24("-h\thelp");
   FUNC_24("-k\tkill existing adjtimed, if any");
   FUNC_24("-r\trestart (kills existing adjtimed, if any)");
   FUNC_24("-v\tdebug output (repeat for more output)");
   FUNC_24("-d\tsyslog output (repeat for more output)");
   FUNC_24("-f\tno fork");
   FUNC_16(VAR_9, "usage error");
   FUNC_6(1);
  }
 }

 if (!VAR_38) {
  switch (FUNC_8()) {
      case 0:
   FUNC_5(FUNC_7(VAR_28));
   FUNC_5(FUNC_7(VAR_29));
   FUNC_5(FUNC_7(VAR_27));







   FUNC_25();

   break;

      case -1:
   FUNC_16(VAR_9, "fork: %m");
   FUNC_21("adjtimed: fork");
   FUNC_6(1);

      default:
   FUNC_6(0);
  }
 }

 if (VAR_38) {
  FUNC_26(VAR_29, ((void*)0), VAR_23, VAR_0);
  FUNC_26(VAR_27, ((void*)0), VAR_23, VAR_0);
 }

 FUNC_16(VAR_10, "started");
 if (VAR_31) FUNC_23("adjtimed: started\n");

 if (FUNC_3() == -1)
     FUNC_2(2);

 (void)FUNC_27(VAR_18, FUNC_4);
 (void)FUNC_27(VAR_19, FUNC_4);
 (void)FUNC_27(VAR_20, FUNC_4);
 (void)FUNC_27(VAR_21, FUNC_1);

 VAR_35.sv_handler = VAR_15;
 VAR_35.sv_flags = 0;
 VAR_35.sv_mask = ~0;
 FUNC_28(VAR_17, &VAR_35, (struct sigvec *)0);

 if (FUNC_13(VAR_8, VAR_5|VAR_6) == -1) {
  if (VAR_24 == VAR_2) {
   FUNC_16(VAR_9, "message queue already exists, use -r to remove it");
   FUNC_10("adjtimed: message queue already exists, use -r to remove it\n",
         VAR_27);
   FUNC_2(1);
  }

  FUNC_16(VAR_9, "create message queue: %m");
  FUNC_21("adjtimed: create message queue");
  FUNC_2(1);
 }

 if ((VAR_25 = FUNC_13(VAR_8, 0)) == -1) {
  FUNC_16(VAR_9, "get message queue id: %m");
  FUNC_21("adjtimed: get message queue id");
  FUNC_2(1);
 }


 if (FUNC_22(VAR_14)) {
  FUNC_16(VAR_9, "plock: %m");
  FUNC_21("adjtimed: plock");
  FUNC_1();
 }





 if (FUNC_17(-10) == -1) {
  FUNC_16(VAR_9, "nice: %m");
  FUNC_21("adjtimed: nice");
  FUNC_1();
 }

 for (;;) {
  if (FUNC_14(VAR_25, &VAR_36.msgp, VAR_13, VAR_1, 0) == -1) {
   if (VAR_24 == VAR_3) continue;
   FUNC_16(VAR_9, "read message: %m");
   FUNC_21("adjtimed: read message");
   FUNC_1();
  }

  switch (VAR_36.msgb.code) {
      case 129:
      case 128:
   FUNC_0(&VAR_36.msgb.tv, &VAR_34);

   if (VAR_36.msgb.code == 128) {
    VAR_36.msgb.tv = VAR_34;
    VAR_36.msgb.mtype = VAR_16;

    while (FUNC_15(VAR_25, &VAR_36.msgp, VAR_13, 0) == -1) {
     if (VAR_24 == VAR_3) continue;
     FUNC_16(VAR_9, "send message: %m");
     FUNC_21("adjtimed: send message");
     FUNC_1();
    }
   }

   if (VAR_34.tv_sec + VAR_34.tv_usec != 0L) {
    if (VAR_31) {
     FUNC_23("adjtimed: previous correction remaining %.6fs\n",
            FUNC_29(VAR_34));
    }
    if (VAR_30) {
     FUNC_16(VAR_10, "previous correction remaining %.6fs",
      FUNC_29(VAR_34));
    }
   }
   break;

      default:
   FUNC_9(VAR_27, "adjtimed: unknown message code %d\n", VAR_36.msgb.code);
   FUNC_16(VAR_9, "unknown message code %d", VAR_36.msgb.code);
  }
 }
}

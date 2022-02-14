
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr {int dummy; } ;
typedef int opt ;
struct TYPE_8__ {int sin_port; int sin_addr; } ;
struct TYPE_9__ {scalar_t__ l4_last; int l4_fd; int l4_rw; struct TYPE_9__* l4_next; scalar_t__ l4_wlen; TYPE_1__ l4_sin; } ;
typedef TYPE_2__ l4cfg_t ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,...) ;
 int FUNC_6 (int,struct sockaddr*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ VAR_11 ;
 char* FUNC_10 (int ) ;
 TYPE_2__* VAR_12 ;
 int FUNC_11 (int ) ;
 int VAR_13 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_14 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_15 (int,int ,int ,int*,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*) ;

int FUNC_19()
{
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct timeval VAR_21;
 time_t VAR_22, VAR_23;
 fd_set VAR_24, VAR_25;
 l4cfg_t *VAR_26;

 VAR_19 = 0;
 VAR_17 = 1;
 VAR_22 = FUNC_17(((void*)0));




 for (VAR_26 = VAR_12; VAR_26; VAR_26 = VAR_26->l4_next) {
  if ((VAR_26->l4_last + VAR_11 < VAR_22) && (VAR_26->l4_fd == -1)) {
   VAR_26->l4_last = VAR_22;
   VAR_16 = FUNC_16(VAR_0, VAR_6, 0);
   if (VAR_16 == -1)
    continue;
   FUNC_15(VAR_16, VAR_7, VAR_8, &VAR_17,
       sizeof(VAR_17));




   if (VAR_13 & VAR_4)
    FUNC_9(VAR_15,
     "Connecting to %s,%d (fd %d)...",
     FUNC_10(VAR_26->l4_sin.sin_addr),
     FUNC_11(VAR_26->l4_sin.sin_port), VAR_16);
   if (FUNC_6(VAR_16, (struct sockaddr *)&VAR_26->l4_sin,
        sizeof(VAR_26->l4_sin)) == -1) {
    if (VAR_10 != VAR_1) {
     if (VAR_13 & VAR_4)
      FUNC_9(VAR_15, "failed\n");
     FUNC_12("connect");
     FUNC_4(VAR_16);
     VAR_16 = -1;
    } else {
     if (VAR_13 & VAR_4)
      FUNC_9(VAR_15, "waiting\n");
     VAR_26->l4_rw = -2;
    }
   } else {
    if (VAR_13 & VAR_4)
     FUNC_9(VAR_15, "connected\n");
    FUNC_7(VAR_26);
   }
   VAR_26->l4_fd = VAR_16;
  }
 }




 FUNC_2(&VAR_24);
 FUNC_2(&VAR_25);
 VAR_21.tv_sec = FUNC_3(VAR_14, VAR_9);
 VAR_21.tv_usec = 0;

 for (VAR_26 = VAR_12; VAR_26; VAR_26 = VAR_26->l4_next)
  if (VAR_26->l4_rw == 0) {
   if (VAR_22 - VAR_26->l4_last > VAR_14) {
    if (VAR_13 & VAR_4)
     FUNC_9(VAR_15, "%d: Read timeout\n",
      VAR_26->l4_fd);
    FUNC_5(VAR_26, 1);
    continue;
   }
   if (VAR_13 & VAR_4)
    FUNC_9(VAR_15, "Wait for read on fd %d\n",
     VAR_26->l4_fd);
   FUNC_1(VAR_26->l4_fd, &VAR_24);
   if (VAR_26->l4_fd > VAR_19)
    VAR_19 = VAR_26->l4_fd;
  } else if ((VAR_26->l4_rw == 1 && VAR_26->l4_wlen) ||
      VAR_26->l4_rw == -2) {
   if ((VAR_26->l4_rw == -2) &&
       (VAR_22 - VAR_26->l4_last > VAR_9)) {
    if (VAR_13 & VAR_4)
     FUNC_9(VAR_15,
      "%d: connect timeout\n",
      VAR_26->l4_fd);
    FUNC_5(VAR_26);
    continue;
   }
   if (VAR_13 & VAR_4)
    FUNC_9(VAR_15, "Wait for write on fd %d\n",
     VAR_26->l4_fd);
   FUNC_1(VAR_26->l4_fd, &VAR_25);
   if (VAR_26->l4_fd > VAR_19)
    VAR_19 = VAR_26->l4_fd;
  }

 if (VAR_13 & VAR_4)
  FUNC_9(VAR_15, "Select: max fd %d wait %d\n", VAR_19 + 1,
   VAR_21.tv_sec);
 VAR_20 = FUNC_14(VAR_19 + 1, &VAR_24, &VAR_25, ((void*)0), &VAR_21);
 if (VAR_20 == -1) {
  FUNC_12("select");
  return -1;
 }

 VAR_23 = FUNC_17(((void*)0));

 for (VAR_26 = VAR_12; (VAR_20 > 0) && VAR_26; VAR_26 = VAR_26->l4_next) {
  if (VAR_26->l4_fd < 0)
   continue;
  if (FUNC_0(VAR_26->l4_fd, &VAR_24)) {
   if (VAR_13 & VAR_4)
    FUNC_9(VAR_15, "Ready to read on fd %d\n",
     VAR_26->l4_fd);
   FUNC_13(VAR_26);
   VAR_20--;
  }

  if ((VAR_26->l4_fd >= 0) && FUNC_0(VAR_26->l4_fd, &VAR_25)) {
   if (VAR_13 & VAR_4)
    FUNC_9(VAR_15, "Ready to write on fd %d\n",
     VAR_26->l4_fd);
   FUNC_18(VAR_26);
   VAR_20--;
  }
 }
 return 0;
}

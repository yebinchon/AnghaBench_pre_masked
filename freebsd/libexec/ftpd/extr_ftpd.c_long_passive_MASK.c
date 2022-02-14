
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int on ;
struct TYPE_11__ {int * s6_addr; } ;
struct TYPE_8__ {TYPE_6__ sin6_addr; } ;
struct TYPE_7__ {int sin_addr; } ;
struct TYPE_10__ {int su_family; scalar_t__ su_port; TYPE_2__ su_sin6; TYPE_1__ su_sin; int su_len; } ;
struct TYPE_9__ {int pw_uid; } ;




 int FUNC_0 (TYPE_6__*) ;
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
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int ) ;
 int FUNC_3 (int) ;
 TYPE_4__ VAR_13 ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int *) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__) ;
 TYPE_4__ VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int,char*) ;
 TYPE_3__* VAR_16 ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int ,int ,int*,int) ;
 int FUNC_11 (int,int ,int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,char*) ;

void
FUNC_14(char *VAR_18, int VAR_19)
{
 socklen_t VAR_20;
 int VAR_21;
 char *VAR_22, *VAR_23;

 if (VAR_15 >= 0)
  FUNC_3(VAR_15);

 if (VAR_19 != VAR_9) {
  if (VAR_13.su_family != VAR_19) {
   switch (VAR_13.su_family) {
   case 129:
    VAR_19 = 1;
    break;
   case 128:
    VAR_19 = 2;
    break;
   default:
    VAR_19 = 0;
    break;
   }




   if (FUNC_12(VAR_18, "EPSV") == 0 && VAR_19) {
    FUNC_8(522, "Network protocol mismatch, "
     "use (%d)", VAR_19);
   } else
    FUNC_8(501, "Network protocol mismatch.");

   return;
  }
 }

 VAR_15 = FUNC_11(VAR_13.su_family, VAR_10, 0);
 if (VAR_15 < 0) {
  FUNC_7(425, "Can't open passive connection");
  return;
 }
 VAR_21 = 1;
 if (FUNC_10(VAR_15, VAR_11, VAR_12, &VAR_21, sizeof(VAR_21)) < 0)
  FUNC_13(VAR_8, "pdata setsockopt (SO_REUSEADDR): %m");

 (void) FUNC_9(0);

 VAR_14 = VAR_13;
 VAR_14.su_port = 0;
 VAR_20 = VAR_14.su_len;
 if (FUNC_2(VAR_15, (struct sockaddr *)&VAR_14, VAR_20) < 0)
  goto pasv_error;

 (void) FUNC_9(VAR_16->pw_uid);

 if (FUNC_4(VAR_15, (struct sockaddr *) &VAR_14, &VAR_20) < 0)
  goto pasv_error;
 if (FUNC_5(VAR_15, 1) < 0)
  goto pasv_error;



 if (FUNC_12(VAR_18, "LPSV") == 0) {
  VAR_22 = (char *)&VAR_14.su_port;
  switch (VAR_14.su_family) {
  case 129:
   VAR_23 = (char *) &VAR_14.su_sin.sin_addr;
  v4_reply:
   FUNC_8(228,
"Entering Long Passive Mode (%d,%d,%d,%d,%d,%d,%d,%d,%d)",
         4, 4, (((int) VAR_23[0]) & 0xff), (((int) VAR_23[1]) & 0xff), (((int) VAR_23[2]) & 0xff), (((int) VAR_23[3]) & 0xff),
         2, (((int) VAR_22[0]) & 0xff), (((int) VAR_22[1]) & 0xff));
   return;
  case 128:
   if (FUNC_0(&VAR_14.su_sin6.sin6_addr)) {
    VAR_23 = (char *) &VAR_14.su_sin6.sin6_addr.s6_addr[12];
    goto v4_reply;
   }
   VAR_23 = (char *) &VAR_14.su_sin6.sin6_addr;
   FUNC_8(228,
"Entering Long Passive Mode "
"(%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
         6, 16, (((int) VAR_23[0]) & 0xff), (((int) VAR_23[1]) & 0xff), (((int) VAR_23[2]) & 0xff), (((int) VAR_23[3]) & 0xff),
         (((int) VAR_23[4]) & 0xff), (((int) VAR_23[5]) & 0xff), (((int) VAR_23[6]) & 0xff), (((int) VAR_23[7]) & 0xff),
         (((int) VAR_23[8]) & 0xff), (((int) VAR_23[9]) & 0xff), (((int) VAR_23[10]) & 0xff), (((int) VAR_23[11]) & 0xff),
         (((int) VAR_23[12]) & 0xff), (((int) VAR_23[13]) & 0xff), (((int) VAR_23[14]) & 0xff), (((int) VAR_23[15]) & 0xff),
         2, (((int) VAR_22[0]) & 0xff), (((int) VAR_22[1]) & 0xff));
   return;
  }
 } else if (FUNC_12(VAR_18, "EPSV") == 0) {
  switch (VAR_14.su_family) {
  case 129:
  case 128:
   FUNC_8(229, "Entering Extended Passive Mode (|||%d|)",
    FUNC_6(VAR_14.su_port));
   return;
  }
 } else {

 }

pasv_error:
 (void) FUNC_9(VAR_16->pw_uid);
 (void) FUNC_3(VAR_15);
 VAR_15 = -1;
 FUNC_7(425, "Can't open passive connection");
 return;
}

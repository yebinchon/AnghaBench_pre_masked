
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union sockunion {scalar_t__ su_family; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sizebuf ;
typedef int portbuf ;
typedef int off_t ;
typedef int intmax_t ;
typedef int hostbuf ;
typedef int fd_set ;
struct TYPE_7__ {int su_len; } ;
struct TYPE_6__ {int su_len; } ;
struct TYPE_5__ {int su_len; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
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
 scalar_t__ VAR_13 ;
 int FUNC_2 (int,struct sockaddr*,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int ) ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 TYPE_1__ VAR_17 ;
 TYPE_2__ VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ,int) ;
 int * FUNC_7 (int,char*) ;
 int VAR_20 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct sockaddr*,int ,char*,int,char*,int,int) ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ FUNC_12 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*,int,char*,int ) ;
 char* FUNC_16 (int) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_17 (int ,char*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static FILE *
FUNC_18(char *VAR_27, off_t VAR_28, char *VAR_29)
{
 char VAR_30[32];
 FILE *VAR_31;
 int VAR_32 = 0, VAR_33, VAR_34;

 VAR_20 = VAR_28;
 VAR_14 = 0;
 if (VAR_28 != -1)
  (void) FUNC_15(VAR_30, sizeof(VAR_30),
    " (%jd bytes)", (intmax_t)VAR_28);
 else
  *VAR_30 = '\0';
 if (VAR_22 >= 0) {
  union sockunion VAR_35;
  socklen_t VAR_36 = VAR_15.su_len;
  int VAR_37, VAR_38;
  struct timeval VAR_39;
  fd_set VAR_40;

  FUNC_1(&VAR_40);
  FUNC_0(VAR_22, &VAR_40);

  VAR_39.tv_usec = 0;
  VAR_39.tv_sec = 120;







  if ((VAR_37 = FUNC_6(VAR_22, VAR_2, 0)) == -1 ||
      FUNC_6(VAR_22, VAR_3, VAR_37 | VAR_12) == -1)
   goto pdata_err;
  if (FUNC_12(VAR_22+1, &VAR_40, ((void*)0), ((void*)0), &VAR_39) <= 0 ||
      (VAR_38 = FUNC_2(VAR_22, (struct sockaddr *) &VAR_35, &VAR_36)) < 0)
   goto pdata_err;
  (void) FUNC_3(VAR_22);
  VAR_22 = VAR_38;




  if ((VAR_37 = FUNC_6(VAR_22, VAR_2, 0)) == -1 ||
      FUNC_6(VAR_22, VAR_3, VAR_37 & ~VAR_12) == -1)
   goto pdata_err;
  FUNC_11(150, "Opening %s mode data connection for '%s'%s.",
       VAR_25 == VAR_13 ? "ASCII" : "BINARY", VAR_27, VAR_30);
  return (FUNC_7(VAR_22, VAR_29));
pdata_err:
  FUNC_11(425, "Can't open data connection.");
  (void) FUNC_3(VAR_22);
  VAR_22 = -1;
  return (((void*)0));
 }
 if (VAR_16 >= 0) {
  FUNC_11(125, "Using existing data connection for '%s'%s.",
      VAR_27, VAR_30);
  VAR_26 = 1;
  return (FUNC_7(VAR_16, VAR_29));
 }
 if (VAR_26)
  VAR_17 = VAR_21;
 VAR_26 = 1;
 do {
  VAR_31 = FUNC_9(VAR_29);
  if (VAR_31 == ((void*)0)) {
   char VAR_41[VAR_8], VAR_42[VAR_9];

   if (FUNC_10((struct sockaddr *)&VAR_18,
    VAR_18.su_len,
    VAR_41, sizeof(VAR_41) - 1,
    VAR_42, sizeof(VAR_42) - 1,
    VAR_10|VAR_11))
     *VAR_41 = *VAR_42 = 0;
   VAR_41[sizeof(VAR_41) - 1] = 0;
   VAR_42[sizeof(VAR_42) - 1] = 0;
   FUNC_11(425, "Can't create data socket (%s,%s): %s.",
    VAR_41, VAR_42, FUNC_16(VAR_19));
   return (((void*)0));
  }
  VAR_16 = FUNC_8(VAR_31);
  VAR_34 = 0;
  if (FUNC_4(VAR_16, (struct sockaddr *)&VAR_17,
      VAR_17.su_len) == 0)
   break;
  VAR_34 = VAR_19;
  (void) FUNC_5(VAR_31);
  VAR_16 = -1;
  if (VAR_34 == VAR_1) {
   FUNC_14(VAR_23);
   VAR_32 += VAR_23;
  } else {
   break;
  }
 } while (VAR_32 <= VAR_24);
 if (VAR_34 != 0) {
  FUNC_11(425, "Can't build data connection: %s.",
      FUNC_16(VAR_34));
  return (((void*)0));
 }
 FUNC_11(150, "Opening %s mode data connection for '%s'%s.",
      VAR_25 == VAR_13 ? "ASCII" : "BINARY", VAR_27, VAR_30);
 return (VAR_31);
}

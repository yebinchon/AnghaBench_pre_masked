
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;
typedef int sizebuf ;
typedef scalar_t__ off_t ;
typedef int from_ss ;
typedef int data_addr ;
struct TYPE_11__ {int sa_family; } ;
struct TYPE_10__ {int sa_family; } ;
struct TYPE_9__ {int sa_family; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int*,struct timeval*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*,int ) ;
 TYPE_7__* VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char const*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,int) ;
 TYPE_1__* VAR_12 ;
 int * FUNC_7 (int ,int ,char*,int) ;
 int VAR_13 ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,int,char*,long) ;
 int FUNC_12 (TYPE_2__*) ;
 char const* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 char* FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,char*,int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static FILE *
FUNC_18(const char *VAR_18, off_t VAR_19, const char *VAR_20)
{
 char VAR_21[32];
 FILE *VAR_22;
 int VAR_23, VAR_24 = 0;

 VAR_11 = VAR_19;
 VAR_5 = 0;
 if (VAR_19 >= 0)
     FUNC_11(VAR_21, sizeof(VAR_21), " (%ld bytes)", (long)VAR_19);
 else
     *VAR_21 = '\0';
 if (VAR_13 >= 0) {
  struct sockaddr_storage VAR_25;
  struct sockaddr *VAR_26 = (struct sockaddr *)&VAR_25;
  struct timeval VAR_27;
  int VAR_28;
  socklen_t VAR_29 = sizeof(VAR_25);

  VAR_27.tv_sec = 15;
  VAR_27.tv_usec = 0;
  VAR_28 = FUNC_0(VAR_13, VAR_26, &VAR_29, &VAR_27);
  if (VAR_28 < 0) {
   FUNC_9(425, "Can't open data connection.");
   FUNC_1(VAR_13);
   VAR_13 = -1;
   return (((void*)0));
  }
  FUNC_1(VAR_13);
  VAR_13 = VAR_28;




  FUNC_9(150, "Opening %s mode data connection for '%s'%s.",
       VAR_16 == VAR_4 ? "ASCII" : "BINARY", VAR_18, VAR_21);
  return (FUNC_4(VAR_13, VAR_20));
 }
 if (VAR_7 >= 0) {
  FUNC_9(125, "Using existing data connection for '%s'%s.",
      VAR_18, VAR_21);
  VAR_17 = 1;
  return (FUNC_4(VAR_7, VAR_20));
 }
 if (VAR_17)
  VAR_8 = VAR_12;
 VAR_17 = 1;




 VAR_23 = VAR_8->sa_family;
 if (VAR_23 == VAR_3)
     VAR_23 = VAR_6->sa_family;

 VAR_22 = FUNC_6(VAR_20, VAR_23);
 if (VAR_22 == ((void*)0)) {
  char VAR_30[256];

  if (FUNC_7 (VAR_9->sa_family,
          FUNC_12(VAR_9),
          VAR_30, sizeof(VAR_30)) == ((void*)0))
   FUNC_17 (VAR_30, "unknown address",
      sizeof(VAR_30));

  FUNC_9(425, "Can't create data socket (%s,%d): %s.",
        VAR_30,
        FUNC_13 (VAR_9),
        FUNC_16(VAR_10));
  return (((void*)0));
 }
 VAR_7 = FUNC_5(VAR_22);
 while (FUNC_2(VAR_7, VAR_8,
         FUNC_15(VAR_8)) < 0) {
  if (VAR_10 == VAR_1 && VAR_24 < VAR_15) {
   FUNC_10(VAR_14);
   VAR_24 += VAR_14;
   continue;
  }
  FUNC_8(425, "Can't build data connection");
  FUNC_3(VAR_22);
  VAR_7 = -1;
  return (((void*)0));
 }
 FUNC_9(150, "Opening %s mode data connection for '%s'%s.",
      VAR_16 == VAR_4 ? "ASCII" : "BINARY", VAR_18, VAR_21);
 return (VAR_22);
}

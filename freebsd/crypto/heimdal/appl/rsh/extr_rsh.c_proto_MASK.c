
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thisaddr_ss ;
typedef int thataddr_ss ;
struct sockaddr_storage {int dummy; } ;
typedef struct sockaddr sockaddr ;
typedef int socklen_t ;
typedef int one ;
typedef int fd_set ;
typedef int erraddr_ss ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_7 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (scalar_t__,int *,int *,int *,int *) ;
 scalar_t__ FUNC_16 (int,int ,int ,void*,int) ;
 int FUNC_17 (char*,int,char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_18 (struct sockaddr*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int,struct sockaddr*,struct sockaddr*,char const*,char const*,char const*,size_t,char const*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_24 (int VAR_8, int VAR_9,
       const char *VAR_10, const char *VAR_11, const char *VAR_12,
       const char *VAR_13, size_t VAR_14,
       int (*VAR_15)(int VAR_16,
   struct sockaddr *VAR_17, struct sockaddr *VAR_18,
   const char *VAR_19, const char *VAR_20,
   const char *VAR_21, size_t VAR_22,
   const char *VAR_23))
{
    int VAR_24;
    char VAR_25[VAR_0];
    char *VAR_26;
    size_t VAR_27;
    char VAR_28;
    struct sockaddr_storage VAR_29;
    struct sockaddr *VAR_30 = (struct sockaddr *)&VAR_29;
    struct sockaddr_storage VAR_31;
    struct sockaddr *VAR_32 = (struct sockaddr *)&VAR_31;
    struct sockaddr_storage VAR_33;
    struct sockaddr *VAR_34 = (struct sockaddr *)&VAR_33;
    socklen_t VAR_35;
    int VAR_36;

    VAR_35 = sizeof(VAR_29);
    if (FUNC_7 (VAR_8, VAR_30, &VAR_35) < 0) {
 FUNC_21 ("getsockname(%s)", VAR_10);
 return 1;
    }
    VAR_35 = sizeof(VAR_31);
    if (FUNC_6 (VAR_8, VAR_32, &VAR_35) < 0) {
 FUNC_21 ("getpeername(%s)", VAR_10);
 return 1;
    }

    if (VAR_9 != -1) {

 VAR_35 = sizeof(VAR_33);
 if (FUNC_7 (VAR_9, VAR_34, &VAR_35) < 0) {
     FUNC_21 ("getsockname");
     return 1;
 }

 if (FUNC_8 (VAR_9, 1) < 0) {
     FUNC_21 ("listen");
     return 1;
 }

 VAR_26 = VAR_25;
 FUNC_17 (VAR_26, sizeof(VAR_25), "%u",
    FUNC_12(FUNC_18(VAR_34)));
 VAR_27 = FUNC_19(VAR_25) + 1;
 if(FUNC_11 (VAR_8, VAR_25, VAR_27) != VAR_27) {
     FUNC_21 ("write");
     FUNC_4 (VAR_9);
     return 1;
 }


 for (;;) {
     fd_set VAR_37;

     if (VAR_9 >= VAR_2 || VAR_8 >= VAR_2)
  FUNC_5 (1, "fd too large");

     FUNC_2(&VAR_37);
     FUNC_1(VAR_9, &VAR_37);
     FUNC_1(VAR_8, &VAR_37);

     VAR_36 = FUNC_15 (FUNC_9(VAR_9, VAR_8) + 1, &VAR_37, ((void*)0), ((void*)0), ((void*)0));
     if (VAR_36 < 0) {
  if (VAR_6 == VAR_1)
      continue;
  FUNC_21 ("select");
  FUNC_4 (VAR_9);
  return 1;
     }
     if (FUNC_0(VAR_9, &VAR_37)) {
  VAR_24 = FUNC_3 (VAR_9, ((void*)0), ((void*)0));
  FUNC_4 (VAR_9);
  if (VAR_24 < 0) {
      FUNC_21 ("accept");
      return 1;
  }
  break;
     }







     if (FUNC_0(VAR_8, &VAR_37)) {
  FUNC_22 ("socket closed");
  FUNC_4 (VAR_9);
  VAR_24 = -1;
  break;
     }
 }
    } else {
 if (FUNC_11 (VAR_8, "0", 2) != 2) {
     FUNC_21 ("write");
     return 1;
 }
 VAR_24 = -1;
    }

    if ((*VAR_15)(VAR_8, VAR_30, VAR_32, VAR_10,
       VAR_12, VAR_11,
       VAR_14, VAR_13)) {
 FUNC_4 (VAR_24);
 return 1;
    }

    VAR_36 = FUNC_10 (VAR_8, &VAR_28, 1);
    if (VAR_36 < 0) {
 FUNC_21 ("read");
 FUNC_4 (VAR_24);
 return 1;
    } else if (VAR_36 == 0) {
 FUNC_22 ("unexpected EOF from %s", VAR_10);
 FUNC_4 (VAR_24);
 return 1;
    }
    if (VAR_28 != 0) {

 FUNC_22 ("Error from rshd at %s:", VAR_10);

 while ((VAR_36 = FUNC_13 (VAR_8, VAR_25, sizeof(VAR_25))) > 0)
     FUNC_23 (VAR_5, VAR_25, VAR_36);
        FUNC_23 (VAR_5,"\n",1);
 FUNC_4 (VAR_24);
 return 1;
    }

    if (VAR_7) {
 int VAR_38 = 1;
 if (FUNC_16(VAR_8, VAR_3, VAR_4, (void *)&VAR_38, sizeof(VAR_38)) < 0)
     FUNC_21("setsockopt remote");
 if (VAR_24 != -1 &&
     FUNC_16(VAR_24, VAR_3, VAR_4,
         (void *)&VAR_38, sizeof(VAR_38)) < 0)
     FUNC_21("setsockopt stderr");
    }

    return FUNC_14 (VAR_8, VAR_24);
}

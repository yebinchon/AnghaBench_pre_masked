
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct pollfd {int fd; int events; int revents; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; struct sockaddr const* ai_addr; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
typedef int sname ;
typedef int hname ;
typedef int error ;
typedef int bname ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 struct addrinfo* VAR_16 ;
 int FUNC_1 (int,struct sockaddr const*,int) ;
 int VAR_17 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct pollfd*,int,int) ;
 scalar_t__ FUNC_4 (struct sockaddr const*,int,char*,int,char*,int,int) ;
 int FUNC_5 (int,int ,int ,int*,int*) ;
 int FUNC_6 (struct timeval*,int *) ;
 scalar_t__ VAR_18 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_10 (char*,char*,...) ;

int
FUNC_11(int VAR_19, const struct sockaddr *VAR_20, socklen_t VAR_21)
{
 int VAR_22, VAR_23, VAR_24, VAR_25;
 socklen_t VAR_26;
 struct timeval VAR_27, VAR_28, VAR_29;
 struct pollfd VAR_30[1];
 char VAR_31[VAR_7];
 char VAR_32[VAR_8];

 FUNC_7(VAR_19);
 if (FUNC_4(VAR_20, VAR_21,
     VAR_31, sizeof(VAR_31), VAR_32, sizeof(VAR_32),
     VAR_9 | VAR_10) != 0) {
  FUNC_8(VAR_31, "?", sizeof(VAR_31));
  FUNC_8(VAR_32, "?", sizeof(VAR_32));
 }

 if (VAR_16 != ((void*)0)) {
  struct addrinfo *VAR_33;

  for (VAR_33 = VAR_16; VAR_33 != ((void*)0); VAR_33 = VAR_33->ai_next) {
   if (VAR_33->ai_family == VAR_20->sa_family)
    break;
  }
  if (VAR_33 == ((void*)0))
   VAR_33 = VAR_16;
  if (FUNC_0(VAR_19, VAR_33->ai_addr, VAR_33->ai_addrlen) == -1) {
   char VAR_34[VAR_7];
   int VAR_35;

   VAR_35 = VAR_17;
   if (FUNC_4(VAR_33->ai_addr, VAR_33->ai_addrlen,
       VAR_34, sizeof(VAR_34), ((void*)0), 0, VAR_9) != 0)
    FUNC_8(VAR_34, "?", sizeof(VAR_34));
   VAR_17 = VAR_35;
   FUNC_10("Can't bind to `%s'", VAR_34);
   return -1;
  }
 }


 if ((VAR_22 = FUNC_2(VAR_19, VAR_4, 0)) == -1) {
  FUNC_10("Can't %s socket flags for connect to `%s:%s'",
      "save", VAR_31, VAR_32);
  return -1;
 }

 if (FUNC_2(VAR_19, VAR_5, VAR_22 | VAR_11) == -1) {
  FUNC_10("Can't set socket non-blocking for connect to `%s:%s'",
      VAR_31, VAR_32);
  return -1;
 }



 VAR_30[0].fd = VAR_19;
 VAR_30[0].events = VAR_12|VAR_13;

 if (VAR_18 > 0) {
  (void)FUNC_6(&VAR_27, ((void*)0));
  VAR_27.tv_sec += VAR_18;
 }

 VAR_23 = FUNC_1(VAR_19, VAR_20, VAR_21);
 if (VAR_23 == -1) {
  if (VAR_17 != VAR_1) {
 connecterror:
   FUNC_10("Can't connect to `%s:%s'", VAR_31, VAR_32);
   return -1;
  }


  do {
   if (VAR_18 > 0) {
    (void)FUNC_6(&VAR_28, ((void*)0));
    FUNC_9(&VAR_27, &VAR_28, &VAR_29);
    VAR_24 = VAR_29.tv_sec * 1000 + VAR_29.tv_usec/1000;
    if (VAR_24 < 0)
     VAR_24 = 0;
   } else {
    VAR_24 = VAR_6;
   }
   VAR_30[0].revents = 0;
   VAR_23 = FUNC_3(VAR_30, 1, VAR_24);

  } while (VAR_23 == -1 && VAR_17 == VAR_2);

  if (VAR_23 == 0) {
   VAR_17 = VAR_3;
   goto connecterror;
  }

  if (VAR_23 == -1) {
   goto connecterror;
  } else if (VAR_30[0].revents & (VAR_12|VAR_13)) {
   VAR_26 = sizeof(VAR_25);
   if (FUNC_5(VAR_19, VAR_14, VAR_15,
       &VAR_25, &VAR_26) == -1) {

    goto connecterror;
   } else if (VAR_25 != 0) {
    VAR_17 = VAR_25;
    goto connecterror;
   }
  } else {
   VAR_17 = VAR_0;
   goto connecterror;
  }
 }

 if (FUNC_2(VAR_19, VAR_5, VAR_22) == -1) {

  FUNC_10("Can't %s socket flags for connect to `%s:%s'",
      "restore", VAR_31, VAR_32);
  return -1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thetime ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct sockaddr_in {int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct servent {int s_port; } ;
typedef int socklen_t ;
typedef int from ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_7 (int,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_7 ;
 struct servent* FUNC_10 (char*,char*) ;
 unsigned long FUNC_11 (unsigned long) ;

int
FUNC_12(struct sockaddr_in *VAR_8, struct timeval *VAR_9,
    struct timeval *VAR_10)
{
 int VAR_11;
 fd_set VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 struct sockaddr_in VAR_15;
 socklen_t VAR_16;
 int VAR_17;
 struct servent *VAR_18;

 if (VAR_10 == ((void*)0)) {
  VAR_17 = VAR_5;
 } else {
  VAR_17 = VAR_4;
 }
 VAR_11 = FUNC_8(VAR_0, VAR_17, 0);
 if (VAR_11 < 0) {
  return(-1);
 }
 VAR_8->sin_family = VAR_0;


 if ((VAR_18 = FUNC_10("time", "tcp")) == ((void*)0)) {
  return(-1);
 }

 VAR_8->sin_port = VAR_18->s_port;

 if (VAR_17 == VAR_4) {
  VAR_13 = FUNC_7(VAR_11, (char *)&VAR_14, sizeof(VAR_14), 0,
        (struct sockaddr *)VAR_8, sizeof(*VAR_8));
  if (VAR_13 < 0) {
   FUNC_9(VAR_11);
   return(-1);
  }
  do {
   FUNC_1(&VAR_12);
   FUNC_0(VAR_11, &VAR_12);
   VAR_13 = FUNC_6(FUNC_5(), &VAR_12,
         (fd_set *)((void*)0), (fd_set *)((void*)0), VAR_10);
  } while (VAR_13 < 0 && VAR_7 == VAR_1);
  if (VAR_13 <= 0) {
   if (VAR_13 == 0) {
    VAR_7 = VAR_3;
   }
   FUNC_9(VAR_11);
   return(-1);
  }
  VAR_16 = sizeof(VAR_15);
  VAR_13 = FUNC_4(VAR_11, (char *)&VAR_14, sizeof(VAR_14), 0,
          (struct sockaddr *)&VAR_15, &VAR_16);
  FUNC_9(VAR_11);
  if (VAR_13 < 0) {
   return(-1);
  }
 } else {
  if (FUNC_2(VAR_11, (struct sockaddr *)VAR_8, sizeof(*VAR_8)) < 0) {
   FUNC_9(VAR_11);
   return(-1);
  }
  VAR_13 = FUNC_3(VAR_11, (char *)&VAR_14, sizeof(VAR_14));
  FUNC_9(VAR_11);
  if (VAR_13 < 0) {
   return(-1);
  }
 }
 if (VAR_13 != sizeof(VAR_14)) {
  VAR_7 = VAR_2;
  return(-1);
 }
 VAR_14 = FUNC_11(VAR_14);
 VAR_9->tv_sec = VAR_14 - VAR_6;
 VAR_9->tv_usec = 0;
 return(0);
}

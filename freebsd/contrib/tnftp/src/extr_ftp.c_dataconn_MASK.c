
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tos ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct sockinet {scalar_t__ su_family; int si_su; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int fd; int events; } ;
typedef int socklen_t ;
struct TYPE_2__ {int su_len; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,struct sockaddr*,int *) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int,int ,int) ;
 int * FUNC_4 (int,char const*) ;
 int FUNC_5 (struct pollfd*,int,int) ;
 int FUNC_6 (struct timeval*,int *) ;
 TYPE_1__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int,int ,int ,void*,int) ;
 int FUNC_8 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

FILE *
FUNC_11(const char *VAR_14)
{
 struct sockinet VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 struct timeval VAR_20, VAR_21, VAR_22;
 struct pollfd VAR_23[1];
 socklen_t VAR_24;

 if (VAR_12)
  return (FUNC_4(VAR_9, VAR_14));



 if ((VAR_17 = FUNC_3(VAR_9, VAR_2, 0)) == -1)
  goto dataconn_failed;
 if (FUNC_3(VAR_9, VAR_3, VAR_17 | VAR_7) == -1)
  goto dataconn_failed;




 VAR_23[0].fd = VAR_9;
 VAR_23[0].events = VAR_8;
 (void)FUNC_6(&VAR_20, ((void*)0));
 VAR_20.tv_sec += (VAR_13 > 0) ? VAR_13: 60;

 do {
  (void)FUNC_6(&VAR_21, ((void*)0));
  FUNC_8(&VAR_20, &VAR_21, &VAR_22);
  VAR_19 = VAR_22.tv_sec * 1000 + VAR_22.tv_usec/1000;
  if (VAR_19 < 0)
   VAR_19 = 0;
  VAR_18 = FUNC_5(VAR_23, 1, VAR_19);
 } while (VAR_18 == -1 && VAR_10 == VAR_1);
 if (VAR_18 == -1) {
  FUNC_9("Can't poll waiting before accept");
  goto dataconn_failed;
 }
 if (VAR_18 == 0) {
  FUNC_10("Poll timeout waiting before accept");
  goto dataconn_failed;
 }


 VAR_24 = VAR_11.su_len;
 do {
  VAR_16 = FUNC_1(VAR_9, (struct sockaddr *) &VAR_15.si_su, &VAR_24);
 } while (VAR_16 == -1 && VAR_10 == VAR_1);
 if (VAR_16 == -1) {
  FUNC_9("Can't accept data connection");
  goto dataconn_failed;
 }

 (void)FUNC_2(VAR_9);
 VAR_9 = VAR_16;
 if (FUNC_3(VAR_9, VAR_3, VAR_17) == -1)
  goto dataconn_failed;
 return (FUNC_4(VAR_9, VAR_14));

 dataconn_failed:
 (void)FUNC_2(VAR_9);
 VAR_9 = -1;
 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int server ;
typedef int fd_set ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,struct sockaddr_in*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int,struct sockaddr_in*,int*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int,char*,int) ;
 scalar_t__ FUNC_14 (int,int *,int ,int ,struct timeval*) ;
 int FUNC_15 (int ,int ,int ) ;

FUNC_16()
{
 int VAR_4, VAR_5;
 struct sockaddr_in VAR_6;
 int VAR_7;
 char VAR_8[1024];
 int VAR_9;
 fd_set VAR_10;
 struct timeval VAR_11;


 VAR_4 = FUNC_15(VAR_0, VAR_2, 0);
 if (VAR_4 < 0) {
  FUNC_11("opening stream socket");
  FUNC_7(1);
 }

 VAR_6.sin_family = VAR_0;
 VAR_6.sin_addr.s_addr = VAR_1;
 VAR_6.sin_port = 0;
 if (FUNC_4(VAR_4, &VAR_6, sizeof(VAR_6))) {
  FUNC_11("binding stream socket");
  FUNC_7(1);
 }

 VAR_5 = sizeof(VAR_6);
 if (FUNC_8(VAR_4, &VAR_6, &VAR_5)) {
  FUNC_11("getting socket name");
  FUNC_7(1);
 }
 FUNC_12("Socket has port #%d\en", FUNC_10(VAR_6.sin_port));


 FUNC_9(VAR_4, 5);
 do {
  FUNC_2(&VAR_10);
  FUNC_1(VAR_4, &VAR_10);
  VAR_11.tv_sec = 5;
  if (FUNC_14(VAR_4 + 1, &VAR_10, 0, 0, &VAR_11) < 0) {
   FUNC_11("select");
   continue;
  }
  if (FUNC_0(VAR_4, &VAR_10)) {
   VAR_7 = FUNC_3(VAR_4, (struct sockaddr *)0, (int *)0);
   if (VAR_7 == -1)
    FUNC_11("accept");
   else do {
    FUNC_5(VAR_8, sizeof(VAR_8));
    if ((VAR_9 = FUNC_13(VAR_7, VAR_8, 1024)) < 0)
     FUNC_11("reading stream message");
    else if (VAR_9 == 0)
     FUNC_12("Ending connection\en");
    else
     FUNC_12("-->%s\en", VAR_8);
   } while (VAR_9 > 0);
   FUNC_6(VAR_7);
  } else
   FUNC_12("Do something else\en");
 } while (VAR_3);
}

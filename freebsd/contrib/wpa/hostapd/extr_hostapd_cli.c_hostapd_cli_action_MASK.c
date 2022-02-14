
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ctrl {int dummy; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int fd_set ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct wpa_ctrl*,int ,int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_8 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_9 (struct wpa_ctrl*,char*,int,char*,size_t*,int ) ;

__attribute__((used)) static void FUNC_10(struct wpa_ctrl *VAR_5)
{
 fd_set VAR_6;
 int VAR_7, VAR_8;
 struct timeval VAR_9;
 char VAR_10[256];
 size_t VAR_11;

 VAR_7 = FUNC_8(VAR_5);

 while (!VAR_3) {
  FUNC_2(&VAR_6);
  FUNC_1(VAR_7, &VAR_6);
  VAR_9.tv_sec = VAR_4;
  VAR_9.tv_usec = 0;
  VAR_8 = FUNC_7(VAR_7 + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_9);
  if (VAR_8 < 0 && VAR_1 != VAR_0) {
   FUNC_5("select");
   break;
  }

  if (FUNC_0(VAR_7, &VAR_6))
   FUNC_3(VAR_5, 0, 1);
  else {
   VAR_11 = sizeof(VAR_10) - 1;
   if (FUNC_9(VAR_5, "PING", 4, VAR_10, &VAR_11,
          VAR_2) < 0 ||
       VAR_11 < 4 || FUNC_4(VAR_10, "PONG", 4) != 0) {
    FUNC_6("hostapd did not reply to PING "
           "command - exiting\n");
    break;
   }
  }
 }
}

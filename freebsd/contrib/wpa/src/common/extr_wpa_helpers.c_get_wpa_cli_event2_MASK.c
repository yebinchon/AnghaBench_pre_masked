
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct wpa_ctrl {int dummy; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int,int *,int *,int *,struct timeval*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char const*,int ) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (struct wpa_ctrl*) ;
 scalar_t__ FUNC_10 (struct wpa_ctrl*,char*,size_t*) ;

int FUNC_11(struct wpa_ctrl *VAR_2,
         const char *VAR_3, const char *VAR_4,
         char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 fd_set VAR_9;
 char *VAR_10;
 struct timeval VAR_11;
 time_t VAR_12, VAR_13;

 FUNC_2("Waiting for wpa_cli event %s\n", VAR_3);
 VAR_7 = FUNC_9(VAR_2);
 if (VAR_7 < 0)
  return -1;

 FUNC_8(&VAR_12);
 while (1) {
  size_t VAR_14;

  FUNC_1(&VAR_9);
  FUNC_0(VAR_7, &VAR_9);
  VAR_11.tv_sec = VAR_0;
  VAR_11.tv_usec = 0;
  VAR_8 = FUNC_3(VAR_7 + 1, &VAR_9, ((void*)0), ((void*)0), &VAR_11);
  if (VAR_8 == 0) {
   FUNC_2("Timeout on waiting for event %s\n", VAR_3);
   return -1;
  }
  if (VAR_8 < 0) {
   FUNC_2("select: %s\n", FUNC_5(VAR_1));
   return -1;
  }
  VAR_14 = VAR_6;
  if (FUNC_10(VAR_2, VAR_5, &VAR_14) < 0) {
   FUNC_2("Failure while waiting for event %s\n", VAR_3);
   return -1;
  }
  if (VAR_14 == VAR_6)
   VAR_14--;
  VAR_5[VAR_14] = '\0';

  VAR_10 = FUNC_4(VAR_5, '>');
  if (VAR_10 &&
      (FUNC_7(VAR_10 + 1, VAR_3, FUNC_6(VAR_3)) == 0 ||
       (VAR_4 &&
        FUNC_7(VAR_10 + 1, VAR_4, FUNC_6(VAR_4)) == 0)))
   return 0;

  FUNC_8(&VAR_13);
  if ((int) (VAR_13 - VAR_12) > VAR_0) {
   FUNC_2("Timeout on waiting for event %s\n", VAR_3);
   return -1;
  }
 }
}

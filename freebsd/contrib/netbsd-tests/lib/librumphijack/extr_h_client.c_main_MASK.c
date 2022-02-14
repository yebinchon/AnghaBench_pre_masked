
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct pollfd {int fd; scalar_t__ revents; void* events; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (struct pollfd*,int,int ) ;
 int FUNC_11 (int,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_11, char *VAR_12[])
{

 if (VAR_11 != 2) {
  FUNC_6(1, "need testname as param");
 }

 if (FUNC_12(VAR_12[1], "select_timeout") == 0) {
  fd_set VAR_13;
  struct timeval VAR_14;
  int VAR_15[2];
  int VAR_16;

  VAR_14.tv_sec = 0;
  VAR_14.tv_usec = 1;

  if (FUNC_9(VAR_15) == -1)
   FUNC_5(VAR_2, "pipe");
  FUNC_2(&VAR_13);
  FUNC_1(VAR_15[0], &VAR_13);

  VAR_16 = FUNC_11(VAR_15[0]+1, &VAR_13, ((void*)0), ((void*)0), &VAR_14);
  if (VAR_16 == -1)
   FUNC_5(VAR_2, "select");
  if (VAR_16 != 0)
   FUNC_6(VAR_2, "select succesful");

  if (FUNC_0(VAR_15[0], &VAR_13))
   FUNC_6(VAR_2, "stdin fileno is still set");
  return VAR_3;
 } else if (FUNC_12(VAR_12[1], "select_allunset") == 0) {
  fd_set VAR_17;
  struct timeval VAR_18;
  int VAR_19;

  VAR_18.tv_sec = 0;
  VAR_18.tv_usec = 1;

  FUNC_2(&VAR_17);

  VAR_19 = FUNC_11(100, &VAR_17, &VAR_17, &VAR_17, &VAR_18);
  if (VAR_19 == -1)
   FUNC_5(VAR_2, "select");
  if (VAR_19 != 0)
   FUNC_6(VAR_2, "select succesful");

  VAR_19 = FUNC_11(0, ((void*)0), ((void*)0), ((void*)0), &VAR_18);
  if (VAR_19 == -1)
   FUNC_5(VAR_2, "select2");
  if (VAR_19 != 0)
   FUNC_6(VAR_2, "select2 succesful");

  return VAR_3;
 } else if (FUNC_12(VAR_12[1], "invafd") == 0) {
  struct pollfd VAR_20[2];
  int VAR_21, VAR_22;

  VAR_21 = FUNC_8("/rump/dev/null", VAR_6);
  if (VAR_21 == -1)
   FUNC_5(VAR_2, "open");
  FUNC_3(VAR_21);

  VAR_20[0].fd = VAR_9;
  VAR_20[0].events = VAR_7;
  VAR_20[1].fd = VAR_21;
  VAR_20[1].events = VAR_7;

  if ((VAR_22 = FUNC_10(VAR_20, 2, VAR_5)) != 1)
   FUNC_6(VAR_2, "poll unexpected rv %d (%d)",
       VAR_22, VAR_10);
  if (VAR_20[1].revents != VAR_8 || VAR_20[0].revents != 0)
   FUNC_6(VAR_2, "poll unexpected revents");

  return VAR_3;
 } else if (FUNC_12(VAR_12[1], "fdoff8") == 0) {

  (void)FUNC_4(0);

  int VAR_23;

  do {
   if ((VAR_23 = FUNC_8("/dev/null", VAR_6)) == -1)
    FUNC_5(VAR_2, "open1");
  } while (VAR_23 < 7);
  VAR_23 = FUNC_8("/dev/null", VAR_6);
  if (VAR_23 != -1 || VAR_10 != VAR_0)
   FUNC_6(VAR_2, "unexpected fd8 %d %d", VAR_23, VAR_10);
  if (FUNC_7(0, VAR_4) != 7)
   FUNC_6(VAR_2, "fd leak?");
  if ((VAR_23 = FUNC_8("/rump/dev/null", VAR_6)) != 8)
   FUNC_6(VAR_2, "rump open %d %d", VAR_23, VAR_10);
  return VAR_3;
 } else {
  return VAR_1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int,void*,int) ;
 int FUNC_6 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static char *
FUNC_7(char *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
  fd_set VAR_8;
  struct timeval VAR_9;
  time_t VAR_10, VAR_11;
  int VAR_12=0, VAR_13=0;

  if (!VAR_4 || VAR_5 < 0 || VAR_6 < 0)
    return 0;

  VAR_4[0] = '\0';
  if (VAR_5 == 0)
    return VAR_4;

  VAR_10 = FUNC_2(((void*)0));
  while (VAR_4[VAR_13] != '\n' && VAR_13 < VAR_5-1) {
    VAR_4[VAR_13+1] = '\0';


    VAR_12 = FUNC_5(VAR_6, (void *)(VAR_4+VAR_13), 1);
    if (VAR_12 == 1) {
      if (VAR_4[VAR_13] == 0) {
        VAR_12 = 0;
        break;
      }
      VAR_13++;
      continue;
    } else if (VAR_12 == 0) {
      break;
    } else if (VAR_12 < 0 && VAR_3 != VAR_0 && VAR_3 != VAR_1) {
      FUNC_4(VAR_2, "fgets_timed read error: %m");
      break;
    }

    VAR_9.tv_usec = 0;
    VAR_11 = FUNC_2(((void*)0)) - VAR_10;
    if (VAR_7 <= 0)
      VAR_9.tv_sec = 0;
    else if (VAR_11 < VAR_7)
      VAR_9.tv_sec = VAR_7 - VAR_11;
    else {

      FUNC_4(VAR_2, "executable map read timed out (> %d secs)", VAR_7);
      VAR_12 = -1;
      break;
    }

    FUNC_1(&VAR_8);
    FUNC_0(VAR_6, &VAR_8);

    VAR_12 = FUNC_6(VAR_6+1, &VAR_8, ((void*)0), ((void*)0), &VAR_9);
    if (VAR_12 < 0) {

      FUNC_4(VAR_2, "fgets_timed select error: %m");
      if (VAR_3 == VAR_1)
        continue;
      VAR_12 = -1;
      break;
    } else if (VAR_12 == 0) {

      FUNC_4(VAR_2, "executable map read timed out (> %d secs)", VAR_7);
      VAR_12 = -1;
      break;
    }
  }

  if (VAR_12 > 0)
    return VAR_4;

  FUNC_3(VAR_6);
  return (VAR_12 == 0 ? VAR_4 : 0);
}

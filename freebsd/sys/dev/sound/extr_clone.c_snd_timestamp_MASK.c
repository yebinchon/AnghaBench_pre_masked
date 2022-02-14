
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int tv_nsec; int tv_sec; } ;






 int FUNC_0 (struct timeval*,struct timespec*) ;
 int FUNC_1 (struct timespec*) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (struct timespec*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct timespec *VAR_2)
{
 struct timeval VAR_3;

 switch (VAR_0) {
 case 129:
  VAR_2->tv_sec = VAR_1;
  VAR_2->tv_nsec = 0;
  break;
 case 131:
  FUNC_1(VAR_2);
  break;
 case 128:
  FUNC_2(&VAR_3);
  FUNC_0(&VAR_3, VAR_2);
  break;
 case 130:
  FUNC_3(VAR_2);
  break;
 default:
  VAR_0 = 131;
  FUNC_1(VAR_2);
  break;
 }
}

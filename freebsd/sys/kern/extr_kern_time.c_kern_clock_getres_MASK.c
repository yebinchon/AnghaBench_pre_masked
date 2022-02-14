
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct thread {int dummy; } ;
typedef int clockid_t ;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 () ;

int
FUNC_3(struct thread *VAR_2, clockid_t VAR_3, struct timespec *VAR_4)
{

 VAR_4->tv_sec = 0;
 switch (VAR_3) {
 case 136:
 case 135:
 case 134:
 case 141:
 case 140:
 case 139:
 case 131:
 case 130:
 case 129:





  VAR_4->tv_nsec = 1000000000 / FUNC_2() + 1;
  break;
 case 128:
 case 137:

  VAR_4->tv_nsec = FUNC_1(1000000000, VAR_1);
  break;
 case 133:
  VAR_4->tv_sec = 1;
  VAR_4->tv_nsec = 0;
  break;
 case 132:
 case 138:
 cputime:

  VAR_4->tv_nsec = 1000000 / FUNC_0();
  if (VAR_4->tv_nsec == 0)
   VAR_4->tv_nsec = 1000;
  break;
 default:
  if ((int)VAR_3 < 0)
   goto cputime;
  return (VAR_0);
 }
 return (0);
}

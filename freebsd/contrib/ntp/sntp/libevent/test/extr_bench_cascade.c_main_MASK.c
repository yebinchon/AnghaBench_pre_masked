
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; int tv_usec; } ;
struct rlimit {int rlim_cur; int rlim_max; } ;
typedef int WSADATA ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 struct timeval* FUNC_8 (int) ;
 int FUNC_9 (int ,struct rlimit*) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_10(int VAR_4, char **VAR_5)
{



 int VAR_6, VAR_7;
 struct timeval *VAR_8;

 int VAR_9 = 100;





 while ((VAR_7 = FUNC_6(VAR_4, VAR_5, "n:")) != -1) {
  switch (VAR_7) {
  case 'n':
   VAR_9 = FUNC_2(VAR_1);
   break;
  default:
   FUNC_5(VAR_2, "Illegal argument \"%c\"\n", VAR_7);
   FUNC_4(1);
  }
 }
 FUNC_3();

 for (VAR_6 = 0; VAR_6 < 25; VAR_6++) {
  VAR_8 = FUNC_8(VAR_9);
  if (VAR_8 == ((void*)0))
   FUNC_4(1);
  FUNC_5(VAR_3, "%d\n",
   VAR_8->tv_sec * 1000000L + VAR_8->tv_usec);
 }





 FUNC_4(0);
}

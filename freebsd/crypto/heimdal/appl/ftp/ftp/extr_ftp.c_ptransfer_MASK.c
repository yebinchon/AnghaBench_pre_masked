
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (char*,long,char*,float,int,float,char*) ;
 scalar_t__ VAR_0 ;

void
FUNC_1 (char *VAR_1, long int VAR_2,
    struct timeval * VAR_3, struct timeval * VAR_4)
{
    struct timeval VAR_5;
    float VAR_6;
    float VAR_7;
    int VAR_8;
    char *VAR_9;

    if (VAR_0) {
 VAR_5.tv_sec = VAR_4->tv_sec - VAR_3->tv_sec;
 VAR_5.tv_usec = VAR_4->tv_usec - VAR_3->tv_usec;
 if (VAR_5.tv_usec < 0) {
     VAR_5.tv_sec--;
     VAR_5.tv_usec += 1000000;
 }
 VAR_6 = VAR_5.tv_sec + (VAR_5.tv_usec / 1000000.);
 VAR_7 = VAR_2 / (VAR_6 ? VAR_6 : 1);
 if (VAR_7 >= 1048576) {
     VAR_7 /= 1048576;
     VAR_9 = "M";
     VAR_8 = 2;
 } else if (VAR_7 >= 1024) {
     VAR_7 /= 1024;
     VAR_9 = "k";
     VAR_8 = 1;
 } else {
     VAR_9 = "";
     VAR_8 = 0;
 }

 FUNC_0 ("%ld bytes %s in %.3g seconds (%.*f %sbyte/s)\n",
  VAR_2, VAR_1, VAR_6, VAR_8, VAR_7, VAR_9);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct timezone {int dummy; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct timeval*,struct timezone*) ;
 struct timeval VAR_1 ;
 int FUNC_4 (char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 char* VAR_2 ;
 int FUNC_5 (unsigned int,struct timeval*) ;
 int FUNC_6 (int,int*,int) ;
 int VAR_3 ;

int
FUNC_7(
 int VAR_4
 )
{
 u_char VAR_5;
 int VAR_6;
 struct timeval VAR_7;
 struct timeval VAR_8;

 while ((VAR_6 = FUNC_6(VAR_4, &VAR_5, sizeof(char))) > 0) {
  (void) FUNC_3(&VAR_7, (struct timezone *)0);
  if (VAR_0)
      FUNC_5((unsigned int)VAR_5, &VAR_7);
  else {
   VAR_8.tv_sec = VAR_7.tv_sec - VAR_1.tv_sec;
   VAR_8.tv_usec = VAR_7.tv_usec - VAR_1.tv_usec;
   if (VAR_8.tv_usec < 0) {
    VAR_8.tv_sec--;
    VAR_8.tv_usec += 1000000;
   }
   (void) FUNC_4("%02x\t%lu.%06lu\t%lu.%06lu\n",
          VAR_5, VAR_7.tv_sec, VAR_7.tv_usec, VAR_8.tv_sec,
          VAR_8.tv_usec);
   VAR_1 = VAR_7;
  }
 }

 if (VAR_6 == 0) {
  (void) FUNC_2(VAR_3, "%s: zero returned on read\n", VAR_2);
  FUNC_1(1);
 } else
     FUNC_0("read()", "", "");
}

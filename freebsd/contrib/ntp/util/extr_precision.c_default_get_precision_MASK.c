
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct timeval*,struct timezone*) ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (char*,long,...) ;

int
FUNC_3(void)
{
 struct timeval VAR_6;
 struct timezone VAR_7;



 long VAR_8;
 int VAR_9;
 long VAR_10;
 long VAR_11;
 long VAR_12;

 VAR_12 = 0;
 VAR_11 = VAR_2;





 FUNC_0(&VAR_6, &VAR_7);

 VAR_8 = VAR_6.tv_usec;
 for (VAR_9 = 0; VAR_9 < VAR_3 && VAR_12 < VAR_1;) {





  FUNC_0(&VAR_6, &VAR_7);

  VAR_10 = VAR_6.tv_usec - VAR_8;
  VAR_8 = VAR_6.tv_usec;
  if (VAR_10 < 0)
      VAR_10 += VAR_0;
  VAR_12 += VAR_10;
  if (VAR_10 > VAR_4) {
   VAR_9++;
   if (VAR_10 < VAR_11)
       VAR_11 = VAR_10;
  }
 }
 FUNC_2("precision  = %ld usec after %d loop%s\n",
        VAR_11, VAR_9, (VAR_9 == 1) ? "" : "s");
 if (VAR_12 >= VAR_1) {
  FUNC_2("     (Boy this machine is fast ! usec was %ld)\n",
         VAR_12);
  VAR_11 = VAR_4;
 }
 VAR_10 = VAR_1;
 for (VAR_9 = 0; VAR_10 > VAR_11; VAR_9--)
     VAR_10 >>= 1;
 return (VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int pptptime_t ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static pptptime_t
FUNC_1(void)
{
 struct timeval VAR_1;
 pptptime_t VAR_2;

 FUNC_0(&VAR_1);
 VAR_2 = (pptptime_t)VAR_1.tv_sec * VAR_0;
 VAR_2 += VAR_1.tv_usec / (1000000 / VAR_0);
 return(VAR_2);
}

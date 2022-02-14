
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (long) ;
 int FUNC_3 () ;

void
FUNC_4()
{



 long VAR_1;
 struct timeval VAR_2;

 VAR_1 = (long) VAR_0;
 if (FUNC_0(&VAR_2, ((void*)0)) >= 0)
  VAR_1 += VAR_2.tv_sec + VAR_2.tv_usec;




 (void) FUNC_1((unsigned int) VAR_1);


}

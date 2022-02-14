
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef unsigned int isc_stdtime_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct timeval*,int *) ;

void
FUNC_5(isc_stdtime_t *VAR_1) {
 struct timeval VAR_2;






 FUNC_1(VAR_1 != ((void*)0));

 FUNC_2(FUNC_4(&VAR_2, ((void*)0)) != -1);





 FUNC_0(VAR_2.tv_usec >= 0 && VAR_2.tv_usec < VAR_0);


 *VAR_1 = (unsigned int)VAR_2.tv_sec;
}

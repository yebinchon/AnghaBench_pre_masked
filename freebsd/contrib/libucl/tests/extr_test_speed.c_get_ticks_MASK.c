
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 () ;

__attribute__((used)) static double
FUNC_2 (void)
{
 double VAR_1;




 struct timespec VAR_2;
 FUNC_0 (VAR_0, &VAR_2);

 VAR_1 = (double)VAR_2.tv_sec + VAR_2.tv_nsec / 1000000000.;


 return VAR_1;
}

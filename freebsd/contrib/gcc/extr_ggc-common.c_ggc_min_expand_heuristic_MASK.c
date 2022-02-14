
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,int) ;
 double FUNC_1 (double) ;
 double FUNC_2 () ;

int
FUNC_3 (void)
{
  double VAR_0 = FUNC_2();


  VAR_0 = FUNC_1 (VAR_0);




  VAR_0 /= 1024*1024*1024;
  VAR_0 *= 70;

  VAR_0 = FUNC_0 (VAR_0, 120);
  VAR_0 += 30;

  return VAR_0;
}

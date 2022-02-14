
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; } ;
typedef int rlim_t ;


 double FUNC_0 (double,int) ;
 double FUNC_1 (double,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 () ;
 double FUNC_4 (double) ;
 scalar_t__ FUNC_5 () ;
 double FUNC_6 () ;

int

FUNC_7 (bool VAR_2)
{
  double VAR_3 = FUNC_6();
  double VAR_4 = FUNC_4 (VAR_3 * 2);

  VAR_3 /= 1024;
  VAR_4 /= 1024;



  VAR_3 /= 8;





  VAR_3 /= (double)FUNC_5() / (2 - VAR_2);
  VAR_4 = FUNC_0 (0, VAR_4 - 16 * 1024);
  VAR_4 = (VAR_4 * 100) / (110 + FUNC_3());
  VAR_3 = FUNC_1 (VAR_3, VAR_4);

  VAR_3 = FUNC_0 (VAR_3, 4 * 1024);
  VAR_3 = FUNC_1 (VAR_3, 128 * 1024);

  return VAR_3;
}

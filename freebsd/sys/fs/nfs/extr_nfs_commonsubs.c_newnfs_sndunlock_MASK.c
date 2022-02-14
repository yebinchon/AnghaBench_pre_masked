
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int caddr_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(int *VAR_2)
{

 FUNC_0();
 if ((*VAR_2 & VAR_0) == 0)
  FUNC_2("nfs sndunlock");
 *VAR_2 &= ~VAR_0;
 if (*VAR_2 & VAR_1) {
  *VAR_2 &= ~VAR_1;
  FUNC_3((caddr_t)VAR_2);
 }
 FUNC_1();
}

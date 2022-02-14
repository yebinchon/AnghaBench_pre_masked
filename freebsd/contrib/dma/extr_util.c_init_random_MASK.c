
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int seed ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 uintptr_t FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,unsigned int*,int) ;
 int FUNC_4 (unsigned int) ;
 uintptr_t FUNC_5 (int *) ;

void
FUNC_6(void)
{
 unsigned int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2("/dev/urandom", VAR_0);
 if (VAR_2 == -1)
  VAR_2 = FUNC_2("/dev/random", VAR_0);

 if (!(VAR_2 != -1 && FUNC_3(VAR_2, &VAR_1, sizeof(VAR_1)) == sizeof(VAR_1)))
  VAR_1 = (FUNC_5(((void*)0)) ^ FUNC_1()) + (uintptr_t)&VAR_1;

 FUNC_4(VAR_1);

 if (VAR_2 != -1)
  FUNC_0(VAR_2);
}

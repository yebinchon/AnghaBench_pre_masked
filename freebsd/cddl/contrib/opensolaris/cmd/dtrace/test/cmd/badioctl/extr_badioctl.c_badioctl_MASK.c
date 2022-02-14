
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int ioc ;
typedef scalar_t__ hrtime_t ;
typedef unsigned int* caddr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,unsigned int,unsigned int*) ;
 int FUNC_5 (int ,int ) ;
 unsigned int* FUNC_6 (int ,int,int,int,int,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int,unsigned int*,int) ;
 int FUNC_9 (int ) ;

void
FUNC_10(pid_t VAR_11)
{
 int VAR_12 = -1, VAR_13, VAR_14 = FUNC_9(VAR_9);
 int VAR_15 = 0, VAR_16;
 caddr_t VAR_17;
 hrtime_t VAR_18, VAR_19 = 0, VAR_20;

 if ((VAR_13 = FUNC_7("/dev/random", VAR_6)) == -1)
  FUNC_2("couldn't open /dev/random");

 if ((VAR_17 = FUNC_6(0, VAR_14, VAR_7 | VAR_8,
     VAR_3 | VAR_4, -1, 0)) == (caddr_t)-1)
  FUNC_2("mmap");

 for (;;) {
  unsigned int VAR_21;

  if ((VAR_18 = FUNC_3()) - VAR_19 > VAR_5) {
   if (FUNC_5(VAR_11, 0) == -1 && VAR_10 == VAR_2) {




    FUNC_1(0);
   }




   if (VAR_12 != -1)
    FUNC_0(VAR_12);

   VAR_12 = FUNC_7("/devices/pseudo/dtrace@0:dtrace", VAR_6);

   if (VAR_12 == -1)
    FUNC_2("couldn't open DTrace pseudo device");

   VAR_19 = VAR_18;
  }


  if ((VAR_15++ % 1000) == 0) {



   FUNC_8(VAR_13, VAR_17, VAR_14);
  }

  FUNC_8(VAR_13, &VAR_21, sizeof (VAR_21));
  VAR_21 %= VAR_1;
  VAR_21++;
  FUNC_4(VAR_12, VAR_0 | VAR_21, VAR_17);
 }
}

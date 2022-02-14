
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,void*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(void)
{




 if (VAR_11 - VAR_12 != 16)
  FUNC_5("startup: MIPS wait region not correct");



 if (VAR_10 - VAR_9 > 0x80)
  FUNC_5("startup: UTLB code too large");

 if (VAR_6 - VAR_5 > 0x80)
  FUNC_5("startup: Cache error code too large");

 FUNC_0(VAR_9, (void *)VAR_3,
       VAR_10 - VAR_9);
 FUNC_0(VAR_7, (void *)VAR_1,
       VAR_8 - VAR_7);

 FUNC_0(VAR_5, (void *)VAR_0,
       VAR_6 - VAR_5);




 FUNC_2();
 FUNC_1();





 FUNC_6(0);


 FUNC_4(FUNC_3() & ~VAR_2);
}

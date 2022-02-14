
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int,size_t) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int* VAR_13 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;

void
FUNC_9(void)
{
 uint64_t VAR_14;
 u_long VAR_15, VAR_16;
 int VAR_17;


 if ((VAR_12 & VAR_0) == 0)
  FUNC_4("no PAT??");


 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
  VAR_13[VAR_17] = -1;
 VAR_13[VAR_8] = 0;
 VAR_13[VAR_11] = 1;
 VAR_13[VAR_6] = 3;
 VAR_13[VAR_9] = 6;
 VAR_13[VAR_10] = 5;
 VAR_13[VAR_7] = 2;
 VAR_14 = FUNC_0(0, VAR_8) |
     FUNC_0(1, VAR_11) |
     FUNC_0(2, VAR_7) |
     FUNC_0(3, VAR_6) |
     FUNC_0(4, VAR_8) |
     FUNC_0(5, VAR_10) |
     FUNC_0(6, VAR_9) |
     FUNC_0(7, VAR_6);


 VAR_16 = FUNC_6();
 FUNC_3(VAR_16 & ~VAR_3);


 VAR_15 = FUNC_5();
 FUNC_2((VAR_15 & ~VAR_2) | VAR_1);


 FUNC_7();
 FUNC_1();


 FUNC_8(VAR_4, VAR_14);


 FUNC_7();
 FUNC_1();


 FUNC_2(VAR_15);
 FUNC_3(VAR_16);
}

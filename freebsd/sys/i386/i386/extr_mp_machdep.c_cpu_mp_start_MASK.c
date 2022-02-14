
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cpu_bsp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,char*) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;
 int VAR_13 ;
 int* VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void
FUNC_9(void)
{
 int VAR_24;


 for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++) {
  VAR_14[VAR_24] = -1;
 }


 FUNC_6(VAR_5, FUNC_1(VAR_21),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));
 FUNC_6(VAR_3, FUNC_1(VAR_19),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));
 FUNC_6(VAR_4, FUNC_1(VAR_20),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));


 FUNC_6(VAR_2, FUNC_1(VAR_18),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));


 FUNC_6(VAR_6, FUNC_1(VAR_23),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));


 FUNC_6(VAR_1, FUNC_1(VAR_22),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));


 FUNC_6(VAR_7, FUNC_1(VAR_16),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));


 FUNC_6(VAR_8, FUNC_1(VAR_17),
        VAR_10, VAR_11, FUNC_0(VAR_0, VAR_11));


 if (VAR_13 == -1) {
  VAR_13 = FUNC_3(VAR_12);
  VAR_15[VAR_13].cpu_bsp = 1;
 } else
  FUNC_2(VAR_13 == FUNC_3(VAR_12),
      ("BSP's APIC ID doesn't match boot_cpu_id"));


 FUNC_8();

 FUNC_4();


 FUNC_7();

 FUNC_5();
}

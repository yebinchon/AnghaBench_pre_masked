
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpu_bsp; } ;
struct TYPE_3__ {int (* start_all_aps ) () ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 int* VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void
FUNC_8(void)
{
 int VAR_47;


 for (VAR_47 = 0; VAR_47 < VAR_8; VAR_47++) {
  VAR_13[VAR_47] = -1;
 }


 if (VAR_43) {
  if (VAR_40) {
   FUNC_5(VAR_4, VAR_44 ?
       FUNC_0(VAR_36) :
       FUNC_0(VAR_35), VAR_9,
       VAR_10, 0);
   FUNC_5(VAR_2, VAR_44 ? FUNC_0(VAR_24) :
       FUNC_0(VAR_23), VAR_9, VAR_10, 0);
   FUNC_5(VAR_3, VAR_44 ? FUNC_0(VAR_30) :
       FUNC_0(VAR_29), VAR_9, VAR_10, 0);
  } else {
   FUNC_5(VAR_4, VAR_44 ? FUNC_0(VAR_38) :
       FUNC_0(VAR_37), VAR_9, VAR_10, 0);
   FUNC_5(VAR_2, VAR_44 ? FUNC_0(VAR_26) :
       FUNC_0(VAR_25), VAR_9, VAR_10, 0);
   FUNC_5(VAR_3, VAR_44 ? FUNC_0(VAR_32) :
       FUNC_0(VAR_31), VAR_9, VAR_10, 0);
  }
 } else {
  FUNC_5(VAR_4, VAR_44 ? FUNC_0(VAR_39) : FUNC_0(VAR_34),
      VAR_9, VAR_10, 0);
  FUNC_5(VAR_2, VAR_44 ? FUNC_0(VAR_27) : FUNC_0(VAR_22),
      VAR_9, VAR_10, 0);
  FUNC_5(VAR_3, VAR_44 ? FUNC_0(VAR_33) : FUNC_0(VAR_28),
      VAR_9, VAR_10, 0);
 }


 FUNC_5(VAR_1, VAR_44 ? FUNC_0(VAR_21) : FUNC_0(VAR_20),
     VAR_9, VAR_10, 0);


 FUNC_5(VAR_5, VAR_44 ? FUNC_0(VAR_46) :
     FUNC_0(VAR_45), VAR_9, VAR_10, 0);


 FUNC_5(VAR_0, VAR_44 ? FUNC_0(VAR_42) :
     FUNC_0(VAR_41), VAR_9, VAR_10, 0);


 FUNC_5(VAR_6, VAR_44 ? FUNC_0(VAR_16) : FUNC_0(VAR_15),
     VAR_9, VAR_10, 0);


 FUNC_5(VAR_7, VAR_44 ? FUNC_0(VAR_18) : FUNC_0(VAR_17),
     VAR_9, VAR_10, 0);


 if (VAR_12 == -1) {
  VAR_12 = FUNC_2(VAR_11);
  VAR_14[VAR_12].cpu_bsp = 1;
 } else
  FUNC_1(VAR_12 == FUNC_2(VAR_11),
      ("BSP's APIC ID doesn't match boot_cpu_id"));


 FUNC_7();

 FUNC_3();


 VAR_19.start_all_aps();

 FUNC_4();
}

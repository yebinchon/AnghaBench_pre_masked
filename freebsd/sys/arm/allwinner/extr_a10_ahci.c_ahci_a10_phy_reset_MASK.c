
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ahci_controller {int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_26 ;
 struct ahci_controller* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_27)
{
 uint32_t VAR_28, VAR_29;
 struct ahci_controller *VAR_30 = FUNC_6(VAR_27);
 FUNC_1(VAR_30->r_mem, VAR_3, 0);
 FUNC_2(100);





 FUNC_5(VAR_30->r_mem, VAR_1, VAR_15);




 FUNC_4(VAR_30->r_mem, VAR_0,
     ~VAR_12,
     VAR_11 | VAR_5 | VAR_4);




 FUNC_4(VAR_30->r_mem, VAR_1,
     ~(VAR_17 | VAR_19 | VAR_21),
     VAR_16 | VAR_18 | VAR_20);




 FUNC_5(VAR_30->r_mem, VAR_1, VAR_13 | VAR_14);






 FUNC_3(VAR_30->r_mem, VAR_1, VAR_15);




 FUNC_4(VAR_30->r_mem, VAR_0,
     ~VAR_10, VAR_9);




 FUNC_4(VAR_30->r_mem, VAR_2, ~VAR_24,
     VAR_23);

 FUNC_2(100);





 FUNC_5(VAR_30->r_mem, VAR_0, VAR_6);
 for (VAR_28 = VAR_25; VAR_28 > 0; VAR_28--) {
  VAR_29 = FUNC_0(VAR_30->r_mem, VAR_0);
  if ((VAR_29 & VAR_7) == VAR_8)
   break;
  FUNC_2(10);
 }
 if (VAR_28 == 0 && VAR_26)
  FUNC_7(VAR_27, "PHY Power Failed PHYCS0R = %#x\n", VAR_29);





 FUNC_5(VAR_30->r_mem, VAR_2, VAR_22);
 for (VAR_28 = VAR_25; VAR_28 > 0; VAR_28--) {
  VAR_29 = FUNC_0(VAR_30->r_mem, VAR_2);
  if ((VAR_29 & VAR_22) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_28 == 0 && VAR_26)
  FUNC_7(VAR_27, "PHY Cal Failed PHYCS2R %#x\n", VAR_29);




 FUNC_2(1000);




 FUNC_1(VAR_30->r_mem, VAR_3, 7);
}

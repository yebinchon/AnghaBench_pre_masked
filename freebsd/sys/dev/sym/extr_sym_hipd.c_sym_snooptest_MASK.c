
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u32 ;
typedef TYPE_1__* hcb_p ;
struct TYPE_6__ {int rv_ctest4; int hcb_ba; int cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11 (hcb_p VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26=0;

 VAR_26 |= FUNC_10 (VAR_17);
 if (VAR_26) return (VAR_26);

restart_test:




 FUNC_2 (VAR_8, (VAR_17->rv_ctest4 & VAR_5));



 VAR_23 = FUNC_5 (VAR_17, VAR_16);
 VAR_22 = 1;
 VAR_19 = 2;



 VAR_17->cache = FUNC_6(VAR_22);
 FUNC_3 (VAR_14, VAR_19);



 FUNC_3 (VAR_9, VAR_17->hcb_ba);
 FUNC_4 (VAR_23);



 for (VAR_25=0; VAR_25<VAR_7; VAR_25++)
  if (FUNC_0(VAR_12) & (VAR_3|VAR_6|VAR_1))
   break;
 if (VAR_25>=VAR_7) {
  FUNC_7 ("CACHE TEST FAILED: timeout.\n");
  return (0x20);
 }



 VAR_24 = FUNC_0 (VAR_11);

 if ((VAR_24 & VAR_4) && (VAR_17->rv_ctest4 & VAR_5)) {
  FUNC_7 ("%s: PCI DATA PARITY ERROR DETECTED - "
   "DISABLING MASTER DATA PARITY CHECKING.\n",
   FUNC_9(VAR_17));
  VAR_17->rv_ctest4 &= ~VAR_5;
  goto restart_test;
 }

 if (VAR_24 & (VAR_4|VAR_0|VAR_2)) {
  FUNC_7 ("CACHE TEST FAILED: DMA error (dstat=0x%02x).", VAR_24);
  return (0x80);
 }



 VAR_23 = FUNC_1 (VAR_10);



 VAR_21 = FUNC_8(VAR_17->cache);
 VAR_18 = FUNC_1 (VAR_13);
 VAR_20 = FUNC_1 (VAR_14);




 if (VAR_23 != FUNC_5 (VAR_17, VAR_15)+8) {
  FUNC_7 ("CACHE TEST FAILED: script execution failed.\n");
  FUNC_7 ("start=%08lx, pc=%08lx, end=%08lx\n",
   (u_long) FUNC_5 (VAR_17, VAR_16), (u_long) VAR_23,
   (u_long) FUNC_5 (VAR_17, VAR_15) +8);
  return (0x40);
 }



 if (VAR_22 != VAR_18) {
  FUNC_7 ("CACHE TEST FAILED: host wrote %d, chip read %d.\n",
   (int) VAR_22, (int) VAR_18);
  VAR_26 |= 1;
 }
 if (VAR_21 != VAR_19) {
  FUNC_7 ("CACHE TEST FAILED: chip wrote %d, host read %d.\n",
   (int) VAR_19, (int) VAR_21);
  VAR_26 |= 2;
 }
 if (VAR_20 != VAR_19) {
  FUNC_7 ("CACHE TEST FAILED: chip wrote %d, read back %d.\n",
   (int) VAR_19, (int) VAR_20);
  VAR_26 |= 4;
 }

 return (VAR_26);
}

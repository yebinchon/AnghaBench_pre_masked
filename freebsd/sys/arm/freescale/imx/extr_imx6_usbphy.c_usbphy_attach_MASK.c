
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct usbphy_softc {int phy_num; int * mem_res; } ;
typedef int device_t ;


 scalar_t__ const FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 struct usbphy_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_13)
{
 struct usbphy_softc *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_3(VAR_13);
 VAR_15 = 0;


 VAR_17 = 0;
 VAR_14->mem_res = FUNC_1(VAR_13, VAR_12, &VAR_17,
     VAR_11);
 if (VAR_14->mem_res == ((void*)0)) {
  FUNC_4(VAR_13, "Cannot allocate memory resources\n");
  VAR_15 = VAR_6;
  goto out;
 }






 const uint32_t VAR_18 = 0x020c9000;
 if (FUNC_0(VAR_14->mem_res, 0) == VAR_18) {
  VAR_14->phy_num = 0;
  VAR_16 = 0;
 } else {
  VAR_14->phy_num = 1;
  VAR_16 = 0x60;
 }
 FUNC_5(VAR_7 + VAR_16,
     VAR_9 |
     VAR_8);

 FUNC_5(VAR_7 + VAR_16,
     VAR_9 |
     VAR_8);






 FUNC_6(VAR_13);





 FUNC_2(VAR_14->mem_res, VAR_4, VAR_5);
 FUNC_2(VAR_14->mem_res, VAR_1, VAR_5 | VAR_0);


 FUNC_2(VAR_14->mem_res, VAR_4,
     VAR_2 | VAR_3);


 FUNC_2(VAR_14->mem_res, VAR_10, 0);

 VAR_15 = 0;

out:

 if (VAR_15 != 0)
  FUNC_7(VAR_13);

 return (VAR_15);
}

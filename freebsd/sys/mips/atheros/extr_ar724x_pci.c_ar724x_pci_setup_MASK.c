
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_17)
{
 uint32_t VAR_18;


 VAR_18 = VAR_10 | VAR_11 | VAR_14 |
     VAR_9 | VAR_13 | VAR_12;

 FUNC_3(VAR_5, VAR_15, VAR_18, 2);
 FUNC_3(VAR_5, 0x20, 0x1ff01000, 4);
 FUNC_3(VAR_5, 0x24, 0x1ff01000, 4);

 VAR_18 = FUNC_0(VAR_6);
 if (VAR_18 != 0x7) {
  FUNC_2(100000);
  FUNC_1(VAR_6, 0);
  FUNC_2(100);
  FUNC_1(VAR_6, 4);
  FUNC_2(100000);
 }

 if (VAR_16 == VAR_0)
  VAR_18 = VAR_4;
 else
  VAR_18 = 0x1ffc1;
 FUNC_1(VAR_3, VAR_18);

 (void) FUNC_0(VAR_3);

 FUNC_2(1000);

 VAR_18 = FUNC_0(VAR_6);
 if ((VAR_18 & VAR_7) == 0) {
  FUNC_4(VAR_17, "no PCIe controller found\n");
  return (VAR_8);
 }

 if (VAR_16 == VAR_1 ||
     VAR_16 == VAR_2) {
  VAR_18 = FUNC_0(VAR_3);
  VAR_18 |= (1 << 16);
  FUNC_1(VAR_3, VAR_18);
 }

 return (0);
}

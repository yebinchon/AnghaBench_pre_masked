
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,int ,int,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 () ;
 int VAR_14 ;
 int FUNC_7 (char*,int,int,...) ;

__attribute__((used)) static void
FUNC_8(void)
{
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 bus_space_handle_t VAR_18;
 FUNC_3(VAR_14,VAR_10, 0x4000, 0, &VAR_18);
 VAR_15 = FUNC_4(VAR_14, VAR_18, VAR_11);
 FUNC_5(VAR_14, VAR_18, 0x4000);

 VAR_17 = ((VAR_15 >> 12) & 0xffff);
 VAR_16 = ((VAR_15 >> 28) & 0xf);





 if (VAR_16 == 0) {
  VAR_15 = FUNC_6();
  VAR_16 = (VAR_15 & 0xf) - 1;
 }

 switch (VAR_17) {
 case 0xB852:
  switch (VAR_16) {
  case 0:
   VAR_13 = VAR_0;
   break;
  case 1:
   VAR_13 = VAR_1;
   break;
  default:
   VAR_13 = VAR_4;
   break;
  }
  break;

 case 0xB95C:
  switch (VAR_16) {
  case 3:
   VAR_13 = VAR_1;
   break;
  case 4:
   VAR_13 = VAR_2;
   break;
  case 6:
   VAR_13 = VAR_3;
   break;
  default:
   VAR_13 = VAR_4;
   break;
  }
  break;

 case 0xB94E:
  switch (VAR_16) {
  case 0:
   VAR_13 = VAR_5;
   break;
  case 2:
   VAR_13 = VAR_6;
   break;
  default:
   VAR_13 = VAR_7;
   break;
  }
  break;

 case 0xB975:
  switch (VAR_16) {
  case 0:
   VAR_13 = VAR_8;
   break;
  default:
   VAR_13 = VAR_9;
   break;
  }
  break;

 default:

  VAR_13 = VAR_12;
  break;
 }
 if (VAR_13 != VAR_12) {
  FUNC_7("Texas Instruments OMAP%04x Processor, Revision ES%u.%u\n",
      FUNC_0(VAR_13), FUNC_1(VAR_13),
      FUNC_2(VAR_13));
 }
 else {
  FUNC_7("Texas Instruments unknown OMAP chip: %04x, rev %d\n",
      VAR_17, VAR_16);
 }
}

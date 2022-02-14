
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;

uint32_t
FUNC_5(uint32_t VAR_17, uint32_t VAR_18, uint32_t VAR_19)
{
 uint32_t VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_21 = FUNC_0(VAR_18, VAR_2);
 VAR_22 = FUNC_0(VAR_18, VAR_3);

 switch (VAR_17) {
 case 134:
 case 132:
 case 131:
 case 128:
  VAR_21 = FUNC_2(VAR_21);
  VAR_22 += VAR_4;
  break;

 case 133:
  VAR_21 += VAR_13;
  VAR_22 += VAR_13;
  FUNC_1(VAR_21 >= 2 && VAR_21 <= 7, ("invalid n1 value"));
  FUNC_1(VAR_22 >= 5 && VAR_22 <= 23, ("invalid n2 value"));
  break;

 case 130:
  return (100000000);

 case 129:
  if (VAR_19 & VAR_16)
   return (VAR_15);
  else
   return (VAR_14);

 default:
  FUNC_4("unsupported PLL type %u\n", VAR_17);
  return (0);
 }


 if (VAR_17 == 132 || VAR_17 == 128) {
  VAR_20 = VAR_1;
 } else {
  VAR_20 = VAR_0;
 }

 VAR_23 = VAR_20 * VAR_21 * VAR_22;

 if (VAR_23 == 0)
  return (0);

 VAR_24 = FUNC_0(VAR_19, VAR_5);
 VAR_25 = FUNC_0(VAR_19, VAR_6);
 VAR_26 = FUNC_0(VAR_19, VAR_7);
 VAR_27 = FUNC_0(VAR_19, VAR_8);

 switch (VAR_17) {
 case 134:
 case 132:
 case 131:
 case 128:
  VAR_24 = FUNC_2(VAR_24);
  if (VAR_17 == 134 || VAR_17 == 132)
   VAR_25 += VAR_4;
  else
   VAR_25 = FUNC_2(VAR_25);

  VAR_26 = FUNC_2(VAR_26);

  switch (VAR_27) {
  case 139:
   return (VAR_23);
  case 138:
   return (VAR_23 / VAR_24);
  case 137:
   return (VAR_23 / (VAR_24 * VAR_25));
  case 136:
   return (VAR_23 / (VAR_24 * VAR_25 * VAR_26));
  case 135:
   return (VAR_23 / (VAR_24 * VAR_26));
  default:
   FUNC_4("unsupported pwrctl mc %#x\n", VAR_27);
   return (0);
  }
 case 133:
  VAR_24 += VAR_13;
  VAR_25 += VAR_9;
  VAR_26 += VAR_13;
  FUNC_1(VAR_24 >= 2 && VAR_24 <= 7, ("invalid m1 value"));
  FUNC_1(VAR_25 >= 3 && VAR_25 <= 10, ("invalid m2 value"));
  FUNC_1(VAR_26 >= 2 && VAR_26 <= 7, ("invalid m3 value"));

  if ((VAR_27 & VAR_10) == 0)
   VAR_23 /= VAR_24;
  if ((VAR_27 & VAR_11) == 0)
   VAR_23 /= VAR_25;
  if ((VAR_27 & VAR_12) == 0)
   VAR_23 /= VAR_26;

  return (VAR_23);
 default:
  FUNC_3("unhandled PLL type %u\n", VAR_17);
 }
}

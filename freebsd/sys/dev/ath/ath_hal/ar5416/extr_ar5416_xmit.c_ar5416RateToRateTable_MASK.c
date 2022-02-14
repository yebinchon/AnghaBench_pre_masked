
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int* ah_ratesArray; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static inline int
FUNC_1(struct ath_hal *VAR_17, uint8_t VAR_18, HAL_BOOL VAR_19)
{




 switch (VAR_18) {
 case 0x1b:
 case 0x1b | 0x4:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_4]);
 case 0x1a:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_6]);
 case 0x1a | 0x4:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_7]);
 case 0x19:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_11]);
 case 0x19 | 0x4:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_12]);
 case 0x18:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_0]);
 case 0x18 | 0x4:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_1]);
 }


 switch (VAR_18) {
 case 0x0b:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_13]);
 case 0x0f:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_14]);
 case 0x0a:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_2]);
 case 0x0e:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_3]);
 case 0x09:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_5]);
 case 0x0d:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_8]);
 case 0x08:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_9]);
 case 0x0c:
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_10]);
 }





 if ((VAR_18 & 0x80) && VAR_19) {
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_16 + (VAR_18 & 0x7)]);
 } else if (VAR_18 & 0x80) {
  return (FUNC_0(VAR_17)->ah_ratesArray[VAR_15 + (VAR_18 & 0x7)]);
 }


 return (FUNC_0(VAR_17)->ah_ratesArray[VAR_13]);
}

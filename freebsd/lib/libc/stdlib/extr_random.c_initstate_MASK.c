
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__* VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__* VAR_25 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__* VAR_26 ;

char *
FUNC_1(unsigned int VAR_27, char *VAR_28, size_t VAR_29)
{
 char *VAR_30 = (char *)(&VAR_26[-1]);
 uint32_t *VAR_31 = (uint32_t *)VAR_28;

 if (VAR_29 < VAR_0)
  return (((void*)0));
 if (VAR_24 == VAR_16)
  VAR_26[-1] = VAR_24;
 else
  VAR_26[-1] = VAR_10 * (VAR_25 - VAR_26) + VAR_24;
 if (VAR_29 < VAR_1) {
  VAR_24 = VAR_16;
  VAR_22 = VAR_5;
  VAR_23 = VAR_11;
 } else if (VAR_29 < VAR_2) {
  VAR_24 = VAR_17;
  VAR_22 = VAR_6;
  VAR_23 = VAR_12;
 } else if (VAR_29 < VAR_3) {
  VAR_24 = VAR_18;
  VAR_22 = VAR_7;
  VAR_23 = VAR_13;
 } else if (VAR_29 < VAR_4) {
  VAR_24 = VAR_19;
  VAR_22 = VAR_8;
  VAR_23 = VAR_14;
 } else {
  VAR_24 = VAR_20;
  VAR_22 = VAR_9;
  VAR_23 = VAR_15;
 }
 VAR_26 = VAR_31 + 1;
 VAR_21 = &VAR_26[VAR_22];
 FUNC_0(VAR_27);
 if (VAR_24 == VAR_16)
  VAR_31[0] = VAR_24;
 else
  VAR_31[0] = VAR_10 * (VAR_25 - VAR_26) + VAR_24;
 return (VAR_30);
}

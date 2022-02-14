
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static uint32_t
FUNC_0(int VAR_20, int VAR_21, int VAR_22, int VAR_23)
{
 uint32_t VAR_24 = 0;
 int VAR_25;
 int VAR_26 = 0, VAR_27 = 0;
 int VAR_28 = 0, VAR_29 = 0;
 int VAR_30 = 0, VAR_31 = 0;

 VAR_25 = (VAR_10 |
     VAR_12 |
     VAR_15);

 if (VAR_23) {
  VAR_26 = VAR_10;
  VAR_27 = VAR_18;
  VAR_28 = VAR_6;
  if (VAR_21)
   VAR_30 = VAR_8;
  if (VAR_20)
   VAR_31 = VAR_16;
  if (VAR_22)
   VAR_29 = VAR_12;
  else if (VAR_20)
   VAR_29 = VAR_14;
 } else {

  VAR_26 = VAR_11;
  VAR_27 = VAR_19;
  VAR_28 = VAR_7;
  if (VAR_21)
   VAR_30 = VAR_9;
  if (VAR_20)
   VAR_31 = VAR_17;
  if (VAR_22)
   VAR_29 = VAR_13;
  else if (VAR_20)
   VAR_29 = VAR_15;
  else





   VAR_24 |= VAR_3;
 }

 if (VAR_25 & VAR_26)
  VAR_24 |= VAR_2;
 if (VAR_25 & VAR_27)
  VAR_24 |= VAR_5;
 if (VAR_25 & VAR_28)
  VAR_24 |= VAR_0;
 if (VAR_25 & VAR_29)
  VAR_24 |= VAR_3;
 if (VAR_25 & VAR_30)
  VAR_24 |= VAR_1;
 if (VAR_25 & VAR_31)
  VAR_24 |= VAR_4;

 return (VAR_24);
}

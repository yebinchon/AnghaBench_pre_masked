
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static mode_t
FUNC_0 (long VAR_24, int VAR_25)
{
  mode_t VAR_26 = 0;

  if (!VAR_25)
    {
      if (VAR_24 & VAR_2)
 VAR_26 |= VAR_14;
      if (VAR_24 & VAR_1)
 VAR_26 |= VAR_13;
      if (VAR_24 & VAR_0)
 VAR_26 |= VAR_12;
    }
  if (VAR_24 & VAR_5)
    VAR_26 |= VAR_17;
  if (VAR_24 & VAR_8)
    VAR_26 |= VAR_20;
  if (VAR_24 & VAR_11)
    VAR_26 |= VAR_23;
  if (VAR_24 & VAR_3)
    VAR_26 |= VAR_15;
  if (VAR_24 & VAR_6)
    VAR_26 |= VAR_18;
  if (VAR_24 & VAR_9)
    VAR_26 |= VAR_21;
  if (VAR_24 & VAR_4)
    VAR_26 |= VAR_16;
  if (VAR_24 & VAR_7)
    VAR_26 |= VAR_19;
  if (VAR_24 & VAR_10)
    VAR_26 |= VAR_22;
  return VAR_26;
}

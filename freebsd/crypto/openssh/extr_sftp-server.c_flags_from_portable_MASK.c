
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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

__attribute__((used)) static int
FUNC_0(int VAR_13)
{
 int VAR_14 = 0;

 if ((VAR_13 & VAR_10) &&
     (VAR_13 & VAR_12)) {
  VAR_14 = VAR_4;
 } else if (VAR_13 & VAR_10) {
  VAR_14 = VAR_3;
 } else if (VAR_13 & VAR_12) {
  VAR_14 = VAR_6;
 }
 if (VAR_13 & VAR_7)
  VAR_14 |= VAR_0;
 if (VAR_13 & VAR_8)
  VAR_14 |= VAR_1;
 if (VAR_13 & VAR_11)
  VAR_14 |= VAR_5;
 if (VAR_13 & VAR_9)
  VAR_14 |= VAR_2;
 return VAR_14;
}

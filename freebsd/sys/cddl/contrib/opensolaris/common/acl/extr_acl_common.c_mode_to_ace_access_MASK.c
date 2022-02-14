
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mode_t ;
typedef scalar_t__ boolean_t ;


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
 int FUNC_0 (int,int,int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(mode_t VAR_11, boolean_t VAR_12, int VAR_13, int VAR_14)
{
 uint32_t VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;

 if (VAR_14) {
  VAR_16 = (VAR_11 & VAR_9);
  VAR_17 = (VAR_11 & VAR_8);
 } else {
  VAR_16 = !(VAR_11 & VAR_9);
  VAR_17 = !(VAR_11 & VAR_8);
 }







 VAR_15 = FUNC_0(VAR_16, VAR_17, VAR_13, VAR_14);

 if (VAR_14) {
  VAR_15 |= VAR_3 | VAR_4;
  if (VAR_13)
   VAR_15 |= VAR_6;
 } else {
  if (! VAR_13)
   VAR_15 |= VAR_6;
 }


 if (VAR_11 & VAR_8) {
  VAR_15 |= VAR_5;
 }

 if (VAR_11 & VAR_9) {
  VAR_15 |= VAR_7 |
      VAR_0;
  if (VAR_12)
   VAR_15 |= VAR_1;
 }

 if (VAR_11 & VAR_10) {
  VAR_15 |= VAR_2;
 }

 return (VAR_15);
}

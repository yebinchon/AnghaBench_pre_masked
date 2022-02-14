
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wavnc_info ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

__attribute__((used)) static unsigned int
FUNC_0(wavnc_info *VAR_11, unsigned int VAR_12,
   unsigned char *VAR_13, unsigned char *VAR_14)
{
 unsigned int VAR_15 = VAR_5;

 if (VAR_12 & VAR_6) {
  VAR_12 = VAR_6;
  VAR_15 = VAR_4;
 } else if (VAR_12 & VAR_9) {
  VAR_12 = VAR_9;
  VAR_15 = VAR_1;
 } else if (VAR_12 & VAR_8) {
  VAR_12 = VAR_8;
  VAR_15 = VAR_0;
 } else if (VAR_12 & VAR_7) {
  VAR_12 = VAR_7;
  VAR_15 = VAR_2;
 } else if (VAR_12 & VAR_10) {
  VAR_12 = VAR_10;
  VAR_15 = VAR_3;
 }

 *VAR_13 = *VAR_14 = VAR_15;

 return VAR_12;
}

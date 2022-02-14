
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_14, int VAR_15, int VAR_16)
{
int VAR_17;





 if (VAR_16 == VAR_11) {
  VAR_17 = FUNC_0(VAR_14, VAR_8 +
   VAR_7 * VAR_15);
  return (VAR_5 |
      (VAR_17 & 0x20 ? VAR_1 : 0x00) |
      (VAR_17 & 0x40 ? VAR_0 : 0x00));
 } else if (VAR_16 == VAR_12) {
  return (VAR_3);
 } else if (VAR_16 == VAR_13) {
  return (VAR_4);
 } else if (VAR_16 == VAR_9) {
  VAR_17 = FUNC_0(VAR_14, VAR_6 +
   VAR_7 * VAR_15);
  return (VAR_2 | (VAR_17 & 0x0f) << 5);
 } else if (VAR_16 == VAR_10) {
  VAR_17 = FUNC_0(VAR_14, VAR_8 +
   VAR_7 * VAR_15);
  return (((VAR_17 & 0x0f) << 5) | 0x01);
 }

 return (0);
}

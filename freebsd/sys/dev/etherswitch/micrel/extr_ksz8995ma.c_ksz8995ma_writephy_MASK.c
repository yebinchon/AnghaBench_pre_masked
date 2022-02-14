
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
int VAR_13;





 if (VAR_11 == VAR_8) {
  VAR_13 = FUNC_0(VAR_9, VAR_3 +
   VAR_5 * VAR_10);
  if (VAR_12 & VAR_0)
   VAR_13 |= VAR_4;
  else
   VAR_13 &= ~VAR_4;
  if (VAR_12 & VAR_1)
   VAR_13 |= VAR_6;
  else
   VAR_13 &= ~VAR_6;
  FUNC_1(VAR_9, VAR_3 +
   VAR_5 * VAR_10, VAR_13);
 } else if (VAR_11 == VAR_7) {
  VAR_13 = FUNC_0(VAR_9, VAR_2 +
   VAR_5 * VAR_10);
  VAR_13 &= 0xf;
  VAR_13 |= ((VAR_12 >> 5) & 0x0f);
  FUNC_1(VAR_9, VAR_2 +
   VAR_5 * VAR_10, VAR_13);
 }
 return (0);
}

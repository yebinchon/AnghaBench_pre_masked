
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_int16_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_12)
{
 u_long VAR_13;
 u_int16_t VAR_14;
 u_int16_t VAR_15;

 VAR_14 = FUNC_3(VAR_12);
 VAR_15 = FUNC_2(VAR_12);
 if ((VAR_14 == VAR_6) &&
     ((VAR_15 == VAR_1) ||
      (VAR_15 == VAR_2) ||
      (VAR_15 == VAR_3) ||
      (VAR_15 == VAR_4))) {
  FUNC_1(VAR_12, "AMD 756/766/768/8111 Power Management Controller");





  VAR_13 = FUNC_4(VAR_12, VAR_0, 4);
  VAR_13 &= 0xff00;
  FUNC_0(VAR_12, VAR_11, VAR_0,
     VAR_13+0xe0, 32);
  return (VAR_8);
 }

 if ((VAR_14 == VAR_7) &&
     (VAR_15 == VAR_5)) {
  FUNC_1(VAR_12, "nForce SMBus Controller");





  VAR_13 = FUNC_4(VAR_12, VAR_10, 4);
  VAR_13 &= 0xff00;
  FUNC_0(VAR_12, VAR_11, VAR_10,
     VAR_13, 32);

  return (VAR_8);
 }

 return VAR_9;
}

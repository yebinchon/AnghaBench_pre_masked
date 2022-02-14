
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7)
{
 device_t VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12;
 uint16_t VAR_13;

 VAR_8 = FUNC_2(VAR_7);


 if (FUNC_1(VAR_7))
  return (0);


 VAR_9 = FUNC_3(VAR_8, VAR_0, 4);
 if (VAR_9 & VAR_4)
  return (0);


 VAR_10 = FUNC_3(VAR_8, VAR_1, 4);
 VAR_11 = FUNC_3(VAR_8, VAR_2, 4);


 VAR_12 = (VAR_3|VAR_4);
 VAR_10 |= VAR_12;
 VAR_11 |= VAR_12;

 FUNC_4(VAR_8, VAR_1, VAR_10, 4);
 FUNC_4(VAR_8, VAR_2, VAR_11, 4);
 FUNC_0(1000);


 VAR_10 &= ~VAR_3;
 FUNC_4(VAR_8, VAR_1, VAR_10, 4);
 FUNC_0(5000);


 VAR_13 = FUNC_3(VAR_8, VAR_6, 2);
 VAR_13 &= ~VAR_5;
 FUNC_4(VAR_8, VAR_6, VAR_13, 2);

 return (0);
}

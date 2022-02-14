
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 device_t VAR_3;
 uint8_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_2);

 do {
  VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_0, &VAR_4, 1);
 } while (VAR_5 == 0 && (VAR_4 & VAR_1));

 return (VAR_5);
}

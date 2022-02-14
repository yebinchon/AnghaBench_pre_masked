
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 uint16_t VAR_3, VAR_4;
 VAR_3 = FUNC_0(FUNC_1(VAR_0), VAR_1, VAR_2);
 VAR_4 = FUNC_0(FUNC_1(VAR_0), VAR_1, VAR_2 + 1);

 return (VAR_4 << 16) | VAR_3;
}

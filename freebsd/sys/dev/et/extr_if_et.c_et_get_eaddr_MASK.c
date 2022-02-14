
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_3, uint8_t VAR_4[])
{
 uint32_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1, 4);
 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
  VAR_4[VAR_6] = (VAR_5 >> (8 * VAR_6)) & 0xff;

 VAR_5 = FUNC_0(VAR_3, VAR_2, 2);
 for (; VAR_6 < VAR_0; ++VAR_6)
  VAR_4[VAR_6] = (VAR_5 >> (8 * (VAR_6 - 4))) & 0xff;
}

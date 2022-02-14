
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 u_int32_t VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_3 == 0x01000000 && VAR_4 != 0x0100a90d)
  return VAR_0;
 return FUNC_0(FUNC_1(VAR_2), VAR_2, VAR_1);
}

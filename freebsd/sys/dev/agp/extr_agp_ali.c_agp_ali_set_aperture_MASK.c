
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, u_int32_t VAR_5)
{
 int VAR_6;
 u_int32_t VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_3[VAR_6] == VAR_5)
   break;
 if (VAR_6 == VAR_1)
  return VAR_2;

 VAR_7 = FUNC_0(VAR_4, VAR_0, 4);
 FUNC_1(VAR_4, VAR_0, (VAR_7 & ~0xf) | VAR_6, 4);
 return 0;
}

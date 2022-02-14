
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int) ;

int
FUNC_7(device_t VAR_2, u_int32_t VAR_3)
{
 device_t VAR_4 = FUNC_3();
 u_int32_t VAR_5, VAR_6;

 if (!VAR_4) {
  FUNC_0("can't find display\n");
  return VAR_1;
 }

 VAR_5 = FUNC_6(VAR_2, FUNC_2(VAR_2) + VAR_0, 4);
 VAR_6 = FUNC_6(VAR_4, FUNC_2(VAR_4) + VAR_0, 4);
 if (FUNC_1(VAR_3) &&
     FUNC_1(VAR_5) &&
     FUNC_1(VAR_6))
  return (FUNC_5(VAR_2, VAR_4, VAR_3));
 else
  return (FUNC_4(VAR_2, VAR_4, VAR_3));
}

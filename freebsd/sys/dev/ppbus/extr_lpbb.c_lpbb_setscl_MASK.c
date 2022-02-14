
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, int VAR_2)
{
 device_t VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3);
 if (VAR_2 == 0)
  FUNC_4(VAR_3, (u_char)(FUNC_2(VAR_3) & ~VAR_0));
 else
  FUNC_4(VAR_3, (u_char)(FUNC_2(VAR_3) | VAR_0));
 FUNC_3(VAR_3);
}

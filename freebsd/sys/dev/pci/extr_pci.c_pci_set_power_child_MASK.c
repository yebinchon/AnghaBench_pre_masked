
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 device_t VAR_3;
 int VAR_4;
 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = VAR_2;
 if (FUNC_2(VAR_1) &&
     FUNC_0(VAR_3, VAR_1, &VAR_4) == 0)
  FUNC_3(VAR_1, VAR_4);
}

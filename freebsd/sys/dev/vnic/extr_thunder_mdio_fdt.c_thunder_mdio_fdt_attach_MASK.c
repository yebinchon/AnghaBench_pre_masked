
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 phandle_t VAR_1;
 int VAR_2;


 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 != 0)
  return (VAR_2);





 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(FUNC_1(VAR_1), VAR_0);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 device_t VAR_4;
 uintptr_t VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_4, VAR_3, VAR_1, &VAR_5))
  return (VAR_0);
 if (VAR_5 != VAR_2)
  return (VAR_0);

 FUNC_2(VAR_3, "Parallel port");
 return (FUNC_3(VAR_3, 0));
}

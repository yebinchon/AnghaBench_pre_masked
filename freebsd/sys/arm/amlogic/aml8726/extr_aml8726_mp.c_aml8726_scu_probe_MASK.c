
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
  if (FUNC_1(VAR_3, VAR_2[VAR_4]))
   break;

 if (!VAR_2[VAR_4])
  return (VAR_1);

 FUNC_0(VAR_3, "ARM Snoop Control Unit");

 return (VAR_0);
}

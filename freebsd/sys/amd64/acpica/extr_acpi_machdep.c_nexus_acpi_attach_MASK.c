
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int * FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{

 FUNC_3();
 FUNC_2(VAR_0);
 if (FUNC_0(VAR_0, 10, "acpi", 0) == ((void*)0))
  FUNC_4("failed to add acpi0 device");

 return (FUNC_1(VAR_0));
}

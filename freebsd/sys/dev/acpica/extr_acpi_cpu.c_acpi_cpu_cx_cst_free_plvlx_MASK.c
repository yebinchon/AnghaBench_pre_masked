
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cx {int * p_lvlx; int res_rid; int res_type; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_0, struct acpi_cx *VAR_1)
{

 if (VAR_1->p_lvlx == ((void*)0))
  return;
 FUNC_0(VAR_0, VAR_1->res_type, VAR_1->res_rid,
     VAR_1->p_lvlx);
 VAR_1->p_lvlx = ((void*)0);
}

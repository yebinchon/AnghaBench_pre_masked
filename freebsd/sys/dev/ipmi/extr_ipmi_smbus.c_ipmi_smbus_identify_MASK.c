
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_get_info {scalar_t__ iface_type; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct ipmi_get_info*) ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_1, device_t VAR_2)
{
 struct ipmi_get_info VAR_3;

 if (FUNC_2(&VAR_3) && VAR_3.iface_type == VAR_0 &&
     FUNC_1(VAR_2, "ipmi", -1) == ((void*)0))
  FUNC_0(VAR_2, 0, "ipmi", -1);
}

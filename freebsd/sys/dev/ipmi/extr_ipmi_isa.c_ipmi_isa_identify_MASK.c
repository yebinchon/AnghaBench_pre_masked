
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ipmi_get_info {scalar_t__ iface_type; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (struct ipmi_get_info*) ;
 int FUNC_4 (int ,int,int,int ,int) ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_2, device_t VAR_3)
{
 struct ipmi_get_info VAR_4;
 uint32_t VAR_5;

 if (FUNC_3(&VAR_4) && VAR_4.iface_type != VAR_1 &&
     FUNC_1(VAR_3, "ipmi", -1) == ((void*)0)) {
  VAR_5 = FUNC_4(0, 4, 2, VAR_0, 4);
  if (VAR_5 != 0xffffffff &&
      FUNC_2(VAR_5 & 0xffff, VAR_5 >> 16) != ((void*)0))
   return;
  FUNC_0(VAR_3, 0, "ipmi", -1);
 }
}

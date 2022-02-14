
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(driver_t *VAR_4, device_t VAR_5)
{

 if (FUNC_1(VAR_5) != 0 || VAR_3 != VAR_1 ||
     (VAR_2 & VAR_0) == 0)
  return;
 FUNC_0(VAR_5, "vmbus", -1);
}

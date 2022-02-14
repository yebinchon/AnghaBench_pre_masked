
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint16_t ;
struct TYPE_2__ {char* oid_arg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int ,int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

void
FUNC_1(vm_offset_t VAR_5)
{
 volatile uint16_t * VAR_6;

 if ((VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6))) == ((void*)0))
  return;
 VAR_3 = *VAR_6;
 if (VAR_3 & VAR_1) {
  VAR_4.oid_arg1 = "SoftwareReset";
 } else if (VAR_3 & VAR_2) {
  VAR_4.oid_arg1 = "WatchdogTimeout";
 } else if (VAR_3 & VAR_0) {
  VAR_4.oid_arg1 = "PowerOnReset";
 }
}

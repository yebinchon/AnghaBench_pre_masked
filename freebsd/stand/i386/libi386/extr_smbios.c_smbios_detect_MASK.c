
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * caddr_t ;
struct TYPE_2__ {int length; size_t count; int major; int minor; scalar_t__ enabled_memory; scalar_t__ old_enabled_memory; scalar_t__ enabled_sockets; scalar_t__ populated_sockets; int * addr; } ;


 int FUNC_0 (char*,char*,int) ;
 TYPE_1__ VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (char*,char*,scalar_t__,...) ;

void
FUNC_4(const caddr_t VAR_1)
{
 char VAR_2[16];
 caddr_t VAR_3;
 size_t VAR_4;

 FUNC_2(VAR_1);
 if (VAR_0.addr == ((void*)0))
  return;

 for (VAR_3 = VAR_0.addr, VAR_4 = 0;
      VAR_3 < VAR_0.addr + VAR_0.length && VAR_4 < VAR_0.count; VAR_4++)
  VAR_3 = FUNC_1(VAR_3);

 FUNC_3(VAR_2, "%d.%d", VAR_0.major, VAR_0.minor);
 FUNC_0("smbios.version", VAR_2, 1);
 if (VAR_0.enabled_memory > 0 || VAR_0.old_enabled_memory > 0) {
  FUNC_3(VAR_2, "%u", VAR_0.enabled_memory > 0 ?
      VAR_0.enabled_memory : VAR_0.old_enabled_memory);
  FUNC_0("smbios.memory.enabled", VAR_2, 1);
 }
 if (VAR_0.enabled_sockets > 0) {
  FUNC_3(VAR_2, "%u", VAR_0.enabled_sockets);
  FUNC_0("smbios.socket.enabled", VAR_2, 1);
 }
 if (VAR_0.populated_sockets > 0) {
  FUNC_3(VAR_2, "%u", VAR_0.populated_sockets);
  FUNC_0("smbios.socket.populated", VAR_2, 1);
 }
}

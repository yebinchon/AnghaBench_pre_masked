
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int machine; int version; int release; int sysname; } ;
struct swsusp_info {scalar_t__ version_code; TYPE_1__ uts; } ;
struct TYPE_4__ {int machine; int version; int release; int sysname; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static char *FUNC_2(struct swsusp_info *VAR_1)
{
 if (VAR_1->version_code != VAR_0)
  return "kernel version";
 if (FUNC_1(VAR_1->uts.sysname,FUNC_0()->sysname))
  return "system type";
 if (FUNC_1(VAR_1->uts.release,FUNC_0()->release))
  return "kernel release";
 if (FUNC_1(VAR_1->uts.version,FUNC_0()->version))
  return "version";
 if (FUNC_1(VAR_1->uts.machine,FUNC_0()->machine))
  return "machine";
 return ((void*)0);
}

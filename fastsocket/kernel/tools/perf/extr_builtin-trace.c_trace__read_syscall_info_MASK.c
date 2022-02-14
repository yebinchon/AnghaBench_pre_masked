
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tp_name ;
struct TYPE_3__ {int max; struct syscall* table; } ;
struct trace {TYPE_1__ syscalls; int audit_machine; } ;
struct syscall {char const* name; int * tp_format; TYPE_2__* fmt; } ;
struct TYPE_4__ {char const* alias; } ;


 char* FUNC_0 (int,int ) ;
 void* FUNC_1 (char*,char*) ;
 int FUNC_2 (struct syscall*,int ,int) ;
 struct syscall* FUNC_3 (struct syscall*,int) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 TYPE_2__* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct trace *VAR_0, int VAR_1)
{
 char VAR_2[128];
 struct syscall *VAR_3;
 const char *VAR_4 = FUNC_0(VAR_1, VAR_0->audit_machine);

 if (VAR_4 == ((void*)0))
  return -1;

 if (VAR_1 > VAR_0->syscalls.max) {
  struct syscall *VAR_5 = FUNC_3(VAR_0->syscalls.table, (VAR_1 + 1) * sizeof(*VAR_3));

  if (VAR_5 == ((void*)0))
   return -1;

  if (VAR_0->syscalls.max != -1) {
   FUNC_2(VAR_5 + VAR_0->syscalls.max + 1, 0,
          (VAR_1 - VAR_0->syscalls.max) * sizeof(*VAR_3));
  } else {
   FUNC_2(VAR_5, 0, (VAR_1 + 1) * sizeof(*VAR_3));
  }

  VAR_0->syscalls.table = VAR_5;
  VAR_0->syscalls.max = VAR_1;
 }

 VAR_3 = VAR_0->syscalls.table + VAR_1;
 VAR_3->name = VAR_4;
 VAR_3->fmt = FUNC_5(VAR_3->name);

 FUNC_4(VAR_2, sizeof(VAR_2), "sys_enter_%s", VAR_3->name);
 VAR_3->tp_format = FUNC_1("syscalls", VAR_2);

 if (VAR_3->tp_format == ((void*)0) && VAR_3->fmt && VAR_3->fmt->alias) {
  FUNC_4(VAR_2, sizeof(VAR_2), "sys_enter_%s", VAR_3->fmt->alias);
  VAR_3->tp_format = FUNC_1("syscalls", VAR_2);
 }

 return VAR_3->tp_format != ((void*)0) ? 0 : -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct linux_binprm {int mm; int envc; int argc; } ;
struct audit_context {void* aux; scalar_t__ dummy; } ;
struct TYPE_3__ {void* next; int type; } ;
struct audit_aux_data_execve {TYPE_1__ d; int mm; int envc; int argc; } ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 struct audit_aux_data_execve* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct linux_binprm *VAR_5)
{
 struct audit_aux_data_execve *VAR_6;
 struct audit_context *VAR_7 = VAR_4->audit_context;

 if (FUNC_1(!VAR_3 || !VAR_7 || VAR_7->dummy))
  return 0;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->argc = VAR_5->argc;
 VAR_6->envc = VAR_5->envc;
 VAR_6->mm = VAR_5->mm;
 VAR_6->d.type = VAR_0;
 VAR_6->d.next = VAR_7->aux;
 VAR_7->aux = (void *)VAR_6;
 return 0;
}

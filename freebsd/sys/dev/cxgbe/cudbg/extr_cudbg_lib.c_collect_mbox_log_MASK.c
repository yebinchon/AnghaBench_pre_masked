
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef int u16 ;
struct mbox_cmd_log {int cursor; unsigned int size; } ;
struct mbox_cmd {scalar_t__ timestamp; int* cmd; } ;
struct cudbg_mbox_log {void** lo; void** hi; int entry; } ;
struct cudbg_init {int (* print ) (char*) ;scalar_t__ verbose; TYPE_3__* dbg_params; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; void* size; } ;
struct TYPE_4__ {int mbox_cmds; struct mbox_cmd_log* log; } ;
struct TYPE_5__ {TYPE_1__ mboxlog_param; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_buffer*,void*,struct cudbg_buffer*) ;
 struct mbox_cmd* FUNC_2 (struct mbox_cmd_log*,unsigned int) ;
 int FUNC_3 (int *,struct mbox_cmd*,int) ;
 int FUNC_4 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_7(struct cudbg_init *VAR_4,
       struct cudbg_buffer *VAR_5,
       struct cudbg_error *VAR_6)
{
 return (VAR_2);
}

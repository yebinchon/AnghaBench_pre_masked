
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ch; int rate; void* max; int level; int type; int sc; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct fw_sched_cmd {TYPE_2__ u; void* retval_len16; void* op_to_write; } ;
struct adapter {int mbox; } ;
typedef int cmd ;


 unsigned int FUNC_0 (struct fw_sched_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (int ) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct fw_sched_cmd*,int ,int) ;
 int FUNC_4 (struct adapter*,int ,struct fw_sched_cmd*,int,int *,int) ;

int FUNC_5(struct adapter *VAR_6, int VAR_7, int VAR_8,
    unsigned int VAR_9, int VAR_10)
{
 struct fw_sched_cmd VAR_11;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.op_to_write = FUNC_2(FUNC_1(VAR_0) |
          VAR_4 |
          VAR_5);
 VAR_11.retval_len16 = FUNC_2(FUNC_0(VAR_11));

 VAR_11.u.params.sc = VAR_2;
 VAR_11.u.params.type = VAR_3;
 VAR_11.u.params.level = VAR_1;
 VAR_11.u.params.ch = VAR_7;
 VAR_11.u.params.rate = VAR_8;
 VAR_11.u.params.max = FUNC_2(VAR_9);

 return FUNC_4(VAR_6,VAR_6->mbox, &VAR_11, sizeof(VAR_11),
          ((void*)0), VAR_10);
}

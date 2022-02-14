
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ch; int cl; int weight; int level; int type; int sc; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct fw_sched_cmd {TYPE_2__ u; void* retval_len16; void* op_to_write; } ;
struct adapter {int mbox; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct fw_sched_cmd) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct fw_sched_cmd*,int ,int) ;
 int FUNC_5 (struct adapter*,int ,struct fw_sched_cmd*,int,int *,int) ;

int FUNC_6(struct adapter *VAR_7, int VAR_8, int VAR_9,
    int VAR_10, int VAR_11)
{
 struct fw_sched_cmd VAR_12;

 if (VAR_10 < 0 || VAR_10 > 100)
  return -VAR_0;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.op_to_write = FUNC_3(FUNC_1(VAR_1) |
          VAR_5 |
          VAR_6);
 VAR_12.retval_len16 = FUNC_3(FUNC_0(VAR_12));

 VAR_12.u.params.sc = VAR_3;
 VAR_12.u.params.type = VAR_4;
 VAR_12.u.params.level = VAR_2;
 VAR_12.u.params.ch = VAR_8;
 VAR_12.u.params.cl = VAR_9;
 VAR_12.u.params.weight = FUNC_2(VAR_10);

 return FUNC_5(VAR_7,VAR_7->mbox, &VAR_12, sizeof(VAR_12),
          ((void*)0), VAR_11);
}

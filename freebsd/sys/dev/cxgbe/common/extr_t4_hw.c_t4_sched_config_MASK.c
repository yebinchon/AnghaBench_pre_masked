
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int minmaxen; int sc; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct fw_sched_cmd {TYPE_2__ u; void* retval_len16; void* op_to_write; } ;
struct adapter {int mbox; } ;
typedef int cmd ;


 int FUNC_0 (struct fw_sched_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct fw_sched_cmd*,int ,int) ;
 int FUNC_4 (struct adapter*,int ,struct fw_sched_cmd*,int,int *,int) ;

int FUNC_5(struct adapter *VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 struct fw_sched_cmd VAR_8;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.op_to_write = FUNC_2(FUNC_1(VAR_0) |
          VAR_2 |
          VAR_3);
 VAR_8.retval_len16 = FUNC_2(FUNC_0(VAR_8));

 VAR_8.u.config.sc = VAR_1;
 VAR_8.u.config.type = VAR_5;
 VAR_8.u.config.minmaxen = VAR_6;

 return FUNC_4(VAR_4,VAR_4->mbox, &VAR_8, sizeof(VAR_8),
          ((void*)0), VAR_7);
}

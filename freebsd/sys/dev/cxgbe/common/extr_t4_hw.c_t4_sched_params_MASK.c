
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int level; int mode; int ch; int cl; int unit; int rate; void* burstsize; void* pktsize; void* weight; void* max; void* min; int sc; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
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
 void* FUNC_3 (int) ;
 int FUNC_4 (struct fw_sched_cmd*,int ,int) ;
 int FUNC_5 (struct adapter*,int ,struct fw_sched_cmd*,int,int *,int) ;

int FUNC_6(struct adapter *VAR_4, int VAR_5, int VAR_6, int VAR_7,
      int VAR_8, int VAR_9, int VAR_10, int VAR_11,
      int VAR_12, int VAR_13, int VAR_14, int VAR_15,
      int VAR_16, int VAR_17)
{
 struct fw_sched_cmd VAR_18;

 FUNC_4(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.op_to_write = FUNC_3(FUNC_1(VAR_0) |
          VAR_2 |
          VAR_3);
 VAR_18.retval_len16 = FUNC_3(FUNC_0(VAR_18));

 VAR_18.u.params.sc = VAR_1;
 VAR_18.u.params.type = VAR_5;
 VAR_18.u.params.level = VAR_6;
 VAR_18.u.params.mode = VAR_7;
 VAR_18.u.params.ch = VAR_10;
 VAR_18.u.params.cl = VAR_11;
 VAR_18.u.params.unit = VAR_8;
 VAR_18.u.params.rate = VAR_9;
 VAR_18.u.params.min = FUNC_3(VAR_12);
 VAR_18.u.params.max = FUNC_3(VAR_13);
 VAR_18.u.params.weight = FUNC_2(VAR_14);
 VAR_18.u.params.pktsize = FUNC_2(VAR_15);
 VAR_18.u.params.burstsize = FUNC_2(VAR_16);

 return FUNC_5(VAR_4,VAR_4->mbox, &VAR_18, sizeof(VAR_18),
          ((void*)0), VAR_17);
}

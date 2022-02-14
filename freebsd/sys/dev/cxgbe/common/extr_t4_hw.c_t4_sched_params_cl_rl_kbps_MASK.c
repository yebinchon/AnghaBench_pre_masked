
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int ch; int cl; int pktsize; void* max; int rate; int unit; int level; int type; int sc; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct fw_sched_cmd {TYPE_2__ u; void* retval_len16; void* op_to_write; } ;
struct adapter {int mbox; } ;
typedef int cmd ;


 unsigned int FUNC_0 (struct fw_sched_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct fw_sched_cmd*,int ,int) ;
 int FUNC_5 (struct adapter*,int ,struct fw_sched_cmd*,int,int *,int) ;

int FUNC_6(struct adapter *VAR_8, int VAR_9, int VAR_10,
    int VAR_11, unsigned int VAR_12, int VAR_13, int VAR_14)
{
 struct fw_sched_cmd VAR_15;

 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.op_to_write = FUNC_3(FUNC_1(VAR_0) |
          VAR_6 |
          VAR_7);
 VAR_15.retval_len16 = FUNC_3(FUNC_0(VAR_15));

 VAR_15.u.params.sc = VAR_4;
 VAR_15.u.params.type = VAR_5;
 VAR_15.u.params.level = VAR_1;
 VAR_15.u.params.mode = VAR_11;
 VAR_15.u.params.ch = VAR_9;
 VAR_15.u.params.cl = VAR_10;
 VAR_15.u.params.unit = VAR_3;
 VAR_15.u.params.rate = VAR_2;
 VAR_15.u.params.max = FUNC_3(VAR_12);
 VAR_15.u.params.pktsize = FUNC_2(VAR_13);

 return FUNC_5(VAR_8,VAR_8->mbox, &VAR_15, sizeof(VAR_15),
          ((void*)0), VAR_14);
}

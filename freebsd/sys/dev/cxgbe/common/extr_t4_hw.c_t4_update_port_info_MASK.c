
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {int tx_chan; struct adapter* adapter; } ;
struct fw_port_cmd {void* action_to_len16; void* op_to_portid; } ;
struct TYPE_2__ {scalar_t__ port_caps32; } ;
struct adapter {int mbox; TYPE_1__ params; } ;
typedef enum fw_port_action { ____Placeholder_fw_port_action } fw_port_action ;
typedef int cmd ;


 int FUNC_0 (struct fw_port_cmd) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct port_info*,struct fw_port_cmd*,int,int *,int *) ;
 int FUNC_6 (struct fw_port_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

int FUNC_8(struct port_info *VAR_5)
 {
 struct adapter *VAR_6 = VAR_5->adapter;
 struct fw_port_cmd VAR_7;
 enum fw_port_action VAR_8;
 int VAR_9;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_portid = FUNC_4(FUNC_1(VAR_2) |
     VAR_4 | VAR_3 |
     FUNC_3(VAR_5->tx_chan));
 VAR_8 = VAR_6->params.port_caps32 ? VAR_1 :
     VAR_0;
 VAR_7.action_to_len16 = FUNC_4(FUNC_2(VAR_8) |
     FUNC_0(VAR_7));
 VAR_9 = FUNC_7(VAR_6, VAR_6->mbox, &VAR_7, sizeof(VAR_7), &VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_5, &VAR_7, VAR_8, ((void*)0), ((void*)0));
 return 0;
}

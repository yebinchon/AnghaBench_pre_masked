
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_code; int conn_id; int icid; } ;
struct TYPE_4__ {TYPE_1__ iscsi_info; } ;
struct event_ring_entry {int opcode; TYPE_2__ data; int fw_return_code; int echo; } ;
struct ecore_hwfn {int port_id; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_2,
    struct event_ring_entry *VAR_3)
{
 if (VAR_3->opcode >= VAR_1) {
  FUNC_0(VAR_2, 0, "Unknown iSCSI EQ: %x\n",
     VAR_3->opcode);
 }

 switch (VAR_3->opcode) {
 case 133:
 case 134:

  break;
 case 131:
 case 129:
  FUNC_1(VAR_2, VAR_0,
      "iSCSI EQE: Port %x, Op %x, echo %x, FWret %x, CID %x, ConnID %x, ERR %x\n",
      VAR_2->port_id, VAR_3->opcode,
      FUNC_2(VAR_3->echo),
      VAR_3->fw_return_code,
      FUNC_2(VAR_3->data.iscsi_info.icid),
      FUNC_2(VAR_3->data.iscsi_info.conn_id),
      VAR_3->data.iscsi_info.error_code);
  break;
 case 128:
 case 135:
 case 142:
 case 136:
 case 144:
 case 143:
 case 137:
 case 138:
 case 139:
 case 140:
 case 141:
 case 132:
 case 130:
 default:

  break;
 }
}

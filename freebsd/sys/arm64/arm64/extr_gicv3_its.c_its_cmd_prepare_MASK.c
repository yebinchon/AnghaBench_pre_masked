
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_21__ ;
typedef struct TYPE_33__ TYPE_20__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_int ;
struct TYPE_34__ {TYPE_20__* col; } ;
struct TYPE_31__ {int pid; TYPE_18__* its_dev; TYPE_17__* col; } ;
struct TYPE_28__ {TYPE_15__* col; int pid; TYPE_14__* its_dev; } ;
struct TYPE_25__ {TYPE_12__* col; int pid; int id; TYPE_11__* its_dev; } ;
struct TYPE_22__ {int valid; TYPE_9__* col; } ;
struct TYPE_41__ {int valid; TYPE_7__* its_dev; } ;
struct TYPE_38__ {TYPE_4__* col; } ;
struct TYPE_36__ {TYPE_2__* its_dev; TYPE_1__* col; int id; } ;
struct its_cmd_desc {int cmd_type; TYPE_21__ cmd_desc_invall; TYPE_19__ cmd_desc_inv; TYPE_16__ cmd_desc_mapi; TYPE_13__ cmd_desc_mapvi; TYPE_10__ cmd_desc_mapc; TYPE_8__ cmd_desc_mapd; TYPE_5__ cmd_desc_sync; TYPE_3__ cmd_desc_movi; } ;
struct its_cmd {int dummy; } ;
struct TYPE_42__ {int col_id; int col_target; } ;
struct TYPE_39__ {int lpi_num; } ;
struct TYPE_40__ {int devid; TYPE_6__ lpis; int itt; } ;
struct TYPE_37__ {int col_target; } ;
struct TYPE_35__ {int devid; } ;
struct TYPE_33__ {int col_id; } ;
struct TYPE_32__ {int col_id; int col_target; } ;
struct TYPE_30__ {int devid; } ;
struct TYPE_29__ {int col_target; } ;
struct TYPE_27__ {int col_id; int col_target; } ;
struct TYPE_26__ {int devid; } ;
struct TYPE_24__ {int col_id; int col_target; } ;
struct TYPE_23__ {int devid; } ;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct its_cmd*,int ) ;
 int FUNC_2 (struct its_cmd*,int const) ;
 int FUNC_3 (struct its_cmd*,int ) ;
 int FUNC_4 (struct its_cmd*,int ) ;
 int FUNC_5 (struct its_cmd*,int ) ;
 int FUNC_6 (struct its_cmd*,int ) ;
 int FUNC_7 (struct its_cmd*,int ) ;
 int FUNC_8 (struct its_cmd*,int ) ;
 int FUNC_9 (struct its_cmd*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static uint64_t
FUNC_13(struct its_cmd *VAR_1, struct its_cmd_desc *VAR_2)
{
 uint64_t VAR_3;
 uint8_t VAR_4;
 u_int VAR_5;

 VAR_4 = VAR_2->cmd_type;
 VAR_3 = VAR_0;

 switch (VAR_4) {
 case 129:
  VAR_3 = VAR_2->cmd_desc_movi.col->col_target;
  FUNC_2(VAR_1, 129);
  FUNC_4(VAR_1, VAR_2->cmd_desc_movi.id);
  FUNC_1(VAR_1, VAR_2->cmd_desc_movi.col->col_id);
  FUNC_3(VAR_1, VAR_2->cmd_desc_movi.its_dev->devid);
  break;
 case 128:
  VAR_3 = VAR_2->cmd_desc_sync.col->col_target;
  FUNC_2(VAR_1, 128);
  FUNC_8(VAR_1, VAR_3);
  break;
 case 132:
  FUNC_2(VAR_1, 132);
  FUNC_5(VAR_1, FUNC_12(VAR_2->cmd_desc_mapd.its_dev->itt));






  if (VAR_2->cmd_desc_mapd.valid != 0) {
   VAR_5 = FUNC_10(VAR_2->cmd_desc_mapd.its_dev->lpis.lpi_num);
   VAR_5 = FUNC_0(1, VAR_5) - 1;
  } else
   VAR_5 = 0;

  FUNC_7(VAR_1, VAR_5);
  FUNC_3(VAR_1, VAR_2->cmd_desc_mapd.its_dev->devid);
  FUNC_9(VAR_1, VAR_2->cmd_desc_mapd.valid);
  break;
 case 133:
  VAR_3 = VAR_2->cmd_desc_mapc.col->col_target;
  FUNC_2(VAR_1, 133);
  FUNC_1(VAR_1, VAR_2->cmd_desc_mapc.col->col_id);
  FUNC_9(VAR_1, VAR_2->cmd_desc_mapc.valid);
  FUNC_8(VAR_1, VAR_3);
  break;
 case 130:
  VAR_3 = VAR_2->cmd_desc_mapvi.col->col_target;
  FUNC_2(VAR_1, 130);
  FUNC_3(VAR_1, VAR_2->cmd_desc_mapvi.its_dev->devid);
  FUNC_4(VAR_1, VAR_2->cmd_desc_mapvi.id);
  FUNC_6(VAR_1, VAR_2->cmd_desc_mapvi.pid);
  FUNC_1(VAR_1, VAR_2->cmd_desc_mapvi.col->col_id);
  break;
 case 131:
  VAR_3 = VAR_2->cmd_desc_mapi.col->col_target;
  FUNC_2(VAR_1, 131);
  FUNC_3(VAR_1, VAR_2->cmd_desc_mapi.its_dev->devid);
  FUNC_4(VAR_1, VAR_2->cmd_desc_mapi.pid);
  FUNC_1(VAR_1, VAR_2->cmd_desc_mapi.col->col_id);
  break;
 case 135:
  VAR_3 = VAR_2->cmd_desc_inv.col->col_target;
  FUNC_2(VAR_1, 135);
  FUNC_3(VAR_1, VAR_2->cmd_desc_inv.its_dev->devid);
  FUNC_4(VAR_1, VAR_2->cmd_desc_inv.pid);
  break;
 case 134:
  FUNC_2(VAR_1, 134);
  FUNC_1(VAR_1, VAR_2->cmd_desc_invall.col->col_id);
  break;
 default:
  FUNC_11("its_cmd_prepare: Invalid command: %x", VAR_4);
 }

 return (VAR_3);
}

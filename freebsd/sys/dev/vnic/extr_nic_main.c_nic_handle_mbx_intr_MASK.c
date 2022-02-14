
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int msg; } ;
struct TYPE_11__ {int vf_id; int max_frs; } ;
struct TYPE_10__ {int vf_id; int mac_addr; } ;
struct TYPE_14__ {int qs_num; int sq_num; int cfg; } ;
struct TYPE_9__ {int num; int cfg; } ;
struct TYPE_8__ {int qs_num; int rq_num; int cfg; } ;
union nic_mbx {TYPE_6__ msg; int lbk; int bgx_stats; int rss_cfg; int cpi_cfg; TYPE_4__ frs; TYPE_3__ mac; TYPE_7__ sq; TYPE_2__ qs; TYPE_1__ rq; } ;
typedef int uint64_t ;
struct nicpf {void** mbx_lock; int dev; TYPE_5__* vf_info; int node; int * vf_lmac_map; int * speed; int * duplex; int * link; } ;
struct TYPE_12__ {void* vf_enabled; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct nicpf*,int *) ;
 int FUNC_5 (struct nicpf*,int *) ;
 int FUNC_6 (struct nicpf*,int *) ;
 int FUNC_7 (struct nicpf*,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct nicpf*,int) ;
 int FUNC_10 (struct nicpf*,int) ;
 int FUNC_11 (struct nicpf*,int) ;
 int FUNC_12 (struct nicpf*) ;
 int FUNC_13 (struct nicpf*,int) ;
 int FUNC_14 (struct nicpf*,int,int) ;
 int FUNC_15 (struct nicpf*,int) ;
 int FUNC_16 (struct nicpf*,int,TYPE_7__*) ;
 int FUNC_17 (struct nicpf*,int ,int ) ;

__attribute__((used)) static void
FUNC_18(struct nicpf *VAR_11, int VAR_12)
{
 union nic_mbx VAR_13 = {};
 uint64_t *VAR_14;
 uint64_t VAR_15;
 uint64_t VAR_16;
 uint64_t VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21 = 0;

 VAR_11->mbx_lock[VAR_12] = VAR_10;

 VAR_15 = FUNC_8(VAR_12);
 VAR_14 = (uint64_t *)&VAR_13;

 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
  *VAR_14 = FUNC_13(VAR_11, VAR_15);
  VAR_14++;
  VAR_15 += sizeof(uint64_t);
 }

 switch (VAR_13.msg.msg) {
 case 139:
  FUNC_11(VAR_11, VAR_12);
  if (VAR_12 < VAR_1) {
   VAR_11->link[VAR_12] = 0;
   VAR_11->duplex[VAR_12] = 0;
   VAR_11->speed[VAR_12] = 0;
  }
  VAR_21 = 1;
  break;
 case 140:
  VAR_16 = VAR_2 |
      (VAR_13.qs.num << VAR_8);
  VAR_17 = VAR_13.qs.cfg;
  FUNC_14(VAR_11, VAR_16, VAR_17);
  break;
 case 137:
  VAR_16 = VAR_4 |
      (VAR_13.rq.qs_num << VAR_8) |
      (VAR_13.rq.rq_num << VAR_9);
  FUNC_14(VAR_11, VAR_16, VAR_13.rq.cfg);
  break;
 case 138:
  VAR_16 = VAR_3 |
      (VAR_13.rq.qs_num << VAR_8) |
      (VAR_13.rq.rq_num << VAR_9);
  FUNC_14(VAR_11, VAR_16, VAR_13.rq.cfg);
  break;
 case 135:
  VAR_21 = FUNC_12(VAR_11);
  break;
 case 136:
  VAR_16 = VAR_5 |
      (VAR_13.rq.qs_num << VAR_8) |
      (VAR_13.rq.rq_num << VAR_9);
  FUNC_14(VAR_11, VAR_16, VAR_13.rq.cfg);
  break;
 case 128:
  VAR_16 = VAR_6 |
      (VAR_13.sq.qs_num << VAR_8) |
      (VAR_13.sq.sq_num << VAR_9);
  FUNC_14(VAR_11, VAR_16, VAR_13.sq.cfg);
  FUNC_16(VAR_11, VAR_13.qs.num, &VAR_13.sq);
  break;
 case 131:
  VAR_19 = VAR_13.mac.vf_id;
  VAR_18 = FUNC_0(VAR_11->vf_lmac_map[VAR_19]);
  VAR_19 = FUNC_1(VAR_11->vf_lmac_map[VAR_19]);
  FUNC_2(VAR_11->node, VAR_18, VAR_19, VAR_13.mac.mac_addr);
  break;
 case 130:
  VAR_21 = FUNC_17(VAR_11, VAR_13.frs.max_frs, VAR_13.frs.vf_id);
  break;
 case 142:
  FUNC_4(VAR_11, &VAR_13.cpi_cfg);
  break;
 case 132:
  FUNC_15(VAR_11, VAR_12);
  goto unlock;
 case 134:
 case 133:
  FUNC_6(VAR_11, &VAR_13.rss_cfg);
  break;
 case 143:

  VAR_11->vf_info[VAR_12].vf_enabled = VAR_10;
  goto unlock;
 case 129:

  VAR_11->vf_info[VAR_12].vf_enabled = VAR_0;
  break;
 case 144:
  FUNC_7(VAR_11, &VAR_13.bgx_stats);
  goto unlock;
 case 141:
  VAR_21 = FUNC_5(VAR_11, &VAR_13.lbk);
  break;
 default:
  FUNC_3(VAR_11->dev,
      "Invalid msg from VF%d, msg 0x%x\n", VAR_12, VAR_13.msg.msg);
  break;
 }

 if (VAR_21 == 0)
  FUNC_9(VAR_11, VAR_12);
 else if (VAR_13.msg.msg != 139)
  FUNC_10(VAR_11, VAR_12);
unlock:
 VAR_11->mbx_lock[VAR_12] = VAR_0;
}

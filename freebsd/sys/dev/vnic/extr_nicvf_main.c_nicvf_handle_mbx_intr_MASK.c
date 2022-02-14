
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int msg; } ;
struct TYPE_9__ {int speed; int duplex; int link_up; } ;
struct TYPE_8__ {int ind_tbl_size; } ;
struct TYPE_6__ {int vf_id; int tns_mode; int loopback_supported; int mac_addr; int node_id; } ;
union nic_mbx {TYPE_5__ msg; TYPE_4__ link_status; int bgx_stats; TYPE_3__ rss_size; TYPE_1__ nic_cfg; } ;
typedef int uint64_t ;
struct TYPE_7__ {int rss_size; } ;
struct nicvf {int vf_id; int tns_mode; int speed; int dev; int ifp; int link_up; int duplex; void* pf_acked; TYPE_2__ rss_info; void* pf_nacked; int loopback_supported; int hwaddr; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct nicvf*,int ,int ) ;
 int FUNC_5 (struct nicvf*,int *) ;
 int FUNC_6 (struct nicvf*,int) ;

__attribute__((used)) static void
FUNC_7(struct nicvf *VAR_8)
{
 union nic_mbx VAR_9 = {};
 uint64_t *VAR_10;
 uint64_t VAR_11;
 int VAR_12;

 VAR_11 = VAR_6;
 VAR_10 = (uint64_t *)&VAR_9;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  *VAR_10 = FUNC_6(VAR_8, VAR_11);
  VAR_10++;
  VAR_11 += sizeof(uint64_t);
 }

 switch (VAR_9.msg.msg) {
 case 129:
  VAR_8->pf_acked = VAR_7;
  VAR_8->vf_id = VAR_9.nic_cfg.vf_id & 0x7F;
  VAR_8->tns_mode = VAR_9.nic_cfg.tns_mode & 0x7F;
  VAR_8->node = VAR_9.nic_cfg.node_id;
  FUNC_3(VAR_8->hwaddr, VAR_9.nic_cfg.mac_addr, VAR_0);
  VAR_8->loopback_supported = VAR_9.nic_cfg.loopback_supported;
  VAR_8->link_up = VAR_1;
  VAR_8->duplex = 0;
  VAR_8->speed = 0;
  break;
 case 133:
  VAR_8->pf_acked = VAR_7;
  break;
 case 130:
  VAR_8->pf_nacked = VAR_7;
  break;
 case 128:
  VAR_8->rss_info.rss_size = VAR_9.rss_size.ind_tbl_size;
  VAR_8->pf_acked = VAR_7;
  break;
 case 131:
  FUNC_5(VAR_8, &VAR_9.bgx_stats);
  VAR_8->pf_acked = VAR_7;
  break;
 case 132:
  VAR_8->pf_acked = VAR_7;
  VAR_8->link_up = VAR_9.link_status.link_up;
  VAR_8->duplex = VAR_9.link_status.duplex;
  VAR_8->speed = VAR_9.link_status.speed;
  if (VAR_8->link_up) {
   FUNC_2(VAR_8->ifp, VAR_8->speed * 1000000);
   FUNC_1(VAR_8->ifp, VAR_3);
  } else {
   FUNC_2(VAR_8->ifp, 0);
   FUNC_1(VAR_8->ifp, VAR_2);
  }
  break;
 default:
  FUNC_0(VAR_8->dev,
      "Invalid message from PF, msg 0x%x\n", VAR_9.msg.msg);
  break;
 }
 FUNC_4(VAR_8, VAR_4, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vf_id; int loopback_supported; int node_id; int mac_addr; int tns_mode; int msg; } ;
union nic_mbx {TYPE_1__ nic_cfg; } ;
typedef int uint8_t ;
struct nicpf {int flags; int node; int * vf_lmac_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (struct nicpf*,int,union nic_mbx*) ;

__attribute__((used)) static void
FUNC_5(struct nicpf *VAR_6, int VAR_7)
{
 union nic_mbx VAR_8 = {};
 int VAR_9, VAR_10;
 const char *VAR_11;

 VAR_8.nic_cfg.msg = VAR_2;
 VAR_8.nic_cfg.vf_id = VAR_7;

 if (VAR_6->flags & VAR_4)
  VAR_8.nic_cfg.tns_mode = VAR_5;
 else
  VAR_8.nic_cfg.tns_mode = VAR_3;

 if (VAR_7 < VAR_1) {
  VAR_9 = FUNC_0(VAR_6->vf_lmac_map[VAR_7]);
  VAR_10 = FUNC_1(VAR_6->vf_lmac_map[VAR_7]);

  VAR_11 = FUNC_2(VAR_6->node, VAR_9, VAR_10);
  if (VAR_11) {
   FUNC_3((uint8_t *)&VAR_8.nic_cfg.mac_addr, VAR_11,
       VAR_0);
  }
 }
 VAR_8.nic_cfg.node_id = VAR_6->node;

 VAR_8.nic_cfg.loopback_supported = VAR_7 < VAR_1;

 FUNC_4(VAR_6, VAR_7, &VAR_8);
}

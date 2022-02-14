
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int tstats ;
struct tstorm_per_port_stat {int eth_mac_filter_discard; int mftag_filter_discard; } ;
struct TYPE_5__ {int address; int len; } ;
struct TYPE_6__ {TYPE_1__ tstats; } ;
struct TYPE_7__ {TYPE_2__ stats_info; } ;
struct pfvf_acquire_resp_tlv {TYPE_3__ pfdev_info; } ;
struct ecore_vf_iov {struct pfvf_acquire_resp_tlv acquire_resp; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; int p_dev; } ;
struct TYPE_8__ {int mac_filter_discards; int mftag_filter_discards; } ;
struct ecore_eth_stats {TYPE_4__ common; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct tstorm_per_port_stat*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct tstorm_per_port_stat*,int,int) ;

__attribute__((used)) static void FUNC_6(struct ecore_hwfn *VAR_1,
         struct ecore_ptt *VAR_2,
         struct ecore_eth_stats *VAR_3)
{
 struct tstorm_per_port_stat VAR_4;
 u32 VAR_5, VAR_6;

 if (FUNC_1(VAR_1->p_dev)) {
  VAR_5 = VAR_0 +
         FUNC_4(FUNC_2(VAR_1));
  VAR_6 = sizeof(struct tstorm_per_port_stat);
 } else {
  struct ecore_vf_iov *VAR_7 = VAR_1->vf_iov_info;
  struct pfvf_acquire_resp_tlv *VAR_8 = &VAR_7->acquire_resp;

  VAR_5 = VAR_8->pfdev_info.stats_info.tstats.address;
  VAR_6 = VAR_8->pfdev_info.stats_info.tstats.len;
 }

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 FUNC_5(VAR_1, VAR_2, &VAR_4,
     VAR_5, VAR_6);

 VAR_3->common.mftag_filter_discards +=
  FUNC_0(VAR_4.mftag_filter_discard);
 VAR_3->common.mac_filter_discards +=
  FUNC_0(VAR_4.eth_mac_filter_discard);
}

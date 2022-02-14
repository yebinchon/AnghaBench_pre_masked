
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int address; int len; } ;
struct TYPE_5__ {TYPE_1__ ustats; } ;
struct TYPE_6__ {TYPE_2__ stats_info; } ;
struct pfvf_acquire_resp_tlv {TYPE_3__ pfdev_info; } ;
struct eth_ustorm_per_queue_stat {int dummy; } ;
struct ecore_vf_iov {struct pfvf_acquire_resp_tlv acquire_resp; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; int p_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_1,
          u32 *VAR_2, u32 *VAR_3,
          u16 VAR_4)
{
 if (FUNC_0(VAR_1->p_dev)) {
  *VAR_2 = VAR_0 +
     FUNC_1(VAR_4);
  *VAR_3 = sizeof(struct eth_ustorm_per_queue_stat);
 } else {
  struct ecore_vf_iov *VAR_5 = VAR_1->vf_iov_info;
  struct pfvf_acquire_resp_tlv *VAR_6 = &VAR_5->acquire_resp;

  *VAR_2 = VAR_6->pfdev_info.stats_info.ustats.address;
  *VAR_3 = VAR_6->pfdev_info.stats_info.ustats.len;
 }
}

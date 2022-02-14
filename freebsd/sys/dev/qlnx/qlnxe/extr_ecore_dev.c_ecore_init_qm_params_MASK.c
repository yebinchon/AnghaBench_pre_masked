
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct ecore_qm_info {int vport_rl_en; int vport_wfq_en; scalar_t__ ooo_tc; int max_phys_tcs_per_port; scalar_t__ start_vport; scalar_t__ start_pq; } ;
struct ecore_hwfn {TYPE_1__* p_dev; struct ecore_qm_info qm_info; } ;
struct TYPE_2__ {scalar_t__ num_ports_in_engine; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_7)
{
 struct ecore_qm_info *VAR_8 = &VAR_7->qm_info;
 bool VAR_9;


 VAR_8->start_pq = (u16)FUNC_0(VAR_7, VAR_2);
 VAR_8->start_vport = (u8)FUNC_0(VAR_7, VAR_3);


 VAR_8->vport_rl_en = 1;
 VAR_8->vport_wfq_en = 1;


 VAR_9 = VAR_7->p_dev->num_ports_in_engine == VAR_4;


 VAR_8->max_phys_tcs_per_port = VAR_9 ? VAR_6 : VAR_5;


 if (!VAR_8->ooo_tc)
  VAR_8->ooo_tc = VAR_9 ? VAR_0 : VAR_1;
}

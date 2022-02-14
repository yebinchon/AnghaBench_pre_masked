
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct ecore_qm_info {size_t num_pqs; scalar_t__ start_vport; scalar_t__ num_vports; scalar_t__ num_pf_rls; TYPE_1__* qm_pq_params; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_2__ {scalar_t__ vport_id; int rl_valid; int wrr_group; int tc_id; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,size_t,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 size_t FUNC_2 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_4,
        struct ecore_qm_info *VAR_5,
        u8 VAR_6, u32 VAR_7)
{
 u16 VAR_8 = VAR_5->num_pqs, VAR_9 = FUNC_2(VAR_4);

 if (VAR_8 > VAR_9)
  FUNC_0(VAR_4, "pq overflow! pq %d, max pq %d\n", VAR_8, VAR_9);


 VAR_5->qm_pq_params[VAR_8].vport_id = VAR_5->start_vport + VAR_5->num_vports;
 VAR_5->qm_pq_params[VAR_8].tc_id = VAR_6;
 VAR_5->qm_pq_params[VAR_8].wrr_group = VAR_0;
 VAR_5->qm_pq_params[VAR_8].rl_valid =
  (VAR_7 & VAR_1 || VAR_7 & VAR_3);


 VAR_5->num_pqs++;
 if (!(VAR_7 & VAR_2))
  VAR_5->num_vports++;

 if (VAR_7 & VAR_1)
  VAR_5->num_pf_rls++;

 if (VAR_5->num_vports > FUNC_3(VAR_4))
  FUNC_0(VAR_4, "vport overflow! qm_info->num_vports %d, qm_init_get_num_vports() %d\n", VAR_5->num_vports, FUNC_3(VAR_4));

 if (VAR_5->num_pf_rls > FUNC_1(VAR_4))
  FUNC_0(VAR_4, "rl overflow! qm_info->num_pf_rls %d, qm_init_get_num_pf_rls() %d\n", VAR_5->num_pf_rls, FUNC_1(VAR_4));
}

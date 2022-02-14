
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_link_state {int line_speed; int min_pf_rate; } ;
struct TYPE_6__ {int pf_wfq; } ;
struct ecore_hwfn {int rel_pf_id; TYPE_3__ qm_info; TYPE_2__* mcp_info; } ;
struct TYPE_4__ {int bandwidth_min; } ;
struct TYPE_5__ {TYPE_1__ func_info; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

int FUNC_2(struct ecore_hwfn *VAR_2,
           struct ecore_ptt *VAR_3,
           struct ecore_mcp_link_state *VAR_4,
           u8 VAR_5)
{
 int VAR_6 = VAR_1;

 VAR_2->mcp_info->func_info.bandwidth_min = VAR_5;
 VAR_2->qm_info.pf_wfq = VAR_5;

 if (!VAR_4->line_speed)
  return VAR_6;

 VAR_4->min_pf_rate = (VAR_4->line_speed * VAR_5) / 100;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_2->rel_pf_id, VAR_5);

 FUNC_0(VAR_2, VAR_0,
     "Configured MIN bandwidth to be %d Mb/sec\n",
     VAR_4->min_pf_rate);

 return VAR_6;
}

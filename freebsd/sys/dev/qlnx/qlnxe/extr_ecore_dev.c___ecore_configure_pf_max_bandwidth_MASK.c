
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_link_state {int line_speed; int speed; } ;
struct TYPE_5__ {int pf_rl; } ;
struct ecore_hwfn {TYPE_2__ qm_info; int rel_pf_id; TYPE_1__* mcp_info; } ;
struct TYPE_6__ {int bandwidth_max; } ;
struct TYPE_4__ {TYPE_3__ func_info; } ;


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

 VAR_2->mcp_info->func_info.bandwidth_max = VAR_5;

 if (!VAR_4->line_speed && (VAR_5 != 100))
  return VAR_6;

 VAR_4->speed = (VAR_4->line_speed * VAR_5) / 100;
 VAR_2->qm_info.pf_rl = VAR_4->speed;





 if (VAR_5 == 100)
  VAR_2->qm_info.pf_rl = 100000;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_2->rel_pf_id,
         VAR_2->qm_info.pf_rl);

 FUNC_0(VAR_2, VAR_0,
     "Configured MAX bandwidth to be %08x Mb/sec\n",
     VAR_4->speed);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_link_state {int min_pf_rate; } ;
struct TYPE_10__ {TYPE_4__* wfq_data; } ;
struct ecore_hwfn {TYPE_5__ qm_info; TYPE_3__* p_dev; } ;
struct TYPE_9__ {int configured; int min_speed; } ;
struct TYPE_8__ {TYPE_2__* hwfns; } ;
struct TYPE_7__ {TYPE_1__* mcp_info; } ;
struct TYPE_6__ {struct ecore_mcp_link_state link_output; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_2 (struct ecore_hwfn*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ecore_hwfn *VAR_1,
           struct ecore_ptt *VAR_2,
           u16 VAR_3, u32 VAR_4)
{
 struct ecore_mcp_link_state *VAR_5;
 int VAR_6 = VAR_0;

 VAR_5 = &VAR_1->p_dev->hwfns[0].mcp_info->link_output;

 if (!VAR_5->min_pf_rate) {
  VAR_1->qm_info.wfq_data[VAR_3].min_speed = VAR_4;
  VAR_1->qm_info.wfq_data[VAR_3].configured = 1;
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5->min_pf_rate);

 if (VAR_6 == VAR_0)
  FUNC_1(VAR_1, VAR_2,
         VAR_5->min_pf_rate);
 else
  FUNC_0(VAR_1, 0,
     "Validation failed while configuring min rate\n");

 return VAR_6;
}

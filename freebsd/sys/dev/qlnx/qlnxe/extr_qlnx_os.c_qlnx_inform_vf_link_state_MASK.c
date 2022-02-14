
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ecore_mcp_link_state {int link_up; int speed; } ;
struct ecore_mcp_link_params {int link_up; int speed; } ;
struct ecore_mcp_link_capabilities {int link_up; int speed; } ;
struct ecore_hwfn {TYPE_2__* p_dev; int pf_iov_info; } ;
struct TYPE_8__ {scalar_t__ link_up; } ;
typedef TYPE_3__ qlnx_host_t ;
typedef int params ;
typedef int link ;
typedef int caps ;
struct TYPE_7__ {int num_hwfns; TYPE_1__* p_iov_info; } ;
struct TYPE_6__ {int total_vfs; } ;


 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int,struct ecore_mcp_link_state*,struct ecore_mcp_link_state*,struct ecore_mcp_link_state*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_mcp_link_state*,int ,int) ;
 int FUNC_6 (struct ecore_mcp_link_state*,int ,int) ;
 int FUNC_7 (struct ecore_hwfn*) ;

__attribute__((used)) static void
FUNC_8(struct ecore_hwfn *VAR_0, qlnx_host_t *VAR_1)
{
 struct ecore_mcp_link_capabilities VAR_2;
 struct ecore_mcp_link_params VAR_3;
 struct ecore_mcp_link_state VAR_4;
 int VAR_5;

 if (!VAR_0->pf_iov_info)
  return;

 FUNC_6(&VAR_3, 0, sizeof(struct ecore_mcp_link_params));
 FUNC_6(&VAR_4, 0, sizeof(struct ecore_mcp_link_state));
 FUNC_6(&VAR_2, 0, sizeof(struct ecore_mcp_link_capabilities));

 FUNC_5(&VAR_2, FUNC_2(VAR_0), sizeof(VAR_2));
        FUNC_5(&VAR_4, FUNC_4(VAR_0), sizeof(VAR_4));
        FUNC_5(&VAR_3, FUNC_3(VAR_0), sizeof(VAR_3));

 FUNC_0(VAR_1, "called\n");


        for (VAR_5 = 0; VAR_5 < VAR_0->p_dev->p_iov_info->total_vfs; VAR_5++) {



                VAR_4.link_up = 0;

                if (VAR_1->link_up) {
                        VAR_4.link_up = 1;




                        VAR_4.speed = (VAR_0->p_dev->num_hwfns > 1) ?
      100000 : VAR_4.speed;
  }
  FUNC_0(VAR_1, "link [%d] = %d\n", VAR_5, VAR_4.link_up);
                FUNC_1(VAR_0, VAR_5, &VAR_3, &VAR_4, &VAR_2);
        }

 FUNC_7(VAR_0);

 return;
}

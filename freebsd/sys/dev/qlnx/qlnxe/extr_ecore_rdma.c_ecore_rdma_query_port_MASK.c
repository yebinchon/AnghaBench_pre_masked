
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ecore_rdma_port {int max_msg_size; int link_speed; int port_state; } ;
struct ecore_mcp_link_state {int speed; scalar_t__ link_up; } ;
struct ecore_hwfn {int p_dev; TYPE_1__* p_rdma_info; } ;
struct TYPE_6__ {TYPE_2__* mcp_info; } ;
struct TYPE_5__ {struct ecore_mcp_link_state link_output; } ;
struct TYPE_4__ {struct ecore_rdma_port* port; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct ecore_rdma_port *FUNC_2(void *VAR_4)
{
 struct ecore_hwfn *VAR_5 = (struct ecore_hwfn *)VAR_4;
 struct ecore_rdma_port *VAR_6 = VAR_5->p_rdma_info->port;
 struct ecore_mcp_link_state *VAR_7;

 FUNC_0(VAR_5, VAR_0, "RDMA Query port\n");


 VAR_7 =
  &FUNC_1(VAR_5->p_dev)->mcp_info->link_output;


 VAR_6->port_state = VAR_7->link_up ? VAR_2
          : VAR_1;

 VAR_6->link_speed = VAR_7->speed;

 VAR_6->max_msg_size = VAR_3;

 return VAR_6;
}

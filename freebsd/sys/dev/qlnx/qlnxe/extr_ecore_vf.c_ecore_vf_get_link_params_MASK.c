
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_mcp_link_params {int dummy; } ;
struct ecore_hwfn {TYPE_1__* vf_iov_info; } ;
struct TYPE_2__ {int bulletin_shadow; } ;


 int FUNC_0 (struct ecore_mcp_link_params*,int *) ;

void FUNC_1(struct ecore_hwfn *VAR_0,
         struct ecore_mcp_link_params *VAR_1)
{
 FUNC_0(VAR_1,
       &(VAR_0->vf_iov_info->bulletin_shadow));
}

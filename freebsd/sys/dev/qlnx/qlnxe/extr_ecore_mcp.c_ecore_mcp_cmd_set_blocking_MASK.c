
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int b_block_cmd; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_0,
           bool VAR_1)
{
 VAR_0->mcp_info->b_block_cmd = VAR_1;

 FUNC_0(VAR_0, "%s sending of mailbox commands to the MFW\n",
  VAR_1 ? "Block" : "Unblock");
}

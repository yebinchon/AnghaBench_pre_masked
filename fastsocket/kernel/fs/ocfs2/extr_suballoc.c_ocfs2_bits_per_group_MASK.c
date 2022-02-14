
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_chain_list {int cl_bpc; int cl_cpg; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct ocfs2_chain_list *VAR_0)
{
 return (u32)FUNC_0(VAR_0->cl_cpg) * (u32)FUNC_0(VAR_0->cl_bpc);
}

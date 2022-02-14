
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {struct tc_u_hnode* root; struct tc_u_common* data; } ;
struct tc_u_hnode {int dummy; } ;
struct tc_u_common {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 struct tc_u_hnode* FUNC_2 (struct tc_u_common*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tc_u_hnode*,int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct tcf_proto *VAR_1, u32 VAR_2)
{
 struct tc_u_hnode *VAR_3;
 struct tc_u_common *VAR_4 = VAR_1->data;

 if (FUNC_0(VAR_2) == VAR_0)
  VAR_3 = VAR_1->root;
 else
  VAR_3 = FUNC_2(VAR_4, FUNC_0(VAR_2));

 if (!VAR_3)
  return 0;

 if (FUNC_1(VAR_2) == 0)
  return (unsigned long)VAR_3;

 return (unsigned long)FUNC_3(VAR_3, VAR_2);
}

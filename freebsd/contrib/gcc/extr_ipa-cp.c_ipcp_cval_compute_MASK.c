
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union parameter_info {int formal_id; } ;
struct ipcp_formal {int dummy; } ;
struct cgraph_node {int dummy; } ;
typedef enum jump_func_type { ____Placeholder_jump_func_type } jump_func_type ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union parameter_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipcp_formal*,union parameter_info*,int) ;
 int FUNC_3 (struct ipcp_formal*,int) ;
 int FUNC_4 (struct cgraph_node*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct ipcp_formal *VAR_7, struct cgraph_node *VAR_8,
     enum jump_func_type VAR_9, union parameter_info *VAR_10)
{
  if (VAR_9 == VAR_6)
    FUNC_3 (VAR_7, VAR_0);
  else if (VAR_9 == VAR_1)
    {
      FUNC_3 (VAR_7, VAR_3);
      FUNC_2 (VAR_7, VAR_10, VAR_3);
    }
  else if (VAR_9 == VAR_2)
    {
      FUNC_3 (VAR_7, VAR_4);
      FUNC_2 (VAR_7, VAR_10, VAR_4);
    }
  else if (VAR_9 == VAR_5)
    {
      enum cvalue_type VAR_11 =
 FUNC_1 (FUNC_4
       (VAR_8, VAR_10->formal_id));
      FUNC_3 (VAR_7, VAR_11);
      FUNC_2 (VAR_7,
       FUNC_0 (FUNC_4
        (VAR_8, VAR_10->formal_id)),
       VAR_11);
    }
}

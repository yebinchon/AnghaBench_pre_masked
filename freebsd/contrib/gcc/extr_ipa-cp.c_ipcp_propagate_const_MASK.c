
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union parameter_info {int dummy; } parameter_info ;
typedef int tree ;
struct cgraph_node {int decl; } ;
typedef enum cvalue_type { ____Placeholder_cvalue_type } cvalue_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (union parameter_info*,int,int ) ;
 char* FUNC_2 (struct cgraph_node*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__,char*,char*) ;
 int FUNC_5 (struct cgraph_node*,int) ;

__attribute__((used)) static void
FUNC_6 (struct cgraph_node *VAR_1, int VAR_2,
        union parameter_info *VAR_3 ,enum cvalue_type VAR_4)
{
  tree VAR_5;
  tree VAR_6;
  tree VAR_7;

  if (VAR_0)
    FUNC_4 (VAR_0, "propagating const to %s\n", FUNC_2 (VAR_1));
  VAR_5 = VAR_1->decl;
  VAR_7 = FUNC_5 (VAR_1, VAR_2);
  VAR_6 = FUNC_1 (VAR_3, VAR_4, FUNC_0 (VAR_7));
  FUNC_3 (VAR_5, VAR_7, VAR_6);
}

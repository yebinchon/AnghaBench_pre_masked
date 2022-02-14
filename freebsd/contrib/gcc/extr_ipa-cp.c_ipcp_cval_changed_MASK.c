
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipcp_formal {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ipcp_formal*) ;
 scalar_t__ FUNC_2 (struct ipcp_formal*) ;

__attribute__((used)) static bool
FUNC_3 (struct ipcp_formal *VAR_2, struct ipcp_formal *VAR_3)
{
  if (FUNC_2 (VAR_2) == FUNC_2 (VAR_3))
    {
      if (FUNC_2 (VAR_2) != VAR_0 &&
   FUNC_2 (VAR_2) != VAR_1)
 return 0;
      if (FUNC_0 (FUNC_1 (VAR_2),
       FUNC_1 (VAR_3),
       FUNC_2 (VAR_2),
       FUNC_2 (VAR_3)))
 return 0;
    }
  return 1;
}

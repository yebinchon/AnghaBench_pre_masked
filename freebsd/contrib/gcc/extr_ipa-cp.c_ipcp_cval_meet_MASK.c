
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipcp_formal {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ipcp_formal*) ;
 scalar_t__ FUNC_2 (struct ipcp_formal*) ;
 int FUNC_3 (struct ipcp_formal*,int ,scalar_t__) ;
 int FUNC_4 (struct ipcp_formal*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (struct ipcp_formal *VAR_2, struct ipcp_formal *VAR_3,
  struct ipcp_formal *VAR_4)
{
  if (FUNC_2 (VAR_3) == VAR_0
      || FUNC_2 (VAR_4) == VAR_0)
    {
      FUNC_4 (VAR_2, VAR_0);
      return;
    }
  if (FUNC_2 (VAR_3) == VAR_1)
    {
      FUNC_4 (VAR_2, FUNC_2 (VAR_4));
      FUNC_3 (VAR_2, FUNC_1 (VAR_4),
       FUNC_2 (VAR_4));
      return;
    }
  if (FUNC_2 (VAR_4) == VAR_1)
    {
      FUNC_4 (VAR_2, FUNC_2 (VAR_3));
      FUNC_3 (VAR_2, FUNC_1 (VAR_3),
       FUNC_2 (VAR_3));
      return;
    }
  if (!FUNC_0 (FUNC_1 (VAR_3),
    FUNC_1 (VAR_4),
    FUNC_2 (VAR_3),
    FUNC_2 (VAR_4)))
    {
      FUNC_4 (VAR_2, VAR_0);
      return;
    }
  FUNC_4 (VAR_2, FUNC_2 (VAR_3));
  FUNC_3 (VAR_2, FUNC_1 (VAR_3),
   FUNC_2 (VAR_3));
}

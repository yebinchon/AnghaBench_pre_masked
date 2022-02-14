
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct edge_list {int dummy; } ;
typedef TYPE_1__* edge ;
typedef scalar_t__ basic_block ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct edge_list*,int) ;
 scalar_t__ FUNC_1 (struct edge_list*,int) ;
 scalar_t__ FUNC_2 (struct edge_list*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (struct edge_list *VAR_3, int VAR_4)
{
  basic_block VAR_5;
  basic_block VAR_6;

  FUNC_4 (FUNC_1 (VAR_3, VAR_4) != VAR_2);

  if (FUNC_1 (VAR_3, VAR_4) == VAR_1)
    VAR_6 = FUNC_6 (VAR_1);
  else
    VAR_6 = FUNC_3 (FUNC_1 (VAR_3, VAR_4));

  for (VAR_5 = FUNC_2 (VAR_3, VAR_4);
       VAR_5 != VAR_6 && VAR_5 != VAR_2;
       VAR_5 = FUNC_3 (VAR_5))
    {
      edge VAR_7 = FUNC_0 (VAR_3, VAR_4);




      if (VAR_7->flags & VAR_0)
 continue;

      FUNC_5 (VAR_5, VAR_4);
    }
}

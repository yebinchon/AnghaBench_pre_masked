
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_4__ {int dest_idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (basic_block VAR_1, edge VAR_2, edge VAR_3)
{
  int VAR_4 = VAR_2->dest_idx;
  int VAR_5 = VAR_3->dest_idx;
  tree VAR_6;

  for (VAR_6 = FUNC_4 (VAR_1); VAR_6; VAR_6 = FUNC_1 (VAR_6))
    {
      tree VAR_7 = FUNC_0 (VAR_6, VAR_4);
      tree VAR_8 = FUNC_0 (VAR_6, VAR_5);

      FUNC_2 (VAR_7 != VAR_0);
      FUNC_2 (VAR_8 != VAR_0);

      if (!FUNC_3 (VAR_7, VAR_8))
 return 0;
    }

  return 1;
}

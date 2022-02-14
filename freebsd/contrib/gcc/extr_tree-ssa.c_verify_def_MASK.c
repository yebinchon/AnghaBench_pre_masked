
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {char* index; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_7 (basic_block VAR_2, basic_block *VAR_3, tree VAR_4,
     tree VAR_5, bool VAR_6)
{
  if (FUNC_6 (VAR_4, VAR_6))
    goto err;

  if (VAR_3[FUNC_1 (VAR_4)])
    {
      FUNC_2 ("SSA_NAME created in two different blocks %i and %i",
      VAR_3[FUNC_1 (VAR_4)]->index, VAR_2->index);
      goto err;
    }

  VAR_3[FUNC_1 (VAR_4)] = VAR_2;

  if (FUNC_0 (VAR_4) != VAR_5)
    {
      FUNC_2 ("SSA_NAME_DEF_STMT is wrong");
      FUNC_3 (VAR_1, "Expected definition statement:\n");
      FUNC_5 (VAR_1, FUNC_0 (VAR_4), VAR_0);
      FUNC_3 (VAR_1, "\nActual definition statement:\n");
      FUNC_5 (VAR_1, VAR_5, VAR_0);
      goto err;
    }

  return 0;

err:
  FUNC_3 (VAR_1, "while verifying SSA_NAME ");
  FUNC_4 (VAR_1, VAR_4, 0);
  FUNC_3 (VAR_1, " in statement\n");
  FUNC_5 (VAR_1, VAR_5, VAR_0);

  return 1;
}

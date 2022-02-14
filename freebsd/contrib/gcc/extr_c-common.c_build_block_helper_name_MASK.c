
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int unqiue_block_number; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,...) ;

tree
FUNC_9 (int VAR_2)
{
  char *VAR_3;
  if (!VAR_1)
    {

      static int VAR_4;
      VAR_3 = (char *)FUNC_6 (32);
      FUNC_8 (VAR_3, "__block_global_%d", ++VAR_4);

    }
  else
    {
      tree VAR_5 = VAR_1;

      while (VAR_5 &&
       FUNC_0 (VAR_5) && FUNC_5 (FUNC_0 (VAR_5)) == VAR_0)

  VAR_5 = FUNC_0 (VAR_5);

      if (!VAR_2)
  VAR_2 = ++FUNC_2(VAR_5)->unqiue_block_number;

      VAR_3 = (char *)FUNC_6 (FUNC_3 (FUNC_1 (VAR_5)) + 32);
      FUNC_8 (VAR_3, "__%s_block_invoke_%d",
        FUNC_4 (FUNC_1 (VAR_5)), VAR_2);
    }
   return FUNC_7 (VAR_3);
}

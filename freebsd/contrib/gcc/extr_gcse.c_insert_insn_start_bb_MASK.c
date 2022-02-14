
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {int index; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,char*,...) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_2, basic_block VAR_3)
{

  rtx VAR_4 = FUNC_6 (FUNC_1 (VAR_3));
  rtx VAR_5 = FUNC_1 (VAR_3);
  while (VAR_5 != 0)
    {
      if (! FUNC_2 (VAR_5)
   && (! FUNC_5 (VAR_5)
       || FUNC_4 (VAR_5) != VAR_0))
 break;
      VAR_4 = VAR_5;
      if (VAR_4 == FUNC_0 (VAR_3))
 break;
      VAR_5 = FUNC_3 (VAR_5);
    }

  VAR_2 = FUNC_7 (VAR_2, VAR_4);

  if (VAR_1)
    {
      FUNC_8 (VAR_1, "STORE_MOTION  insert store at start of BB %d:\n",
        VAR_3->index);
      FUNC_9 (VAR_1, VAR_2, 6);
      FUNC_8 (VAR_1, "\n");
    }
}

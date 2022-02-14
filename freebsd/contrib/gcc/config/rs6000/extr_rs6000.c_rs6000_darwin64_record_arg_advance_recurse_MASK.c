
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int fregno; int words; int intoffset; int vregno; } ;
typedef int HOST_WIDE_INT ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,scalar_t__,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_13 (CUMULATIVE_ARGS *VAR_3,
         tree VAR_4,
         HOST_WIDE_INT VAR_5)
{
  tree VAR_6;

  for (VAR_6 = FUNC_5 (VAR_4); VAR_6 ; VAR_6 = FUNC_2 (VAR_6))
    if (FUNC_3 (VAR_6) == VAR_0)
      {
 HOST_WIDE_INT VAR_7 = VAR_5;
 tree VAR_8 = FUNC_4 (VAR_6);
 enum machine_mode VAR_9;
 if (VAR_8 == VAR_2)
   continue;
 VAR_9 = FUNC_6 (VAR_8);

 if (FUNC_0 (VAR_6) != 0
     && FUNC_10 (FUNC_9 (VAR_6), 1))
   VAR_7 += FUNC_11 (VAR_6);



 if (FUNC_3 (VAR_8) == VAR_1)
   FUNC_13 (VAR_3, VAR_8, VAR_7);
 else if (FUNC_8 (VAR_3, VAR_9, VAR_8))
   {
     FUNC_12 (VAR_3, VAR_7);
     VAR_3->fregno += (FUNC_1 (VAR_9) + 7) >> 3;
     VAR_3->words += (FUNC_1 (VAR_9) + 7) >> 3;
   }
 else if (FUNC_7 (VAR_3, VAR_9, VAR_4, 1))
   {
     FUNC_12 (VAR_3, VAR_7);
     VAR_3->vregno++;
     VAR_3->words += 2;
   }
 else if (VAR_3->intoffset == -1)
   VAR_3->intoffset = VAR_7;
      }
}

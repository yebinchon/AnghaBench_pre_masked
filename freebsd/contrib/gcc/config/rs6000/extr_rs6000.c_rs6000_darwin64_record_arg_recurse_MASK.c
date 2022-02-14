
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {int intoffset; int vregno; scalar_t__ named; int fregno; } ;
typedef int HOST_WIDE_INT ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 int VAR_0 ;

 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,scalar_t__,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_1__*,int,int *,int*) ;

__attribute__((used)) static void
FUNC_15 (CUMULATIVE_ARGS *VAR_8, tree VAR_9,
        HOST_WIDE_INT VAR_10, rtx VAR_11[],
        int *VAR_12)
{
  tree VAR_13;

  for (VAR_13 = FUNC_5 (VAR_9); VAR_13 ; VAR_13 = FUNC_2 (VAR_13))
    if (FUNC_3 (VAR_13) == VAR_2)
      {
 HOST_WIDE_INT VAR_14 = VAR_10;
 tree VAR_15 = FUNC_4 (VAR_13);
 enum machine_mode VAR_16;
 if (VAR_15 == VAR_7)
   continue;
 VAR_16 = FUNC_6 (VAR_15);

 if (FUNC_0 (VAR_13) != 0
     && FUNC_12 (FUNC_9 (VAR_13), 1))
   VAR_14 += FUNC_13 (VAR_13);



 if (FUNC_3 (VAR_15) == VAR_3)
   FUNC_15 (VAR_8, VAR_15, VAR_14, VAR_11, VAR_12);
 else if (VAR_8->named && FUNC_8 (VAR_8, VAR_16, VAR_15))
   {
     FUNC_14 (VAR_8, VAR_14, VAR_11, VAR_12);
     VAR_11[(*VAR_12)++]
       = FUNC_10 (VAR_6,
       FUNC_11 (VAR_16, VAR_8->fregno++),
       FUNC_1 (VAR_14 / VAR_0));
     if (VAR_16 == VAR_5)
       VAR_8->fregno++;
   }
 else if (VAR_8->named && FUNC_7 (VAR_8, VAR_16, VAR_15, 1))
   {
     FUNC_14 (VAR_8, VAR_14, VAR_11, VAR_12);
     VAR_11[(*VAR_12)++]
       = FUNC_10 (VAR_6,
       FUNC_11 (VAR_16, VAR_8->vregno++),
       FUNC_1 (VAR_14 / VAR_0));
   }
 else if (VAR_8->intoffset == -1)
   VAR_8->intoffset = VAR_14;
      }
}

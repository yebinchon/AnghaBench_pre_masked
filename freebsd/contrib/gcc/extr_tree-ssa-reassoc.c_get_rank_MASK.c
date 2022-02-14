
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* operand_entry_t ;
struct TYPE_5__ {size_t index; } ;
struct TYPE_4__ {unsigned int rank; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 TYPE_3__* FUNC_7 (scalar_t__) ;
 unsigned int* VAR_5 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,char*,...) ;
 int FUNC_11 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static unsigned int
FUNC_14 (tree VAR_8)
{
  operand_entry_t VAR_9;


  if (FUNC_12 (VAR_8))
    return 0;
  if (FUNC_3 (VAR_8) == VAR_2)
    {
      tree VAR_10;
      tree VAR_11;
      unsigned int VAR_12, VAR_13;
      int VAR_14;

      if (FUNC_3 (FUNC_2 (VAR_8)) == VAR_1
   && VAR_8 == FUNC_8 (FUNC_2 (VAR_8)))
 return FUNC_9 (VAR_8)->rank;

      VAR_10 = FUNC_1 (VAR_8);
      if (FUNC_7 (VAR_10) == ((void*)0))
 return 0;

      if (FUNC_3 (VAR_10) != VAR_0
   || !FUNC_6 (VAR_10, VAR_3))
 return VAR_5[FUNC_7 (VAR_10)->index];


      VAR_9 = FUNC_9 (VAR_8);
      if (VAR_9)
 return VAR_9->rank;



      VAR_12 = 0;
      VAR_13 = VAR_5[FUNC_7(VAR_10)->index];
      VAR_11 = FUNC_5 (VAR_10, 1);
      if (FUNC_4 (FUNC_3 (VAR_11)) == 0)
 VAR_12 = FUNC_0 (VAR_12, FUNC_14 (VAR_11));
      else
 {
   for (VAR_14 = 0;
        VAR_14 < FUNC_4 (FUNC_3 (VAR_11))
   && FUNC_5 (VAR_11, VAR_14)
   && VAR_12 != VAR_13;
        VAR_14++)
     VAR_12 = FUNC_0(VAR_12, FUNC_14 (FUNC_5 (VAR_11, VAR_14)));
 }

      if (VAR_6 && (VAR_7 & VAR_4))
 {
   FUNC_10 (VAR_6, "Rank for ");
   FUNC_13 (VAR_6, VAR_8, 0);
   FUNC_10 (VAR_6, " is %d\n", (VAR_12 + 1));
 }


      FUNC_11 (VAR_8, (VAR_12 + 1));
      return (VAR_12 + 1);
    }


  return 0;
}

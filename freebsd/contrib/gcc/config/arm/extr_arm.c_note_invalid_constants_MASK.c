
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {scalar_t__ n_alternatives; int n_operands; scalar_t__* operand_type; scalar_t__* operand; int * operand_mode; int * operand_loc; } ;
struct TYPE_3__ {scalar_t__ memory_ok; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int ,int ,int ,scalar_t__) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__** VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static bool
FUNC_11 (rtx VAR_6, HOST_WIDE_INT VAR_7, int VAR_8)
{
  bool VAR_9 = 0;
  int VAR_10;

  FUNC_6 (VAR_6);

  if (!FUNC_5 (1))
    FUNC_7 (VAR_6);

  if (VAR_3.n_alternatives == 0)
    return 0;



  FUNC_9 ();

  for (VAR_10 = 0; VAR_10 < VAR_3.n_operands; VAR_10++)
    {

      if (VAR_3.operand_type[VAR_10] != VAR_1)
 continue;





      if (VAR_4[VAR_10][VAR_5].memory_ok)
 {
   rtx VAR_11 = VAR_3.operand[VAR_10];

   if (FUNC_0 (VAR_11))
     {
       if (VAR_8)
  FUNC_10 (VAR_6, VAR_7, VAR_3.operand_loc[VAR_10],
       VAR_3.operand_mode[VAR_10], VAR_11);
       VAR_9 = 1;
     }
   else if (FUNC_2 (VAR_11) == VAR_0
     && FUNC_2 (FUNC_3 (VAR_11, 0)) == VAR_2
     && FUNC_1 (FUNC_3 (VAR_11, 0)))
     {
       if (VAR_8)
  {
    rtx VAR_12 = FUNC_4 (VAR_11);






    if (VAR_11 == VAR_12)
      VAR_12 = FUNC_8 (FUNC_3 (VAR_11, 0));

    FUNC_10 (VAR_6, VAR_7,
         VAR_3.operand_loc[VAR_10],
         VAR_3.operand_mode[VAR_10], VAR_12);
  }

       VAR_9 = 1;
     }
 }
    }

  return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct function_arg_record_value_parms {int intoffset; int slotno; int stack; int nregs; scalar_t__ named; } ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14 (tree VAR_8, HOST_WIDE_INT VAR_9,
        struct function_arg_record_value_parms *VAR_10,
        bool VAR_11)
{
  tree VAR_12;
  if (! VAR_11)
    for (VAR_12 = FUNC_8 (VAR_8); VAR_12; VAR_12 = FUNC_5 (VAR_12))
      {
 if (FUNC_6 (VAR_12) == VAR_3 && FUNC_1 (VAR_12))
   {
     VAR_11 = 1;
     break;
   }
      }


  for (VAR_12 = FUNC_8 (VAR_8); VAR_12; VAR_12 = FUNC_5 (VAR_12))
    {
      if (FUNC_6 (VAR_12) == VAR_3)
 {
   HOST_WIDE_INT VAR_13 = VAR_9;

   if (FUNC_2 (VAR_12) != 0)
     {
       if (FUNC_13 (FUNC_2 (VAR_12)))
  continue;

       if (FUNC_11 (FUNC_10 (VAR_12), 1))
  VAR_13 += FUNC_12 (VAR_12);
     }



   if (FUNC_6 (FUNC_7 (VAR_12)) == VAR_4)
     FUNC_14 (FUNC_7 (VAR_12),
          VAR_13,
      VAR_10,
      VAR_11);
   else if ((FUNC_3 (FUNC_7 (VAR_12))
      || FUNC_6 (FUNC_7 (VAR_12)) == VAR_7)
     && VAR_6
     && VAR_10->named
     && ! VAR_11)
     {
       if (VAR_10->intoffset != -1)
  {
    unsigned int VAR_14, VAR_15;
    int VAR_16, VAR_17;

    VAR_14 = VAR_10->intoffset & -VAR_0;
    VAR_15 = (VAR_13 + VAR_0 - 1) & -VAR_0;

    VAR_16 = (VAR_15 - VAR_14) / VAR_0;
    VAR_17 = VAR_10->slotno + VAR_10->intoffset
      / VAR_0;

    if (VAR_16 > 0 && VAR_16 > VAR_5 - VAR_17)
      {
        VAR_16 = FUNC_4 (0, VAR_5 - VAR_17);

        VAR_10->stack = 1;
      }

    VAR_10->nregs += VAR_16;
    VAR_10->intoffset = -1;
  }



       if (FUNC_6 (FUNC_7 (VAR_12)) == VAR_7
    && FUNC_0 (VAR_12) == VAR_1)
  VAR_10->nregs += FUNC_9 (FUNC_7 (VAR_12));
       else if (FUNC_6 (FUNC_7 (VAR_12)) == VAR_2)
  VAR_10->nregs += 2;
       else
  VAR_10->nregs += 1;
     }
   else
     {
       if (VAR_10->intoffset == -1)
  VAR_10->intoffset = VAR_13;
     }
 }
    }
}

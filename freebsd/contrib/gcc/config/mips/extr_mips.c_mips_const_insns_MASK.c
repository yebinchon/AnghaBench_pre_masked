
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_integer_op {int dummy; } ;
typedef int rtx ;
typedef enum mips_symbol_type { ____Placeholder_mips_symbol_type } mips_symbol_type ;
typedef int HOST_WIDE_INT ;



 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

 int FUNC_4 (int ) ;

 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mips_integer_op*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int*) ;
 int * VAR_2 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int*) ;

int
FUNC_13 (rtx VAR_3)
{
  struct mips_integer_op VAR_4[VAR_0];
  enum mips_symbol_type VAR_5;
  HOST_WIDE_INT VAR_6;

  switch (FUNC_2 (VAR_3))
    {
    case 130:
      if (VAR_1
   || !FUNC_12 (FUNC_7 (VAR_3, 0), &VAR_5)
   || !VAR_2[VAR_5])
 return 0;

      return 1;

    case 132:
      if (VAR_1)




 return (FUNC_4 (VAR_3) >= 0 && FUNC_4 (VAR_3) < 256 ? 1
  : FUNC_6 (FUNC_4 (VAR_3)) ? 2
  : FUNC_4 (VAR_3) > -256 && FUNC_4 (VAR_3) < 0 ? 2
  : FUNC_6 (-FUNC_4 (VAR_3)) ? 3
  : 0);

      return FUNC_8 (VAR_4, FUNC_4 (VAR_3));

    case 133:
    case 131:
      return (!VAR_1 && VAR_3 == FUNC_0 (FUNC_3 (VAR_3)) ? 1 : 0);

    case 134:
      if (FUNC_1 (VAR_3))
 return 1;


      if (FUNC_12 (VAR_3, &VAR_5))
 return FUNC_11 (VAR_5);




      FUNC_10 (VAR_3, &VAR_3, &VAR_6);
      if (VAR_6 != 0)
 {
   int VAR_7 = FUNC_13 (VAR_3);
   if (VAR_7 != 0)
     {
       if (FUNC_5 (VAR_6))
  return VAR_7 + 1;
       else
  return VAR_7 + 1 + FUNC_8 (VAR_4, VAR_6);
     }
 }
      return 0;

    case 128:
    case 129:
      return FUNC_11 (FUNC_9 (VAR_3));

    default:
      return 0;
    }
}

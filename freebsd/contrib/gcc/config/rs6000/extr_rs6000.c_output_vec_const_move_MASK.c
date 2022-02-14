
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int) ;

const char *
FUNC_10 (rtx *VAR_3)
{
  int VAR_4, VAR_5;
  enum machine_mode VAR_6;
  rtx VAR_7, VAR_8;

  VAR_7 = VAR_3[0];
  VAR_8 = VAR_3[1];
  VAR_6 = FUNC_3 (VAR_7);

  if (VAR_0)
    {
      rtx VAR_9;
      if (FUNC_9 (VAR_8, VAR_6))
 return "vxor %0,%0,%0";

      VAR_9 = FUNC_8 (VAR_8);
      FUNC_6 (FUNC_2 (VAR_9) == VAR_2);
      VAR_3[1] = FUNC_5 (VAR_9, 0);
      if (!FUNC_1 (FUNC_4 (VAR_3[1])))
 return "#";

      switch (FUNC_3 (VAR_9))
 {
 case 129:
   return "vspltisw %0,%1";

 case 128:
   return "vspltish %0,%1";

 case 130:
   return "vspltisb %0,%1";

 default:
   FUNC_7 ();
 }
    }

  FUNC_6 (VAR_1);






  VAR_4 = FUNC_4 (FUNC_0 (VAR_8, 0));
  VAR_5 = FUNC_4 (FUNC_0 (VAR_8, 1));
  VAR_3[1] = FUNC_0 (VAR_8, 0);
  VAR_3[2] = FUNC_0 (VAR_8, 1);
  if (VAR_4 == VAR_5)
    return "li %0,%1\n\tevmergelo %0,%0,%0";
  else
    return "li %0,%1\n\tevmergelo %0,%0,%0\n\tli %0,%2";
}

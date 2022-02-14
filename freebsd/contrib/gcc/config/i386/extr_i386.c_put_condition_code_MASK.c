
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*,int*,int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (enum rtx_code VAR_3, enum machine_mode VAR_4, int VAR_5,
      int VAR_6, FILE *VAR_7)
{
  const char *VAR_8;

  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
    {
      enum rtx_code VAR_9, VAR_10;
      FUNC_4 (VAR_3, &VAR_10, &VAR_3, &VAR_9);
      FUNC_1 (VAR_10 == VAR_2 && VAR_9 == VAR_2);
      VAR_3 = FUNC_3 (VAR_3);
      VAR_4 = 140;
    }
  if (VAR_5)
    VAR_3 = FUNC_5 (VAR_3);

  switch (VAR_3)
    {
    case 139:
      VAR_8 = "e";
      break;
    case 130:
      VAR_8 = "ne";
      break;
    case 136:
      FUNC_1 (VAR_4 == 140 || VAR_4 == 141 || VAR_4 == 143);
      VAR_8 = "g";
      break;
    case 135:


      FUNC_1 (VAR_4 == 140);
      VAR_8 = VAR_6 ? "nbe" : "a";
      break;
    case 132:
      switch (VAR_4)
 {
 case 141:
 case 142:
   VAR_8 = "s";
   break;

 case 140:
 case 143:
   VAR_8 = "l";
   break;

 default:
   FUNC_2 ();
 }
      break;
    case 131:
      FUNC_1 (VAR_4 == 140);
      VAR_8 = "b";
      break;
    case 138:
      switch (VAR_4)
 {
 case 141:
 case 142:
   VAR_8 = "ns";
   break;

 case 140:
 case 143:
   VAR_8 = "ge";
   break;

 default:
   FUNC_2 ();
 }
      break;
    case 137:

      FUNC_1 (VAR_4 == 140);
      VAR_8 = VAR_6 ? "nb" : "ae";
      break;
    case 134:
      FUNC_1 (VAR_4 == 140 || VAR_4 == 143 || VAR_4 == 141);
      VAR_8 = "le";
      break;
    case 133:
      FUNC_1 (VAR_4 == 140);
      VAR_8 = "be";
      break;
    case 128:
      VAR_8 = VAR_6 ? "u" : "p";
      break;
    case 129:
      VAR_8 = VAR_6 ? "nu" : "np";
      break;
    default:
      FUNC_2 ();
    }
  FUNC_0 (VAR_8, VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (int ) ;


 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

 int const FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char* VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;

 int VAR_3 ;
 int VAR_4 ;




 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 char* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int * VAR_8 ;
 int FUNC_14 (int *,char const*) ;
 int VAR_9 ;
 int FUNC_15 (int *,char*,unsigned long,...) ;
 int FUNC_16 (char*,int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ) ;
 char* FUNC_19 (int ,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char,int *) ;

__attribute__((used)) static void
FUNC_24 (FILE *VAR_10, rtx VAR_11, int VAR_12)
{
  char VAR_13[256];

  switch (FUNC_4 (VAR_11))
    {
    case 140:
      FUNC_17 (VAR_9);
      FUNC_23 ('.', VAR_10);
      break;

    case 138:
      if (! VAR_6 || VAR_5)
 FUNC_21 (VAR_10, VAR_11);
      else
 {
   const char *VAR_14 = FUNC_11 (VAR_11, 0);


   if (FUNC_7 (VAR_11))
     FUNC_20 (FUNC_7 (VAR_11));






   FUNC_14 (VAR_10, VAR_14);
 }
      if (!VAR_6 && VAR_12 == 'P' && ! FUNC_8 (VAR_11))
 FUNC_16 ("@PLT", VAR_10);
      break;

    case 142:
      VAR_11 = FUNC_9 (VAR_11, 0);

    case 146:
      FUNC_0 (VAR_13, "L", FUNC_1 (VAR_11));
      FUNC_14 (VAR_8, VAR_13);
      break;

    case 143:
      FUNC_15 (VAR_10, VAR_2, FUNC_6 (VAR_11));
      break;

    case 145:


      FUNC_24 (VAR_10, FUNC_9 (VAR_11, 0), VAR_12);
      break;

    case 144:
      if (FUNC_5 (VAR_11) == VAR_7)
 {

   if (FUNC_2 (VAR_11) || FUNC_3 (VAR_11) < 0)
     FUNC_15 (VAR_10, "0x%lx%08lx",
       (unsigned long) FUNC_2 (VAR_11),
       (unsigned long) FUNC_3 (VAR_11));
   else
     FUNC_15 (VAR_10, VAR_2, FUNC_3 (VAR_11));
 }
      else


 FUNC_22 ("floating constant misused");
      break;

    case 139:

      if (FUNC_4 (FUNC_9 (VAR_11, 0)) == 143)
 {
   FUNC_24 (VAR_10, FUNC_9 (VAR_11, 0), VAR_12);
   FUNC_23 ('+', VAR_10);
   FUNC_24 (VAR_10, FUNC_9 (VAR_11, 1), VAR_12);
 }
      else
 {
   FUNC_17 (FUNC_4 (FUNC_9 (VAR_11, 1)) == 143);
   FUNC_24 (VAR_10, FUNC_9 (VAR_11, 1), VAR_12);
   FUNC_23 ('+', VAR_10);
   FUNC_24 (VAR_10, FUNC_9 (VAR_11, 0), VAR_12);
 }
      break;

    case 141:
      if (!VAR_6)
 FUNC_23 (VAR_1 == VAR_0 ? '(' : '[', VAR_10);
      FUNC_24 (VAR_10, FUNC_9 (VAR_11, 0), VAR_12);
      FUNC_23 ('-', VAR_10);
      FUNC_24 (VAR_10, FUNC_9 (VAR_11, 1), VAR_12);
      if (!VAR_6)
 FUNC_23 (VAR_1 == VAR_0 ? ')' : ']', VAR_10);
      break;

     case 137:
       FUNC_17 (FUNC_13 (VAR_11, 0) == 1);
       FUNC_24 (VAR_10, FUNC_12 (VAR_11, 0, 0), VAR_12);
       switch (FUNC_10 (VAR_11, 1))
 {
 case 135:
   FUNC_16 ("@GOT", VAR_10);
   break;
 case 133:
   FUNC_16 ("@GOTOFF", VAR_10);
   break;
 case 132:
   FUNC_16 ("@GOTPCREL(%rip)", VAR_10);
   break;
 case 131:

   FUNC_16 ("@GOTTPOFF", VAR_10);
   break;
 case 128:
   FUNC_16 ("@TPOFF", VAR_10);
   break;
 case 129:
   if (VAR_5)
     FUNC_16 ("@TPOFF", VAR_10);
   else
     FUNC_16 ("@NTPOFF", VAR_10);
   break;
 case 136:
   FUNC_16 ("@DTPOFF", VAR_10);
   break;
 case 134:
   if (VAR_5)
     FUNC_16 ("@GOTTPOFF(%rip)", VAR_10);
   else
     FUNC_16 ("@GOTNTPOFF", VAR_10);
   break;
 case 130:
   FUNC_16 ("@INDNTPOFF", VAR_10);
   break;
 default:
   FUNC_22 ("invalid UNSPEC as operand");
   break;
 }
       break;

    default:
      FUNC_22 ("invalid expression as operand");
    }
}

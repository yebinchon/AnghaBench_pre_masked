
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_address {int base; int disp; int indx; } ;
typedef int rtx ;
typedef int FILE ;





 int FUNC_0 (int ) ;

 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_4 (int ) ;



 size_t FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int *,int ) ;
 char** VAR_9 ;
 char* FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,struct s390_address*) ;
 int FUNC_24 (int ,int ,int) ;

void
FUNC_25 (FILE *VAR_10, rtx VAR_11, int VAR_12)
{
  switch (VAR_12)
    {
    case 'C':
      FUNC_13 (VAR_10, FUNC_22 (VAR_11, VAR_0));
      return;

    case 'D':
      FUNC_13 (VAR_10, FUNC_22 (VAR_11, VAR_4));
      return;

    case 'J':
      if (FUNC_1 (VAR_11) == 128)
 {
   FUNC_13 (VAR_10, "%s", ":tls_load:");
   FUNC_18 (VAR_10, VAR_11);
 }
      else if (FUNC_1 (VAR_11) == VAR_5 && FUNC_8 (VAR_11, 1) == VAR_6)
 {
   FUNC_13 (VAR_10, "%s", ":tls_gdcall:");
   FUNC_18 (VAR_10, FUNC_9 (VAR_11, 0, 0));
 }
      else if (FUNC_1 (VAR_11) == VAR_5 && FUNC_8 (VAR_11, 1) == VAR_7)
 {
   FUNC_13 (VAR_10, "%s", ":tls_ldcall:");
   FUNC_10 (VAR_10, FUNC_17 ());
 }
      else
 FUNC_15 ();
      return;

    case 'G':
      FUNC_13 (VAR_10, "%u", FUNC_3 (FUNC_2 (VAR_11)));
      return;

    case 'O':
      {
        struct s390_address VAR_13;
 int VAR_14;

        FUNC_14 (FUNC_1 (VAR_11) == 130);
 VAR_14 = FUNC_23 (FUNC_7 (VAR_11, 0), &VAR_13);
 FUNC_14 (VAR_14);
 FUNC_14 (!VAR_13.base || FUNC_6 (FUNC_5 (VAR_13.base)));
 FUNC_14 (!VAR_13.indx);

        if (VAR_13.disp)
          FUNC_18 (VAR_10, VAR_13.disp);
        else
          FUNC_13 (VAR_10, "0");
      }
      return;

    case 'R':
      {
        struct s390_address VAR_15;
 int VAR_16;

        FUNC_14 (FUNC_1 (VAR_11) == 130);
 VAR_16 = FUNC_23 (FUNC_7 (VAR_11, 0), &VAR_15);
 FUNC_14 (VAR_16);
 FUNC_14 (!VAR_15.base || FUNC_6 (FUNC_5 (VAR_15.base)));
 FUNC_14 (!VAR_15.indx);

        if (VAR_15.base)
          FUNC_13 (VAR_10, "%s", VAR_9[FUNC_5 (VAR_15.base)]);
        else
          FUNC_13 (VAR_10, "0");
      }
      return;

    case 'S':
      {
 struct s390_address VAR_17;
 int VAR_18;

        FUNC_14 (FUNC_1 (VAR_11) == 130);
 VAR_18 = FUNC_23 (FUNC_7 (VAR_11, 0), &VAR_17);
 FUNC_14 (VAR_18);
 FUNC_14 (!VAR_17.base || FUNC_6 (FUNC_5 (VAR_17.base)));
 FUNC_14 (!VAR_17.indx);

 if (VAR_17.disp)
   FUNC_18 (VAR_10, VAR_17.disp);
 else
   FUNC_13 (VAR_10, "0");

 if (VAR_17.base)
   FUNC_13 (VAR_10, "(%s)", VAR_9[FUNC_5 (VAR_17.base)]);
      }
      return;

    case 'N':
      if (FUNC_1 (VAR_11) == 129)
 VAR_11 = FUNC_16 (FUNC_2 (VAR_11), FUNC_5 (VAR_11) + 1);
      else if (FUNC_1 (VAR_11) == 130)
 VAR_11 = FUNC_11 (VAR_11, VAR_8, FUNC_20 (FUNC_7 (VAR_11, 0), 4));
      else
        FUNC_15 ();
      break;

    case 'M':
      if (FUNC_1 (VAR_11) == 129)
 VAR_11 = FUNC_16 (FUNC_2 (VAR_11), FUNC_5 (VAR_11) + 1);
      else if (FUNC_1 (VAR_11) == 130)
 VAR_11 = FUNC_11 (VAR_11, VAR_8, FUNC_20 (FUNC_7 (VAR_11, 0), 8));
      else
        FUNC_15 ();
      break;

    case 'Y':
      FUNC_21 (VAR_10, VAR_11);
      return;
    }

  switch (FUNC_1 (VAR_11))
    {
    case 129:
      FUNC_13 (VAR_10, "%s", VAR_9[FUNC_5 (VAR_11)]);
      break;

    case 130:
      FUNC_19 (FUNC_7 (VAR_11, 0));
      break;

    case 134:
    case 135:
    case 131:
    case 128:
      FUNC_18 (VAR_10, VAR_11);
      break;

    case 132:
      if (VAR_12 == 'b')
        FUNC_13 (VAR_10, VAR_2, FUNC_4 (VAR_11) & 0xff);
      else if (VAR_12 == 'x')
        FUNC_13 (VAR_10, VAR_2, FUNC_4 (VAR_11) & 0xffff);
      else if (VAR_12 == 'h')
        FUNC_13 (VAR_10, VAR_2, ((FUNC_4 (VAR_11) & 0xffff) ^ 0x8000) - 0x8000);
      else if (VAR_12 == 'i')
 FUNC_13 (VAR_10, VAR_2,
   FUNC_24 (VAR_11, VAR_1, 0));
      else if (VAR_12 == 'j')
 FUNC_13 (VAR_10, VAR_2,
   FUNC_24 (VAR_11, VAR_1, -1));
      else if (VAR_12 == 'k')
  FUNC_13 (VAR_10, VAR_2,
    FUNC_24 (VAR_11, VAR_3, 0));
      else if (VAR_12 == 'm')
  FUNC_13 (VAR_10, VAR_2,
    FUNC_24 (VAR_11, VAR_3, -1));
      else if (VAR_12 == 'o')
 FUNC_13 (VAR_10, VAR_2, FUNC_4 (VAR_11) & 0xffffffff);
      else
        FUNC_13 (VAR_10, VAR_2, FUNC_4 (VAR_11));
      break;

    case 133:
      FUNC_14 (FUNC_2 (VAR_11) == VAR_8);
      if (VAR_12 == 'b')
        FUNC_13 (VAR_10, VAR_2, FUNC_0 (VAR_11) & 0xff);
      else if (VAR_12 == 'x')
        FUNC_13 (VAR_10, VAR_2, FUNC_0 (VAR_11) & 0xffff);
      else if (VAR_12 == 'h')
        FUNC_13 (VAR_10, VAR_2, ((FUNC_0 (VAR_11) & 0xffff) ^ 0x8000) - 0x8000);
      else
        FUNC_15 ();
      break;

    default:
      FUNC_12 ("UNKNOWN in print_operand !?", VAR_11);
      break;
    }
}

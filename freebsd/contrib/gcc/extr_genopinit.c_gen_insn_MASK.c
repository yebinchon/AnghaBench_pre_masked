
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int MAX_MACHINE_MODE ;


 size_t FUNC_0 (char**) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 char const FUNC_6 (char const) ;
 char const FUNC_7 (char const) ;
 scalar_t__* FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int * VAR_10 ;
 char** VAR_11 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char const) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13 (rtx VAR_12)
{
  const char *VAR_13 = FUNC_8 (VAR_12, 0);
  int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
  size_t VAR_17;
  int VAR_18;
  const char *VAR_19, *VAR_20, *VAR_21, *VAR_22;



  if (*VAR_13 == 0)
    return;




  for (VAR_17 = 0; VAR_17 < FUNC_0 (VAR_11); VAR_17++)
    {
      int VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
      int VAR_26 = 0;
      int VAR_27 = 1;

      for (VAR_20 = VAR_11[VAR_17]; VAR_20[0] != '$' || VAR_20[1] != '('; VAR_20++)
 ;

      for (VAR_20 += 2, VAR_19 = VAR_13; VAR_27 && ! (VAR_20[0] == '$' && VAR_20[1] == ')');
    VAR_20++)
 {
   if (*VAR_20 != '$')
     {
       if (*VAR_20 != *VAR_19++)
  break;
     }
   else
     switch (*++VAR_20)
       {
       case 'N':
  VAR_26 = 1;
  break;
       case 'I':
  VAR_24 = 1;
  break;
       case 'P':
                VAR_25 = 1;
                break;
       case 'F':
  VAR_23 = 1;
  break;
       case 'V':
                break;
       case 'c':
  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++)
    {
      for (VAR_21 = FUNC_4(VAR_16), VAR_22 = VAR_19; *VAR_21; VAR_21++, VAR_22++)
        if (*VAR_21 != *VAR_22)
   break;




      if (*VAR_21 == 0 && *VAR_22 == 0
   && (FUNC_3 (VAR_16) == VAR_9
       || FUNC_3 (VAR_16) == VAR_8))
        break;
    }

  if (VAR_16 == VAR_7)
    VAR_27 = 0;
  else
    VAR_19 += FUNC_12 (FUNC_4(VAR_16));
  break;
       case 'a':
       case 'b':




  for (VAR_18 = (MAX_MACHINE_MODE) - 1; VAR_18 >= 0; VAR_18--)
    {
      for (VAR_21 = FUNC_1(VAR_18), VAR_22 = VAR_19; *VAR_21; VAR_21++, VAR_22++)
        if (FUNC_6 (*VAR_21) != *VAR_22)
   break;

      if (*VAR_21 == 0
   && (! VAR_24 || VAR_10[VAR_18] == VAR_3
       || VAR_10[VAR_18] == VAR_6)
          && (! VAR_25
                            || VAR_10[VAR_18] == VAR_3
                            || VAR_10[VAR_18] == VAR_4
       || VAR_10[VAR_18] == VAR_6)
   && (! VAR_23
       || VAR_10[VAR_18] == VAR_2
       || VAR_10[VAR_18] == VAR_1
       || VAR_10[VAR_18] == VAR_0
       || VAR_10[VAR_18] == VAR_5))
        break;
    }

  if (VAR_18 < 0)
    VAR_27 = 0;
  else if (*VAR_20 == 'a')
    VAR_14 = VAR_18, VAR_19 += FUNC_12 (FUNC_1(VAR_18));
  else
    VAR_15 = VAR_18, VAR_19 += FUNC_12 (FUNC_1(VAR_18));

  VAR_24 = VAR_25 = VAR_23 = 0;
  break;

       default:
  FUNC_9 ();
       }
 }

      if (VAR_27 && VAR_20[0] == '$' && VAR_20[1] == ')'
   && *VAR_19 == 0
   && (! VAR_26 || (int) FUNC_2(VAR_14) == VAR_15))
 break;
    }

  if (VAR_17 == FUNC_0 (VAR_11))
    return;




  if (*FUNC_8 (VAR_12, 2) != 0)
    FUNC_10 ("  if (HAVE_%s)\n  ", VAR_13);

  FUNC_10 ("  ");


  for (VAR_20 = VAR_11[VAR_17]; *VAR_20; VAR_20++)
    {
      if (*VAR_20 != '$')
 FUNC_11 (*VAR_20);
      else
 switch (*++VAR_20)
   {
   case '(': case ')':
   case 'I': case 'F': case 'N':
     break;
   case 'V':
     if (FUNC_5 (VAR_14))
              FUNC_10 ("v");
            break;
   case 'a':
     for (VAR_19 = FUNC_1(VAR_14); *VAR_19; VAR_19++)
       FUNC_11 (FUNC_6 (*VAR_19));
     break;
   case 'b':
     for (VAR_19 = FUNC_1(VAR_15); *VAR_19; VAR_19++)
       FUNC_11 (FUNC_6 (*VAR_19));
     break;
   case 'A':
     FUNC_10 ("%smode", FUNC_1(VAR_14));
     break;
   case 'B':
     FUNC_10 ("%smode", FUNC_1(VAR_15));
     break;
   case 'c':
     FUNC_10 ("%s", FUNC_4(VAR_16));
     break;
   case 'C':
     for (VAR_19 = FUNC_4(VAR_16); *VAR_19; VAR_19++)
       FUNC_11 (FUNC_7 (*VAR_19));
     break;
   }
    }

  FUNC_10 (";\n");
}

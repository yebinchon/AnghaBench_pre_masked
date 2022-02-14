
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char,char const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char,char const*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char,char const*) ;
 int VAR_3 ;
 int FUNC_4 (char,char const*) ;
 int FUNC_5 (int ,char,char const*) ;
 int FUNC_6 (char,char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (char,char const*) ;
 int VAR_10 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_11 ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int VAR_12 ;

int
FUNC_22 (rtx VAR_13, const char *VAR_14)
{
  int VAR_15 = 0;


  FUNC_17 (!VAR_12);

  while (*VAR_14)
    {
      char VAR_16 = *VAR_14;
      int VAR_17;
      switch (VAR_16)
 {
 case ',':
   VAR_14++;
   continue;
 case '=':
 case '+':
 case '*':
 case '%':
 case '!':
 case '#':
 case '&':
 case '?':
   break;

 case '0': case '1': case '2': case '3': case '4':
 case '5': case '6': case '7': case '8': case '9':




   do
     VAR_14++;
   while (FUNC_11 (*VAR_14));
   if (! VAR_15)
     VAR_15 = -1;
   continue;

 case 'p':
   if (FUNC_16 (VAR_13, VAR_10))
     VAR_15 = 1;
   break;

 case 'm':
 case 'V':
   if (FUNC_19 (VAR_13, VAR_10))
     VAR_15 = 1;
   break;

 case 'o':
   if (FUNC_20 (VAR_13))
     VAR_15 = 1;
   break;

 case '<':







   if (FUNC_13 (VAR_13)
       && (1
    || FUNC_7 (FUNC_15 (VAR_13, 0)) == VAR_8
    || FUNC_7 (FUNC_15 (VAR_13, 0)) == VAR_6))
     VAR_15 = 1;
   break;

 case '>':
   if (FUNC_13 (VAR_13)
       && (1
    || FUNC_7 (FUNC_15 (VAR_13, 0)) == VAR_9
    || FUNC_7 (FUNC_15 (VAR_13, 0)) == VAR_7))
     VAR_15 = 1;
   break;

 case 'E':
 case 'F':
   if (FUNC_7 (VAR_13) == VAR_1
       || (FUNC_7 (VAR_13) == VAR_3
    && FUNC_9 (FUNC_8 (VAR_13)) == VAR_4))
     VAR_15 = 1;
   break;

 case 'G':
   if (FUNC_7 (VAR_13) == VAR_1
       && FUNC_2 (VAR_13, 'G', VAR_14))
     VAR_15 = 1;
   break;
 case 'H':
   if (FUNC_7 (VAR_13) == VAR_1
       && FUNC_2 (VAR_13, 'H', VAR_14))
     VAR_15 = 1;
   break;

 case 's':
   if (FUNC_7 (VAR_13) == VAR_2
       || (FUNC_7 (VAR_13) == VAR_1
    && FUNC_8 (VAR_13) == VAR_10))
     break;


 case 'i':
   if (FUNC_0 (VAR_13) && (! VAR_11 || FUNC_12 (VAR_13)))
     VAR_15 = 1;
   break;

 case 'n':
   if (FUNC_7 (VAR_13) == VAR_2
       || (FUNC_7 (VAR_13) == VAR_1
    && FUNC_8 (VAR_13) == VAR_10))
     VAR_15 = 1;
   break;

 case 'I':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'I', VAR_14))
     VAR_15 = 1;
   break;
 case 'J':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'J', VAR_14))
     VAR_15 = 1;
   break;
 case 'K':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'K', VAR_14))
     VAR_15 = 1;
   break;
 case 'L':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'L', VAR_14))
     VAR_15 = 1;
   break;
 case 'M':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'M', VAR_14))
     VAR_15 = 1;
   break;
 case 'N':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'N', VAR_14))
     VAR_15 = 1;
   break;
 case 'O':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'O', VAR_14))
     VAR_15 = 1;
   break;
 case 'P':
   if (FUNC_7 (VAR_13) == VAR_2
       && FUNC_3 (FUNC_10 (VAR_13), 'P', VAR_14))
     VAR_15 = 1;
   break;

 case 'X':
   VAR_15 = 1;
   break;

 case 'g':
   if (FUNC_18 (VAR_13, VAR_10))
     VAR_15 = 1;
   break;

 default:


   if (FUNC_14 (VAR_16, VAR_14) != VAR_5)
     {
     case 'r':
       if (FUNC_8 (VAR_13) == VAR_0)
  break;
       if (FUNC_21 (VAR_13, VAR_10))
  VAR_15 = 1;
     }
   break;
 }
      VAR_17 = FUNC_1 (VAR_16, VAR_14);
      do
 VAR_14++;
      while (--VAR_17 && *VAR_14);
      if (VAR_17)
 return 0;
    }

  return VAR_15;
}

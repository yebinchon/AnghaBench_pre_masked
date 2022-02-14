
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 () ;
 int VAR_1 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int* VAR_6 ;
 int FUNC_15 (char*,char*,int) ;
 char VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 char* VAR_12 ;
 int FUNC_16 (int) ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (int*,char*,int) ;
 int VAR_16 ;
 int * FUNC_18 (int ,int) ;
 int FUNC_19 (int*) ;
 int FUNC_20 (char*,int) ;
 int* VAR_17 ;
 int* VAR_18 ;
 int VAR_19 ;

int
FUNC_21 (int (*VAR_20) (char *, int), char *VAR_21, int VAR_22)
{
  char *VAR_23 = VAR_21;
  char *VAR_24 = VAR_21 + VAR_22;
  char *VAR_25;
  char *VAR_26;
  int VAR_27;
  register int VAR_28, VAR_29 = 0;

  static char VAR_30;
  if (VAR_13 != ((void*)0))
    {
      VAR_25 = VAR_13;
      VAR_26 = VAR_25 + VAR_14;
    }
  else
    {
      VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5);
      if (VAR_27 == 0)
 return 0;
      VAR_25 = VAR_5;
      VAR_26 = VAR_25 + VAR_27;
    }

  while (1)
    {



      switch (VAR_16)
 {
 case -1:
   VAR_28 = *VAR_12++;
   if (*VAR_12 == '\0')
     {
       VAR_16 = VAR_10;
       VAR_10 = 3;
     }
   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   continue;

 case -2:
   for (;;)
     {
       do
  {
    VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));

    if (VAR_28 == 141)
      {
        FUNC_12 (FUNC_10("end of file in comment"));
        goto fromeof;
      }

    if (VAR_28 == '\n')
      do { *VAR_23++ = ('\n'); if (VAR_23 >= VAR_24) goto tofull; } while (0);
  }
       while (VAR_28 != '*');

       while ((VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))))) == '*')
  ;

       if (VAR_28 == 141)
  {
    FUNC_12 (FUNC_10("end of file in comment"));
    goto fromeof;
  }

       if (VAR_28 == '/')
  break;

       (*--VAR_25 = (VAR_28));
     }

   VAR_16 = VAR_10;
   (*--VAR_25 = (' '));
   continue;

 case 4:
   VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
   if (VAR_28 == 141)
     goto fromeof;
   else if (VAR_28 >= '0' && VAR_28 <= '9')
     do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   else
     {
       while (VAR_28 != 141 && FUNC_7 (VAR_28))
  VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
       if (VAR_28 == '"')
  {
    VAR_30 = VAR_28;
    VAR_16 = 5;
    VAR_10 = 3;
    do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
  }
       else
  {
    while (VAR_28 != 141 && VAR_28 != '\n')
      VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
    VAR_16 = 0;
    do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
  }
     }
   continue;

 case 5:




   {
     char *VAR_31;
     int VAR_32;

     for (VAR_31 = VAR_25; VAR_31 < VAR_26; VAR_31++)
       {
  VAR_28 = *VAR_31;
  if (VAR_28 == '\\'
      || VAR_28 == VAR_30
      || VAR_28 == '\n')
    break;
       }
     VAR_32 = VAR_31 - VAR_25;
     if (VAR_32 > VAR_24 - VAR_23)
       VAR_32 = VAR_24 - VAR_23;
     if (VAR_32 > 0)
       {
  FUNC_15 (VAR_23, VAR_25, VAR_32);
  VAR_23 += VAR_32;
  VAR_25 += VAR_32;
  if (VAR_23 >= VAR_24)
    goto tofull;
       }
   }

   VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
   if (VAR_28 == 141)
     {
       FUNC_12 (FUNC_10("end of file in string; '%c' inserted"), VAR_30);
       VAR_16 = VAR_10;
       (*--VAR_25 = ('\n'));
       do { *VAR_23++ = (VAR_30); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }
   else if (VAR_28 == VAR_30)
     {
       VAR_16 = VAR_10;
       do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }

   else if (VAR_28 == '\\')
     {
       VAR_16 = 6;
       do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }

   else if (VAR_15 && VAR_28 == '\n')
     {


       VAR_16 = VAR_10;
       (*--VAR_25 = (VAR_28));
       do { *VAR_23++ = ('\''); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }
   else
     {
       do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }
   continue;

 case 6:
   VAR_16 = 5;
   VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
   switch (VAR_28)
     {


     case '\n':
       (*--VAR_25 = ('n'));
       VAR_1++;
       do { *VAR_23++ = ('\\'); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       continue;

     case 141:
       FUNC_12 (FUNC_10("end of file in string; '%c' inserted"), VAR_30);
       do { *VAR_23++ = (VAR_30); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       continue;

     case '"':
     case '\\':
     case 'b':
     case 'f':
     case 'n':
     case 'r':
     case 't':
     case 'v':
     case 'x':
     case 'X':
     case '0':
     case '1':
     case '2':
     case '3':
     case '4':
     case '5':
     case '6':
     case '7':
       break;

     default:



       break;
     }
   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   continue;
 }




      VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
    recycle:
      if (VAR_28 == 141)
 {
   if (VAR_16 != 0)
     {
       FUNC_12 (FUNC_10("end of file not at end of a line; newline inserted"));
       VAR_16 = 0;
       do { *VAR_23++ = ('\n'); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }
   goto fromeof;
 }

      switch (VAR_6[VAR_28])
 {
 case 128:
   do
     {
       VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
     }
   while (VAR_28 != 141 && FUNC_7 (VAR_28));
   if (VAR_28 == 141)
     goto fromeof;

   if (VAR_16 == 0)
     {


       VAR_16 = 1;
       (*--VAR_25 = (VAR_28));
       do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     }
   if (FUNC_2 (VAR_28)
       || VAR_28 == '/'
       || FUNC_3 (VAR_28)
       || FUNC_5 (VAR_28))
     {
       if (VAR_15)
  {

    (*--VAR_25 = (VAR_28));
    do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    break;
  }
       goto recycle;
     }






   if ((VAR_16 == 2 || VAR_16 == 11)
       && VAR_6[VAR_28] == 140
       && ! VAR_15)
     {
       VAR_16 = 1;
       do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     }

   switch (VAR_16)
     {
     case 1:


       goto recycle;
     case 2:
       VAR_16 = 3;
       if (VAR_23 + 1 < VAR_24)
  {

    do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    goto recycle;
  }
       (*--VAR_25 = (VAR_28));
       do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     case 3:
       if (VAR_15)
  {

    (*--VAR_25 = (VAR_28));
    do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    break;
  }
       goto recycle;
     case 9:
     case 10:
       if (VAR_15)
  {

    VAR_16 = 3;
    (*--VAR_25 = (VAR_28));
    do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    break;
  }
       VAR_16 = 10;
       goto recycle;
     case 11:
       if (VAR_0 || VAR_2)
  VAR_16 = 1;
       else
  {




    VAR_16 = 3;
  }
       (*--VAR_25 = (VAR_28));
       do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     default:
       FUNC_0 (VAR_16);
     }
   break;

 case 129:
   VAR_29 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
   if (VAR_29 == '*')
     {
       for (;;)
  {
    do
      {
        VAR_29 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
        if (VAR_29 != 141 && FUNC_4 (VAR_29))
   VAR_1++;
      }
    while (VAR_29 != 141 && VAR_29 != '*');

    while (VAR_29 == '*')
      VAR_29 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));

    if (VAR_29 == 141 || VAR_29 == '/')
      break;



    (*--VAR_25 = (VAR_29));
  }

       if (VAR_29 == 141)
  FUNC_12 (FUNC_10("end of file in multiline comment"));

       VAR_28 = ' ';
       goto recycle;
     }
   else
     {
       if (VAR_29 != 141)
  (*--VAR_25 = (VAR_29));
       if (VAR_16 == 9 || VAR_16 == 10)
  VAR_16 = 3;
       do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
     }
   break;

 case 131:
   VAR_30 = VAR_28;
   if (VAR_16 == 10)
     {

       (*--VAR_25 = (VAR_28));
       VAR_16 = 3;
       do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);



       VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
       VAR_10 = 3;
     }
   else if (VAR_16 == 9)
     VAR_10 = 3;
   else
     VAR_10 = VAR_16;
   VAR_16 = 5;
   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;


 case 133:
   if (VAR_16 == 10)
     {

       (*--VAR_25 = (VAR_28));
       VAR_16 = 3;
       do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     }
   VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
   if (VAR_28 == 141)
     {
       FUNC_12 (FUNC_10("end of file after a one-character quote; \\0 inserted"));
       VAR_28 = 0;
     }
   if (VAR_28 == '\\')
     {
       VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
       if (VAR_28 == 141)
  {
    FUNC_12 (FUNC_10("end of file in escape character"));
    VAR_28 = '\\';
  }
       else
  VAR_28 = FUNC_16 (VAR_28);
     }
   FUNC_17 (VAR_11, "%d", (int) (unsigned char) VAR_28);


   if ((VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))))) != '\'')
     {



       if (VAR_28 != 141)
  (*--VAR_25 = (VAR_28));

     }
   if (FUNC_19 (VAR_11) == 1)
     {
       do { *VAR_23++ = (VAR_11[0]); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     }
   if (VAR_16 == 9)
     VAR_10 = 3;
   else
     VAR_10 = VAR_16;
   VAR_16 = -1;
   VAR_12 = VAR_11;
   do { *VAR_23++ = (*VAR_12++); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;


 case 140:



   if (VAR_16 == 9 || VAR_16 == 10)
     VAR_16 = 3;
   else if (VAR_16 != 3)
     VAR_16 = 1;

   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;

 case 134:

   if (VAR_1)
     {
       --VAR_1;
       (*--VAR_25 = (VAR_28));
     }


 case 135:
   VAR_16 = 0;
   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;

 case 132:
   VAR_16 = 1;
   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;
 case 136:




   if (VAR_28 == '/')
     {
       VAR_29 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
       if (VAR_29 == '*')
  {
    VAR_10 = 3;
    VAR_16 = -2;
    break;
  }
       else
  {
    (*--VAR_25 = (VAR_29));
  }
     }

   if (VAR_16 == 0 || VAR_16 == 1)
     {
       int VAR_33;

       VAR_33 = VAR_28;

       do
  {
    VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
  }
       while (VAR_28 != 141 && FUNC_7 (VAR_28));

       if (VAR_28 == 141)
  {
    FUNC_12 (FUNC_10("end of file in comment; newline inserted"));
    do { *VAR_23++ = ('\n'); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    break;
  }

       if (VAR_28 < '0' || VAR_28 > '9' || VAR_16 != 0 || VAR_33 != '#')
  {

    while (VAR_28 != 141 && !FUNC_4 (VAR_28))
      VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
    if (VAR_28 == 141)
      FUNC_12 (FUNC_10("end of file in comment; newline inserted"));
    VAR_16 = 0;
    do { *VAR_23++ = ('\n'); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    break;
  }

       (*--VAR_25 = (VAR_28));
       VAR_10 = 4;
       VAR_16 = -1;
       if (VAR_15)
  VAR_12 = "\tlinefile ";
       else
  VAR_12 = "\t.linefile ";
       do { *VAR_23++ = (*VAR_12++); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     }
   if (FUNC_18 (VAR_19, VAR_28) == ((void*)0)
       && (! VAR_15
    || (VAR_28 != '!' && VAR_28 != '*')))
     goto de_fault;
   if (VAR_15
       && (VAR_28 == '!' || VAR_28 == '*' || VAR_28 == '#')
       && VAR_16 != 1
       && VAR_16 != 10)
     goto de_fault;

 case 139:
   do
     {
       VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
     }
   while (VAR_28 != 141 && !FUNC_4 (VAR_28));
   if (VAR_28 == 141)
     FUNC_12 (FUNC_10("end of file in comment; newline inserted"));
   VAR_16 = 0;
   do { *VAR_23++ = ('\n'); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;

 case 130:
   if (VAR_16 == 10)
     {



       (*--VAR_25 = (VAR_28));
       VAR_16 = 3;
       do { *VAR_23++ = (' '); if (VAR_23 >= VAR_24) goto tofull; } while (0);
       break;
     }
   if (VAR_16 == 3)
     VAR_16 = 9;



   if (VAR_23 + 1 < VAR_24
       && VAR_9 == ((void*)0)



       )
     {
       char *VAR_34;
       int VAR_35;

       for (VAR_34 = VAR_25; VAR_34 < VAR_26; VAR_34++)
  {
    int VAR_36;

    VAR_29 = *(unsigned char *) VAR_34;
    VAR_36 = VAR_6[VAR_29];
    if (VAR_36 != 0
        && VAR_36 != 130)
      break;
  }

       if (VAR_34 > VAR_25)


  --VAR_34;

       VAR_35 = VAR_34 - VAR_25;

       if (VAR_35 > (VAR_24 - VAR_23) - 1)
  VAR_35 = (VAR_24 - VAR_23) - 1;

       if (VAR_35 > 0)
  {
    do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
    FUNC_15 (VAR_23, VAR_25, VAR_35);
    VAR_23 += VAR_35;
    VAR_25 += VAR_35;
    if (VAR_23 >= VAR_24)
      goto tofull;
    VAR_28 = (VAR_25 < VAR_26 ? * (unsigned char *) (VAR_25++) : (VAR_13 = ((void*)0), VAR_27 = (*VAR_20) (VAR_5, sizeof VAR_5), VAR_25 = VAR_5, VAR_26 = VAR_25 + VAR_27, (VAR_27 == 0 ? 141 : * (unsigned char *) (VAR_25++))));
  }
     }


 default:
 de_fault:

   if (VAR_16 == 0)
     {
       VAR_16 = 11;
     }
   else if (VAR_16 == 1)
     {
       VAR_16 = 2;
     }
   else if (VAR_16 == 9)
     {
       if (!FUNC_6 (VAR_28))
  VAR_16 = 3;
     }
   else if (VAR_16 == 10)
     {
       if (VAR_28 == '\\')
  {
    if (VAR_23 + 1 >= VAR_24)
      {



        (*--VAR_25 = (VAR_28));
        goto tofull;
      }
    *VAR_23++ = ' ';
  }

       VAR_16 = 3;
     }
   do { *VAR_23++ = (VAR_28); if (VAR_23 >= VAR_24) goto tofull; } while (0);
   break;
 }
    }



 fromeof:

  return VAR_23 - VAR_21;

 tofull:


  if (VAR_26 > VAR_25)
    {
      VAR_13 = VAR_25;
      VAR_14 = VAR_26 - VAR_25;
    }
  else
    VAR_13 = ((void*)0);

  return VAR_23 - VAR_21;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*,int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*,char,int) ;
 char* FUNC_10 (char*,int) ;
 int FUNC_11 (char*,...) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (char*,int*) ;
 char* FUNC_18 (char*,char) ;
 int FUNC_19 (char*) ;

void
FUNC_20()
{
 char *VAR_8 = ((void*)0);
 char **VAR_9 = ((void*)0);
 int VAR_10 = 0;
 int VAR_11 = 0;
 bool VAR_12 = 0;
 char *VAR_13;
 int VAR_14;
 char *VAR_15;
 int VAR_16;
 char VAR_17[1024];
 char VAR_18[4096];

 FUNC_9(VAR_17, '\0', sizeof VAR_17);
 (void) FUNC_7(VAR_17, sizeof VAR_17 - 1);
 if (VAR_17[0] == '\0')
  FUNC_15(VAR_17, "localhost", sizeof VAR_17);

 FUNC_11("220 %s LMTP ready\r\n", VAR_17);
 for (;;)
 {
  (void) FUNC_3(VAR_7);
  if (FUNC_4(VAR_18, sizeof(VAR_18) - 1, VAR_6) == ((void*)0))
   FUNC_13(VAR_0);
  VAR_15 = VAR_18 + FUNC_19(VAR_18) - 1;
  if (VAR_15 >= VAR_18 && *VAR_15 == '\n')
   *VAR_15-- = '\0';
  if (VAR_15 >= VAR_18 && *VAR_15 == '\r')
   *VAR_15-- = '\0';

  switch (VAR_18[0])
  {
    case 'd':
    case 'D':
   if (FUNC_14(VAR_18, "data") == 0)
   {
    bool VAR_19 = 0;

    if (VAR_10 == 0)
    {
     FUNC_8("503 5.5.1", "No recipients");
     continue;
    }
    VAR_3 = 1;
    VAR_14 = FUNC_17(VAR_8, &VAR_19);
    VAR_3 = 0;
    if (VAR_14 < 0 && !VAR_19)
    {
     FUNC_5();
     continue;
    }

    for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
    {
     if (VAR_14 < 0)
     {

      FUNC_5();
      continue;
     }
     VAR_15 = FUNC_18(VAR_9[VAR_16], '+');
     if (VAR_15 != ((void*)0))
      *VAR_15 = '\0';
     FUNC_2(VAR_14, VAR_9[VAR_16]);
    }
    if (VAR_14 >= 0)
     (void) FUNC_1(VAR_14);
    goto rset;
   }
   goto syntaxerr;

   break;

    case 'l':
    case 'L':
   if (FUNC_16(VAR_18, "lhlo ", 5) == 0)
   {

    if (VAR_12)
    {
     FUNC_8("503", "%s Duplicate LHLO",
            VAR_17);
     continue;
    }
    VAR_12 = 1;
    FUNC_11("250-%s\r\n", VAR_17);
    if (VAR_2)
     FUNC_11("250-8BITMIME\r\n");
    FUNC_11("250-ENHANCEDSTATUSCODES\r\n");
    FUNC_11("250 PIPELINING\r\n");
    continue;
   }
   goto syntaxerr;

   break;

    case 'm':
    case 'M':
   if (FUNC_16(VAR_18, "mail ", 5) == 0)
   {
    if (VAR_8 != ((void*)0))
    {
     FUNC_8("503 5.5.1",
      "Nested MAIL command");
     continue;
    }
    if (FUNC_16(VAR_18 + 5, "from:", 5) != 0 ||
        ((VAR_8 = FUNC_10(VAR_18 + 10,
             0)) == ((void*)0)))
    {
     FUNC_8("501 5.5.4",
      "Syntax error in parameters");
     continue;
    }
    FUNC_11("250 2.5.0 Ok\r\n");
    continue;
   }
   goto syntaxerr;

   break;

    case 'n':
    case 'N':
   if (FUNC_14(VAR_18, "noop") == 0)
   {
    FUNC_11("250 2.0.0 Ok\r\n");
    continue;
   }
   goto syntaxerr;

   break;

    case 'q':
    case 'Q':
   if (FUNC_14(VAR_18, "quit") == 0)
   {
    FUNC_11("221 2.0.0 Bye\r\n");
    FUNC_13(VAR_0);
   }
   goto syntaxerr;

   break;

    case 'r':
    case 'R':
   if (FUNC_16(VAR_18, "rcpt ", 5) == 0)
   {
    if (VAR_8 == ((void*)0))
    {
     FUNC_8("503 5.5.1",
      "Need MAIL command");
     continue;
    }
    if (VAR_10 >= VAR_11)
    {
     VAR_11 += VAR_4;
     VAR_9 = (char **)
      FUNC_0((char *) VAR_9,
       VAR_11 *
       sizeof(char **));
     if (VAR_9 == ((void*)0))
     {
      FUNC_8("421 4.3.0",
       "Memory exhausted");
      FUNC_13(VAR_1);
     }
    }
    if (FUNC_16(VAR_18 + 5, "to:", 3) != 0 ||
        ((VAR_9[VAR_10] = FUNC_10(VAR_18 + 8,
              VAR_5)) == ((void*)0)))
    {
     FUNC_8("501 5.5.4",
      "Syntax error in parameters");
     continue;
    }
    VAR_13 = FUNC_12(VAR_9[VAR_10]);
    if (VAR_13 != ((void*)0))
    {
     FUNC_8(((void*)0), "%s", VAR_13);
     continue;
    }
    VAR_10++;
    FUNC_11("250 2.1.5 Ok\r\n");
    continue;
   }
   else if (FUNC_14(VAR_18, "rset") == 0)
   {
    FUNC_11("250 2.0.0 Ok\r\n");

rset:
    while (VAR_10 > 0)
     FUNC_6(VAR_9[--VAR_10]);
    if (VAR_8 != ((void*)0))
     FUNC_6(VAR_8);
    VAR_8 = ((void*)0);
    continue;
   }
   goto syntaxerr;

   break;

    case 'v':
    case 'V':
   if (FUNC_16(VAR_18, "vrfy ", 5) == 0)
   {
    FUNC_11("252 2.3.3 Try RCPT to attempt delivery\r\n");
    continue;
   }
   goto syntaxerr;

   break;

    default:
  syntaxerr:
   FUNC_8("500 5.5.2", "Syntax error");
   continue;

   break;
  }
 }
}

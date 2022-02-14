
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 unsigned int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*,char**) ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char*) ;

__attribute__((used)) static void
FUNC_14 (void)
{
  FILE *VAR_1 = FUNC_7 ("i386-opc.tbl", "r");
  char VAR_2[2048];
  unsigned int VAR_3;
  char *VAR_4, *VAR_5, *VAR_6;
  char *VAR_7, *VAR_8, *VAR_9, *VAR_10;
  char *VAR_11, *VAR_12, *VAR_13 [VAR_0];

  if (VAR_1 == ((void*)0))
    FUNC_4 (FUNC_2("can't find i386-opc.tbl for reading\n"));

  FUNC_9 ("\n/* i386 opcode table.  */\n\n");
  FUNC_9 ("const template i386_optab[] =\n{\n");

  while (!FUNC_5 (VAR_1))
    {
      if (FUNC_6 (VAR_2, sizeof (VAR_2), VAR_1) == ((void*)0))
 break;

      VAR_5 = FUNC_10 (VAR_2);


      VAR_4 = FUNC_13 (VAR_5, "//");
      if (VAR_4 != ((void*)0))
 VAR_4[0] = '\0';


      FUNC_11 (VAR_5);

      switch (VAR_5[0])
 {
 case '#':
   FUNC_9 ("%s\n", VAR_5);
 case '\0':
   continue;
   break;
 default:
   break;
 }

      VAR_6 = VAR_5 + FUNC_12 (VAR_5);


      VAR_7 = FUNC_8 (VAR_5, &VAR_4);

      if (VAR_4 >= VAR_6)
 FUNC_3 ();


      VAR_8 = FUNC_8 (VAR_4, &VAR_4);

      if (VAR_4 >= VAR_6)
 FUNC_3 ();


      VAR_9 = FUNC_8 (VAR_4, &VAR_4);

      if (VAR_4 >= VAR_6)
 FUNC_3 ();


      VAR_10 = FUNC_8 (VAR_4, &VAR_4);

      if (VAR_4 >= VAR_6)
 FUNC_3 ();


      VAR_11 = FUNC_8 (VAR_4, &VAR_4);

      if (VAR_4 >= VAR_6)
 FUNC_3 ();


      VAR_12 = FUNC_8 (VAR_4, &VAR_4);

      if (VAR_4 >= VAR_6)
 FUNC_3 ();


      VAR_4 = FUNC_10 (VAR_4);
      if (*VAR_4 != '{')
 FUNC_3 ();
      VAR_4 = FUNC_10 (VAR_4 + 1);

      VAR_3 = FUNC_12 (VAR_4);


      if (VAR_3 < 2)
 FUNC_3 ();


      do
 {
   VAR_3--;
   if (FUNC_1 (VAR_4[VAR_3]) || VAR_4[VAR_3] == '}')
     VAR_4[VAR_3] = '\0';
   else
     break;
 }
      while (VAR_3 != 0);

      VAR_6 = VAR_4 + VAR_3;


      for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_13); VAR_3++)
 {
   if (VAR_4 >= VAR_6)
     {
       VAR_13 [VAR_3] = ((void*)0);
       break;
     }

   VAR_13 [VAR_3] = FUNC_8 (VAR_4, &VAR_4);
   if (*VAR_13[VAR_3] == '0')
     {
       if (VAR_3 != 0)
  VAR_13[VAR_3] = ((void*)0);
       break;
     }
 }

      FUNC_9 ("  { \"%s\", %s, %s, %s, %s,\n",
       VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_11);

      FUNC_9 ("    %s,\n", VAR_12);

      FUNC_9 ("    { ");

      for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_13); VAR_3++)
 {
   if (VAR_13[VAR_3] == ((void*)0)
       || *VAR_13[VAR_3] == '0')
     {
       if (VAR_3 == 0)
  FUNC_9 ("0");
       break;
     }

   if (VAR_3 != 0)
     FUNC_9 (",\n      ");

   FUNC_9 ("%s", VAR_13[VAR_3]);
 }
      FUNC_9 (" } },\n");
    }

  FUNC_9 ("  { NULL, 0, 0, 0, 0, 0, { 0 } }\n");
  FUNC_9 ("};\n");
}

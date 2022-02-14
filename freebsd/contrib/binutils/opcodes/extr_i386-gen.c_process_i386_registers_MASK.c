
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char**) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12 (void)
{
  FILE *VAR_0 = FUNC_5 ("i386-reg.tbl", "r");
  char VAR_1[2048];
  char *VAR_2, *VAR_3, *VAR_4;
  char *VAR_5, *VAR_6, *VAR_7, *VAR_8;

  if (VAR_0 == ((void*)0))
    FUNC_2 (FUNC_0("can't find i386-reg.tbl for reading\n"));

  FUNC_7 ("\n/* i386 register table.  */\n\n");
  FUNC_7 ("const reg_entry i386_regtab[] =\n{\n");

  while (!FUNC_3 (VAR_0))
    {
      if (FUNC_4 (VAR_1, sizeof (VAR_1), VAR_0) == ((void*)0))
 break;

      VAR_3 = FUNC_8 (VAR_1);


      VAR_2 = FUNC_11 (VAR_3, "//");
      if (VAR_2 != ((void*)0))
 VAR_2[0] = '\0';


      FUNC_9 (VAR_3);

      switch (VAR_3[0])
 {
 case '#':
   FUNC_7 ("%s\n", VAR_3);
 case '\0':
   continue;
   break;
 default:
   break;
 }

      VAR_4 = VAR_3 + FUNC_10 (VAR_3);


      VAR_5 = FUNC_6 (VAR_3, &VAR_2);

      if (VAR_2 >= VAR_4)
 FUNC_1 ();


      VAR_6 = FUNC_6 (VAR_2, &VAR_2);

      if (VAR_2 >= VAR_4)
 FUNC_1 ();


      VAR_7 = FUNC_6 (VAR_2, &VAR_2);

      if (VAR_2 >= VAR_4)
 FUNC_1 ();


      VAR_8 = FUNC_6 (VAR_2, &VAR_2);

      FUNC_7 ("  { \"%s\", %s, %s, %s },\n",
       VAR_5, VAR_6, VAR_7, VAR_8);
    }

  FUNC_7 ("};\n");

  FUNC_7 ("\nconst unsigned int i386_regtab_size = ARRAY_SIZE (i386_regtab);\n");
}

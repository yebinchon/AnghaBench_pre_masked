
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {int dummy; } ;
typedef enum pass { ____Placeholder_pass } pass ;
typedef int FILE ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,struct pex_obj*) ;
 int VAR_9 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,int,int *) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_10 ;
 int FUNC_9 (char*) ;
 char* VAR_11 ;
 struct pex_obj* FUNC_10 (int ,char*,int *) ;
 int * FUNC_11 (struct pex_obj*,int ) ;
 char* FUNC_12 (struct pex_obj*,int ,char*,char**,int *,int *,int*) ;
 scalar_t__ FUNC_13 (int ,void (*) (int)) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_14 (const char *VAR_15, enum pass VAR_16)
{
  void (*VAR_17) (int);



  char *VAR_18[4];
  const char **VAR_19 = (const char **) VAR_18;
  int VAR_20 = 0;
  struct pex_obj *VAR_21;
  const char *VAR_22;
  int VAR_23;
  char *VAR_24, VAR_25[1024];
  FILE *VAR_26;

  if (VAR_16 == VAR_2)
    return;


  if (VAR_11 == 0)
    FUNC_4 ("cannot find 'nm'");

  VAR_19[VAR_20++] = VAR_11;
  if (VAR_0[0] != '\0')
    VAR_19[VAR_20++] = VAR_0;

  VAR_19[VAR_20++] = VAR_15;
  VAR_19[VAR_20++] = (char *) 0;


  if (VAR_14)
    {
      const char **VAR_27;
      const char *VAR_28;

      for (VAR_27 = &VAR_19[0]; (VAR_28 = *VAR_27) != (char *) 0; VAR_27++)
 FUNC_8 (VAR_12, " %s", VAR_28);

      FUNC_8 (VAR_12, "\n");
    }

  FUNC_6 (VAR_13);
  FUNC_6 (VAR_12);

  VAR_21 = FUNC_10 (VAR_3, "collect2", ((void*)0));
  if (VAR_21 == ((void*)0))
    FUNC_5 ("pex_init failed");

  VAR_22 = FUNC_12 (VAR_21, 0, VAR_11, VAR_18, ((void*)0), ((void*)0), &VAR_23);
  if (VAR_22 != ((void*)0))
    {
      if (VAR_23 != 0)
 {
   VAR_9 = VAR_23;
   FUNC_5 ("%s", VAR_22);
 }
      else
 FUNC_4 ("%s", VAR_22);
    }

  VAR_17 = (void (*) (int)) FUNC_13 (VAR_4, FUNC_1);




  VAR_26 = FUNC_11 (VAR_21, 0);
  if (VAR_26 == ((void*)0))
    FUNC_5 ("can't open nm output");

  if (VAR_7)
    FUNC_8 (VAR_12, "\nnm output with constructors/destructors.\n");


  while (FUNC_7 (VAR_25, sizeof VAR_25, VAR_26) != (char *) 0)
    {
      int VAR_29, VAR_30;
      char *VAR_31, *VAR_32;




      for (VAR_24 = VAR_25; (VAR_29 = *VAR_24) != '\0' && VAR_29 != '\n' && VAR_29 != '_'; VAR_24++)
 if (VAR_29 == ' ' && VAR_24[1] == 'U' && VAR_24[2] == ' ')
   break;

      if (VAR_29 != '_')
 continue;

      VAR_31 = VAR_24;


      for (VAR_32 = VAR_24; (VAR_30 = *VAR_32) != '\0' && !FUNC_0 (VAR_30) && VAR_30 != '|';
    VAR_32++)
 continue;


      *VAR_32 = '\0';
      switch (FUNC_9 (VAR_31))
 {
 case 1:
   if (VAR_16 != VAR_1)
     FUNC_2 (&VAR_6, VAR_31);
   break;

 case 2:
   if (VAR_16 != VAR_1)
     FUNC_2 (&VAR_8, VAR_31);
   break;

 case 3:
   if (VAR_16 != VAR_1)
     FUNC_4 ("init function found in object %s", VAR_15);

   FUNC_2 (&VAR_6, VAR_31);

   break;

 case 4:
   if (VAR_16 != VAR_1)
     FUNC_4 ("fini function found in object %s", VAR_15);

   FUNC_2 (&VAR_8, VAR_31);

   break;

 case 5:
   if (VAR_16 != VAR_1)
     FUNC_2 (&VAR_10, VAR_31);
   break;

 default:
   continue;
 }

      if (VAR_7)
 FUNC_8 (VAR_12, "\t%s\n", VAR_25);
    }

  if (VAR_7)
    FUNC_8 (VAR_12, "\n");

  FUNC_3 (VAR_11, VAR_21);

  FUNC_13 (VAR_4, VAR_17);



}

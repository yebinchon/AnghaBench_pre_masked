
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum demangling_styles { ____Placeholder_demangling_styles } demangling_styles ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,char***) ;
 int VAR_9 ;
 int FUNC_11 (int ,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int,char**,char*,int ,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (int ,...) ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (char*) ;
 char* VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,char*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_20 (char*,char*) ;
 char* VAR_28 ;
 int FUNC_21 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (char*) ;

int
FUNC_24 (int VAR_31, char **VAR_32)
{
  int VAR_33;
  int VAR_34;
  FUNC_5 (VAR_5, VAR_4);
  FUNC_21 (VAR_5);

  VAR_20 = *VAR_32;
  FUNC_23 (VAR_20);

  FUNC_2 (VAR_20, 0);

  FUNC_10 (&VAR_31, &VAR_32);

  FUNC_4 ();
  FUNC_16 ();

  while ((VAR_33 = FUNC_12 (VAR_31, VAR_32, "aABCDef:gHhlnopPrSst:uvVvX:",
      VAR_13, (int *) 0)) != VAR_0)
    {
      switch (VAR_33)
 {
 case 'a':
   VAR_18 = 1;
   break;
 case 'A':
 case 'o':
   VAR_11 = 1;
   break;
 case 'B':
   FUNC_17 ("bsd");
   break;
 case 'C':
   VAR_6 = 1;
   if (VAR_15 != ((void*)0))
     {
       enum demangling_styles VAR_35;

       VAR_35 = FUNC_6 (VAR_15);
       if (VAR_35 == VAR_30)
  FUNC_11 (FUNC_3("unknown demangling style `%s'"),
         VAR_15);

       FUNC_7 (VAR_35);
     }
   break;
 case 'D':
   VAR_7 = 1;
   break;
 case 'e':

   break;
 case 'f':
   FUNC_17 (VAR_15);
   break;
 case 'g':
   VAR_9 = 1;
   break;
 case 'H':
 case 'h':
   FUNC_22 (VAR_27, 0);
 case 'l':
   VAR_12 = 1;
   break;
 case 'n':
 case 'v':
   VAR_25 = 1;
   break;
 case 'p':
   VAR_14 = 1;
   break;
 case 'P':
   FUNC_17 ("posix");
   break;
 case 'r':
   VAR_21 = 1;
   break;
 case 's':
   VAR_17 = 1;
   break;
 case 'S':
   VAR_19 = 1;
   break;
 case 't':
   FUNC_18 (VAR_15);
   break;
 case 'u':
   VAR_29 = 1;
   break;
 case 'V':
   VAR_23 = 1;
   break;
 case 'X':







   if (FUNC_20 (VAR_15, "32_64") != 0)
     FUNC_11 (FUNC_3("Only -X 32_64 is supported"));
   break;

 case 128:
   VAR_28 = VAR_15;
   break;

 case 0:
   break;

 default:
   FUNC_22 (VAR_26, 1);
 }
    }

  if (VAR_23)
    FUNC_14 ("nm");

  if (VAR_24 && VAR_29)
    {
      FUNC_13 (FUNC_3("Using the --size-sort and --undefined-only options together"));
      FUNC_13 (FUNC_3("will produce no output, since undefined symbols have no size."));
      return 0;
    }


  if (VAR_16 == VAR_31)
    return !FUNC_8 ("a.out");

  VAR_34 = 0;

  if (VAR_31 - VAR_16 > 1)
    VAR_10 = 1;


  while (VAR_16 < VAR_31)
    {
      FUNC_1 (1);
      if (!FUNC_8 (VAR_32[VAR_16++]))
 VAR_34++;
    }

  FUNC_0 (VAR_20);
  FUNC_9 (VAR_34);
  return VAR_34;
}

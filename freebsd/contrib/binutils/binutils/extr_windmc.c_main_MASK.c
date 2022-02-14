
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unichar ;
typedef int rc_uint_type ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 char* VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int*,char***) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,int,long,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,int ,int ) ;
 long FUNC_12 (int *) ;
 int FUNC_13 (int,char**,char*,int ,int*) ;
 int VAR_9 ;
 char* FUNC_14 (long) ;
 int * FUNC_15 (int *,char*) ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 char* VAR_12 ;
 int * FUNC_18 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 char* VAR_20 ;
 void* VAR_21 ;
 char* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_19 (char*,int ,long) ;
 char* VAR_28 ;
 int VAR_29 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (void**,int*,char*,int ) ;
 char* VAR_30 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int *,char*) ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (char*,char*,char*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_27 (char*) ;
 void* FUNC_28 (char*,char) ;
 void* FUNC_29 (char*,char**,int) ;
 scalar_t__ VAR_33 ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *,int **,char*,void*) ;
 int FUNC_32 (int) ;
 int FUNC_33 (int ,int) ;
 int FUNC_34 () ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int ) ;
 char* FUNC_39 (int ) ;
 int FUNC_40 (char*) ;
 char* FUNC_41 (char const*) ;
 scalar_t__ FUNC_42 () ;

int
FUNC_43 (int VAR_34, char **VAR_35)
{
  FILE *VAR_36;
  int VAR_37;
  char *VAR_38, *VAR_39;
  int VAR_40;







  FUNC_2 (VAR_5, VAR_4);
  FUNC_30 (VAR_5);

  VAR_30 = VAR_35[0];
  FUNC_40 (VAR_30);

  FUNC_4 (&VAR_34, &VAR_35);

  FUNC_1 ();
  FUNC_23 ();

  VAR_38 = ((void*)0);
  VAR_40 = 0;
  VAR_39 = ((void*)0);

  FUNC_22 ();

  while ((VAR_37 = FUNC_13 (VAR_34, VAR_35, "C:F:O:h:e:m:r:x:aAbcdHunoUvV", VAR_9,
      (int *) 0)) != VAR_1)
    {
      switch (VAR_37)
 {
 case 'b':
   VAR_24 = 1;
   break;
 case 'e':
   {
     VAR_20 = VAR_28;
     if (VAR_20[0] != '.' && VAR_20[0] != 0)
       {
  char *VAR_41 = FUNC_39 (FUNC_27 (VAR_20) + 2);

  FUNC_26 (VAR_41, ".%s", VAR_20);
  VAR_20 = VAR_41;
       }
   }
   break;
 case 'h':
   VAR_19 = FUNC_18 (VAR_28);
   break;
 case 'r':
   VAR_25 = FUNC_18 (VAR_28);
   break;
 case 'a':
   VAR_26 = 0;
   break;
 case 'x':
   if (*VAR_28 != 0)
     VAR_18 = FUNC_18 (VAR_28);
   break;
 case 'A':
   VAR_14 = 0;
   break;
 case 'd':
   VAR_23 = 1;
   break;
 case 'u':
   VAR_26 = 1;
   break;
 case 'U':
   VAR_14 = 1;
   break;
 case 'c':
   VAR_17 = 1;
   break;
 case 'n':
   VAR_13 = 1;
   break;
 case 'o':
   VAR_27 = 1;
   FUNC_5 ("option -o is not implemented until yet.\n");
   break;
 case 'F':
   VAR_38 = VAR_28;
   break;
 case 'v':
   VAR_40 ++;
   break;
 case 'm':
   VAR_21 = FUNC_29 (VAR_28, (char **) ((void*)0), 10);
   break;
 case 'C':
   VAR_15 = FUNC_29 (VAR_28, (char **) ((void*)0), 10);
   break;
 case 'O':
   VAR_16 = FUNC_29 (VAR_28, (char **) ((void*)0), 10);
   break;
 case '?':
 case 'H':
   FUNC_33 (VAR_32, 0);
   break;
 case 'V':
   FUNC_20 ("windmc");
   break;

 default:
   FUNC_33 (VAR_31, 1);
   break;
 }
    }
  if (VAR_39 == ((void*)0) && VAR_29 < VAR_34)
    {
      VAR_39 = VAR_35[VAR_29];
      ++VAR_29;
    }

  FUNC_24 (((void*)0), VAR_38);

  if (VAR_39 == ((void*)0))
    {
      FUNC_8 (VAR_31, "Error: No input file was specified.\n");
      FUNC_33 (VAR_31, 1);
    }
  FUNC_17 (VAR_39);

  if (!FUNC_21 (&VAR_15, &VAR_26, "codepage_in", 0))
    FUNC_33 (VAR_31, 1);
  if (VAR_16 == 0)
    VAR_16 = 1252;
  if (! FUNC_32 (VAR_16))
    FUNC_5 ("Code page 0x%x is unknown.", (unsigned int) VAR_16);
  if (VAR_16 == VAR_0)
    FUNC_5 ("UTF16 is no valid text output code page.");
  if (VAR_40)
    {
      FUNC_8 (VAR_31, "// Default target is %s and it is %s endian.\n",
 VAR_8, (VAR_33 ? "big" : "little"));
      FUNC_8 (VAR_31, "// Input codepage: 0x%x\n", (unsigned int) VAR_15);
      FUNC_8 (VAR_31, "// Output codepage: 0x%x\n", (unsigned int) VAR_16);
    }

  if (VAR_34 != VAR_29)
    FUNC_33 (VAR_31, 1);


  {
    const char *VAR_42, *VAR_43;
    char *VAR_44;

    VAR_42 = FUNC_28 (VAR_39, '/');
    VAR_43 = FUNC_28 (VAR_39, '\\');
    if (! VAR_42)
      VAR_42 = VAR_43;
    if (VAR_42 && VAR_43 && VAR_42 < VAR_43)
      VAR_42 = VAR_43;
    if (! VAR_42)
      VAR_42 = VAR_39;
    else
      VAR_42++;
    VAR_22 = VAR_44 = FUNC_41 (VAR_42);


    if ((VAR_44 = FUNC_28 (VAR_44, '.')) != ((void*)0))
      *VAR_44 = 0;
  }


  {
    unichar *VAR_45;
    rc_uint_type VAR_46;
    char *VAR_47;
    long VAR_48;
    FILE *VAR_49 = FUNC_7 (VAR_39, "rb");

    if (!VAR_49)
      FUNC_5 (FUNC_0("unable to open file ,%s' for input.\n"), VAR_39);

    FUNC_11 (VAR_49, 0, VAR_6);
    VAR_48 = FUNC_12 (VAR_49);
    FUNC_11 (VAR_49, 0, VAR_7);
    VAR_47 = FUNC_14 (VAR_48 + 3);
    FUNC_19 (VAR_47, 0, VAR_48 + 3);
    FUNC_9 (VAR_47, 1, VAR_48, VAR_49);
    FUNC_6 (VAR_49);
    if (VAR_26 != 1)
      {
 FUNC_31 (&VAR_46, &VAR_45, VAR_47, VAR_15);
 if (! VAR_45)
   FUNC_5 ("Failed to convert input to UFT16\n");
 FUNC_16 (VAR_45);
      }
    else
      {
 if ((VAR_48 & 1) != 0)
   FUNC_5 (FUNC_0("input file does not seems to be UFT16.\n"));
 FUNC_16 ((unichar *) VAR_47);
      }
    FUNC_10 (VAR_47);
  }

  while (FUNC_42 ())
    ;

  FUNC_3 ();

  VAR_36 = FUNC_15 (VAR_19, VAR_20);
  FUNC_36 (VAR_36);
  FUNC_6 (VAR_36);

  VAR_36 = FUNC_15 (VAR_25, ".rc");
  FUNC_37 (VAR_36);
  FUNC_6 (VAR_36);

  if (VAR_18 != ((void*)0))
    {
      VAR_36 = FUNC_15 (VAR_18, ".dbg");
      FUNC_35 (VAR_36);
      FUNC_6 (VAR_36);
    }
  FUNC_34 ();

  if (VAR_11)
    FUNC_10 (VAR_11);
  if (VAR_12)
    FUNC_10 (VAR_12);
  if (VAR_10)
    FUNC_10 (VAR_10);

  FUNC_38 (0);
  return 0;
}

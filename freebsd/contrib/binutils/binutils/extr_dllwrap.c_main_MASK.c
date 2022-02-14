
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_5__ {char* s; int length; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 char* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 () ;
 int FUNC_3 (int) ;
 char* VAR_7 ;
 char* FUNC_4 (char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int) ;
 char* VAR_18 ;
 int FUNC_8 (int) ;
 char* VAR_19 ;
 int FUNC_9 (int*,char***) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (char*) ;
 char* VAR_20 ;
 int FUNC_12 (int,char**,char*,int ,int*) ;
 int VAR_21 ;
 char* VAR_22 ;
 char* FUNC_13 (char*) ;
 void* VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_14 (char*) ;
 char* VAR_26 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (char*,char*,...) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (char*,char) ;
 int FUNC_20 (char*,char*) ;
 unsigned long FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,char*,size_t) ;
 char* FUNC_24 (char*,char) ;
 scalar_t__ FUNC_25 (char*,char*) ;
 char* VAR_29 ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,int ) ;
 int VAR_30 ;
 int FUNC_28 (char*) ;
 int VAR_31 ;
 scalar_t__ FUNC_29 (size_t) ;
 char* FUNC_30 (char*) ;

int
FUNC_31 (int VAR_32, char **VAR_33)
{
  int VAR_34;
  int VAR_35;

  char **VAR_36 = 0;
  int VAR_37 = 0;

  int VAR_38 = 0;

  int *VAR_39;
  int *VAR_40;

  char *VAR_41 = 0;
  char *VAR_42 = 0;

  dyn_string_t VAR_43;
  dyn_string_t VAR_44;

  int VAR_45 = 0;

  char *VAR_46 = 0;

  VAR_26 = VAR_33[0];







  FUNC_1 (VAR_4, VAR_3);
  FUNC_26 (VAR_4);

  FUNC_9 (&VAR_32, &VAR_33);

  VAR_36 = (char **) FUNC_29 (VAR_32 * sizeof (char*));
  VAR_39 = (int *) FUNC_29 (VAR_32 * sizeof (int));
  VAR_40 = (int *) FUNC_29 (VAR_32 * sizeof (int));
  for (VAR_35 = 0; VAR_35 < VAR_32; ++VAR_35)
    {
      size_t VAR_47 = FUNC_22 (VAR_33[VAR_35]);
      char *VAR_48 = (char *) FUNC_29 (VAR_47 + 1);
      FUNC_20 (VAR_48, VAR_33[VAR_35]);
      VAR_37 += VAR_47;
      VAR_36[VAR_35] = VAR_48;
      VAR_39[VAR_35] = 0;
      VAR_40[VAR_35] = 1;
    }
  VAR_37++;





  VAR_24 = 0;
  while ((VAR_34 = FUNC_12 (VAR_32, VAR_33, "nkAqve:Uho:l:L:I:",
    VAR_21, (int *) 0)) != VAR_0)
    {
      int VAR_49;
      int VAR_50;
      int VAR_51;

      VAR_49 = 0;
      VAR_50 = 1;
      VAR_51 = 0;

      if (VAR_34 != '?')
 {




   VAR_50 = 0;
 }


      switch (VAR_34)
 {
 case 'h':
   FUNC_27 (VAR_28, 0);
   break;
 case 'q':
   VAR_30 = 0;
   break;
 case 'v':
   VAR_30 = 1;
   break;
 case 128:
   FUNC_14 (VAR_26);
   break;
 case 'e':
   VAR_18 = VAR_23;
   break;
 case 133:
   VAR_46 = VAR_23;
   break;
 case 140:
   VAR_8 = VAR_23;
   VAR_45 = 1;
   VAR_10 = 0;
   break;
 case 'n':
   VAR_15 = 1;
   VAR_49 = 1;
   break;
 case 'o':
   VAR_12 = VAR_23;
   break;
 case 'I':
 case 'l':
 case 'L':
   VAR_50 = 1;
   break;
 case 139:
   VAR_13 = VAR_23;
   break;
 case 135:
   VAR_17 = 1;
   break;
 case 136:
   VAR_16 = VAR_23;
   break;
 case 137:
   VAR_41 = VAR_23;
   break;
 case 138:
   VAR_14 = VAR_23;
   break;
 case 129:
   VAR_29 = VAR_23;
   break;
 case 132:
   VAR_29 = "i386-mingw32";
   break;
 case 141:
   VAR_6 = VAR_23;
   VAR_9 = 0;
   break;
 case 131:
   VAR_19 = VAR_23;
   VAR_11 = 0;
   break;
 case 134:
   VAR_38 = 1;
   break;
 case 130:
   VAR_42 = VAR_23;
   break;
 case '?':
   break;
 default:
   VAR_49 = 1;
   break;
 }


      if (VAR_23
   && VAR_36[VAR_25-1][0] == '-'
   && VAR_36[VAR_25-1][1] == '-'
   && FUNC_19 (VAR_36[VAR_25-1], '='))
 VAR_51 = 1;

      if (VAR_49)
 {
   VAR_39[VAR_25-1] = 1;
   if (VAR_23 && ! VAR_51)
     {
       VAR_39[VAR_25-2] = 1;
     }
 }

      if (! VAR_50)
 {
   VAR_40[VAR_25-1] = 0;
   if (VAR_23 && ! VAR_51)
     {
       VAR_40[VAR_25-2] = 0;
     }
 }
    }


  if (! VAR_13 && ! VAR_12)
    {
      FUNC_28 (FUNC_0("Must provide at least one of -o or --dllname options"));
      FUNC_8 (1);
    }
  else if (! VAR_13)
    {
      VAR_13 = FUNC_30 (FUNC_13 (VAR_12));
    }
  else if (! VAR_12)
    {
      VAR_12 = FUNC_30 (VAR_13);
    }


  if (VAR_16 == ((void*)0))
    VAR_16 = FUNC_4 ("gcc");

  if (VAR_14 == ((void*)0))
    VAR_14 = FUNC_4 ("dlltool");

  if (! VAR_45)
    {
      char *VAR_52 = FUNC_2 ();

      VAR_8 = (char *) FUNC_29 (FUNC_22 (VAR_52) + 5);
      FUNC_17 (VAR_8, "%s.def",
        (VAR_15) ? FUNC_13 (VAR_52) : VAR_52);
      VAR_10 = 1;
      FUNC_11 (VAR_52);
      VAR_10 = 1;
      FUNC_28 (FUNC_0("no export definition file provided.\nCreating one, but that may not be what you want"));

    }


  if (FUNC_25 (VAR_29, "cygwin"))
    VAR_31 = 143;
  else if (FUNC_25 (VAR_29, "mingw"))
    VAR_31 = 142;
  else
    VAR_31 = VAR_5;


  VAR_43 = FUNC_7 (VAR_37);
  if (VAR_30)
    FUNC_5 (VAR_43, " -v");

  FUNC_5 (VAR_43, " --dllname ");
  FUNC_5 (VAR_43, VAR_13);

  for (VAR_35 = 1; VAR_35 < VAR_32; ++VAR_35)
    {
      if (VAR_39[VAR_35])
 {
   char *VAR_53 = VAR_36[VAR_35];
   int VAR_54 = (FUNC_19 (VAR_53, ' ') || FUNC_19 (VAR_53, '\t'));
   FUNC_5 (VAR_43,
                      (VAR_54) ? " \"" : " ");
   FUNC_5 (VAR_43, VAR_53);
   FUNC_5 (VAR_43,
                      (VAR_54) ? "\"" : "");
 }
    }

  VAR_44 = FUNC_7 (VAR_37);
  if (! VAR_41 || FUNC_22 (VAR_41) == 0)
    {
      switch (VAR_31)
 {
 case 143:
   VAR_41 = VAR_7;
   break;

 case 142:
   VAR_41 = VAR_22;
   break;

 default:
   VAR_41 = VAR_20;
   break;
 }
    }
  FUNC_5 (VAR_44, VAR_41);
  FUNC_5 (VAR_44, " -o ");
  FUNC_5 (VAR_44, VAR_12);

  if (! VAR_18 || FUNC_22 (VAR_18) == 0)
    {
      switch (VAR_31)
 {
 case 143:
   VAR_18 = "__cygwin_dll_entry@12";
   break;

 case 142:
   VAR_18 = "_DllMainCRTStartup@12";
   break;

 default:
   VAR_18 = "_DllMain@12";
   break;
 }
    }
  FUNC_5 (VAR_44, " -Wl,-e,");
  FUNC_5 (VAR_44, VAR_18);
  FUNC_5 (VAR_43, " --exclude-symbol=");
  FUNC_5 (VAR_43,
                    (VAR_18[0] == '_') ? VAR_18+1 : VAR_18);

  if (! VAR_46 || FUNC_22 (VAR_46) == 0)
    {
      char *VAR_55 = (char *) FUNC_29 (sizeof ("0x12345678") + 1);
      unsigned long VAR_56 = FUNC_21 (VAR_12);
      FUNC_17 (VAR_55, "0x%.8lX", 0x60000000|((VAR_56<<16)&0xFFC0000));
      VAR_46 = VAR_55;
    }

  FUNC_5 (VAR_44, " -Wl,--image-base,");
  FUNC_5 (VAR_44, VAR_46);

  if (VAR_30)
    {
      FUNC_5 (VAR_44, " -v");
    }

  for (VAR_35 = 1; VAR_35 < VAR_32; ++VAR_35)
    {
      if (VAR_40[VAR_35])
 {
   char *VAR_57 = VAR_36[VAR_35];
   int VAR_58 = (FUNC_19 (VAR_57, ' ') || FUNC_19 (VAR_57, '\t'));
   FUNC_5 (VAR_44,
                      (VAR_58) ? " \"" : " ");
   FUNC_5 (VAR_44, VAR_57);
   FUNC_5 (VAR_44,
                      (VAR_58) ? "\"" : "");
 }
    }




  if (! VAR_45)
    {
      int VAR_59;
      dyn_string_t VAR_60;

      VAR_60 = FUNC_7 (1024);

      FUNC_5 (VAR_60, VAR_43->s);
      if (VAR_38)
 {
   FUNC_5 (VAR_60, " --export-all --exclude-symbol=");
   FUNC_5 (VAR_60,
   "_cygwin_dll_entry@12,DllMainCRTStartup@12,DllMain@12,DllEntryPoint@12");
 }
      FUNC_5 (VAR_60, " --output-def ");
      FUNC_5 (VAR_60, VAR_8);

      for (VAR_59 = 1; VAR_59 < VAR_32; ++VAR_59)
 {
   if (VAR_40[VAR_59])
     {
       char *VAR_61 = VAR_36[VAR_59];
       size_t VAR_62 = FUNC_22 (VAR_61);
       if (VAR_62 >= 2 && VAR_61[VAR_62-2] == '.'
           && (VAR_61[VAR_62-1] == 'o' || VAR_61[VAR_62-1] == 'a'))
  {
    int VAR_63 = (FUNC_19 (VAR_61, ' ') || FUNC_19 (VAR_61, '\t'));
    FUNC_5 (VAR_60,
         (VAR_63) ? " \"" : " ");
    FUNC_5 (VAR_60, VAR_61);
    FUNC_5 (VAR_60,
         (VAR_63) ? "\"" : "");
  }
     }
 }

      if (FUNC_15 (VAR_14, VAR_60->s))
 FUNC_3 (1);

      FUNC_6 (VAR_60);
    }

  FUNC_5 (VAR_43, " --def ");
  FUNC_5 (VAR_43, VAR_8);

  if (VAR_30)
    {
      FUNC_10 (VAR_27, FUNC_0("DLLTOOL name    : %s\n"), VAR_14);
      FUNC_10 (VAR_27, FUNC_0("DLLTOOL options : %s\n"), VAR_43->s);
      FUNC_10 (VAR_27, FUNC_0("DRIVER name     : %s\n"), VAR_16);
      FUNC_10 (VAR_27, FUNC_0("DRIVER options  : %s\n"), VAR_44->s);
    }
  if (! VAR_6)
    {
      char *VAR_64 = FUNC_2 ();
      VAR_6 = (char *) FUNC_29 (FUNC_22 (VAR_64) + 6);
      FUNC_17 (VAR_6, "%s.base",
        (VAR_15) ? FUNC_13 (VAR_64) : VAR_64);
      VAR_9 = 1;
      FUNC_11 (VAR_64);
    }

  {
    int VAR_65;

    dyn_string_t VAR_66 = FUNC_7 (VAR_44->length
      + FUNC_22 (VAR_6)
      + 20);
    FUNC_5 (VAR_66, "-Wl,--base-file,");
    VAR_65 = (FUNC_19 (VAR_6, ' ')
      || FUNC_19 (VAR_6, '\t'));
    FUNC_5 (VAR_66,
                (VAR_65) ? "\"" : "");
    FUNC_5 (VAR_66, VAR_6);
    FUNC_5 (VAR_66,
                (VAR_65) ? "\"" : "");
    if (VAR_44->length)
      {
 FUNC_5 (VAR_66, " ");
 FUNC_5 (VAR_66, VAR_44->s);
      }

    if (FUNC_15 (VAR_16, VAR_66->s))
      FUNC_3 (1);

    FUNC_6 (VAR_66);
  }
  if (! VAR_19)
    {
      char *VAR_67 = FUNC_24 (VAR_13, '.');
      size_t VAR_68 = (VAR_67) ? (size_t) (VAR_67 - VAR_13) : FUNC_22 (VAR_13);

      VAR_19 = (char *) FUNC_29 (VAR_68 + 4 + 1);
      FUNC_23 (VAR_19, VAR_13, VAR_68);
      VAR_19[VAR_68] = '\0';
      FUNC_18 (VAR_19, ".exp");
      VAR_11 = 1;
    }

  {
    int VAR_69;

    dyn_string_t VAR_70 = FUNC_7 (VAR_43->length
      + FUNC_22 (VAR_6)
      + FUNC_22 (VAR_19)
             + 20);

    FUNC_5 (VAR_70, "--base-file ");
    VAR_69 = (FUNC_19 (VAR_6, ' ')
      || FUNC_19 (VAR_6, '\t'));
    FUNC_5 (VAR_70,
                (VAR_69) ? "\"" : "");
    FUNC_5 (VAR_70, VAR_6);
    FUNC_5 (VAR_70,
                (VAR_69) ? "\" " : " ");

    FUNC_5 (VAR_70, "--output-exp ");
    VAR_69 = (FUNC_19 (VAR_19, ' ')
      || FUNC_19 (VAR_19, '\t'));
    FUNC_5 (VAR_70,
                (VAR_69) ? "\"" : "");
    FUNC_5 (VAR_70, VAR_19);
    FUNC_5 (VAR_70,
                (VAR_69) ? "\"" : "");

    if (VAR_43->length)
      {
 FUNC_5 (VAR_70, " ");
 FUNC_5 (VAR_70, VAR_43->s);
      }

    if (FUNC_15 (VAR_14, VAR_70->s))
      FUNC_3 (1);

    FUNC_6 (VAR_70);
  }
  {
    int VAR_71;

    dyn_string_t VAR_72 = FUNC_7 (VAR_44->length
      + FUNC_22 (VAR_19)
      + FUNC_22 (VAR_6)
             + 20);
    FUNC_5 (VAR_72, "-Wl,--base-file,");
    VAR_71 = (FUNC_19 (VAR_6, ' ')
      || FUNC_19 (VAR_6, '\t'));
    FUNC_5 (VAR_72,
                (VAR_71) ? "\"" : "");
    FUNC_5 (VAR_72, VAR_6);
    FUNC_5 (VAR_72,
                (VAR_71) ? "\" " : " ");

    VAR_71 = (FUNC_19 (VAR_19, ' ')
      || FUNC_19 (VAR_19, '\t'));
    FUNC_5 (VAR_72,
                (VAR_71) ? "\"" : "");
    FUNC_5 (VAR_72, VAR_19);
    FUNC_5 (VAR_72,
                (VAR_71) ? "\"" : "");

    if (VAR_44->length)
      {
 FUNC_5 (VAR_72, " ");
 FUNC_5 (VAR_72, VAR_44->s);
      }

    if (FUNC_15 (VAR_16, VAR_72->s))
      FUNC_3 (1);

    FUNC_6 (VAR_72);
  }






  {
    int VAR_73;
    dyn_string_t VAR_74 = FUNC_7 (VAR_43->length
      + FUNC_22 (VAR_6)
      + FUNC_22 (VAR_19)
             + 20);

    FUNC_5 (VAR_74, "--base-file ");
    VAR_73 = (FUNC_19 (VAR_6, ' ')
      || FUNC_19 (VAR_6, '\t'));
    FUNC_5 (VAR_74,
                (VAR_73) ? "\"" : "");
    FUNC_5 (VAR_74, VAR_6);
    FUNC_5 (VAR_74,
                (VAR_73) ? "\" " : " ");

    FUNC_5 (VAR_74, "--output-exp ");
    VAR_73 = (FUNC_19 (VAR_19, ' ')
      || FUNC_19 (VAR_19, '\t'));
    FUNC_5 (VAR_74,
                (VAR_73) ? "\"" : "");
    FUNC_5 (VAR_74, VAR_19);
    FUNC_5 (VAR_74,
                (VAR_73) ? "\"" : "");

    if (VAR_43->length)
      {
 FUNC_5 (VAR_74, " ");
 FUNC_5 (VAR_74, VAR_43->s);
      }

    if (VAR_42)
      {
 FUNC_5 (VAR_74, " --output-lib ");
 FUNC_5 (VAR_74, VAR_42);
      }

    if (FUNC_15 (VAR_14, VAR_74->s))
      FUNC_3 (1);

    FUNC_6 (VAR_74);
  }
  {
    int VAR_75;

    dyn_string_t VAR_76 = FUNC_7 (VAR_44->length
      + FUNC_22 (VAR_19)
             + 20);
    VAR_75 = (FUNC_19 (VAR_19, ' ')
      || FUNC_19 (VAR_19, '\t'));
    FUNC_5 (VAR_76,
                (VAR_75) ? "\"" : "");
    FUNC_5 (VAR_76, VAR_19);
    FUNC_5 (VAR_76,
                (VAR_75) ? "\"" : "");

    if (VAR_44->length)
      {
 FUNC_5 (VAR_76, " ");
 FUNC_5 (VAR_76, VAR_44->s);
      }

    if (FUNC_15 (VAR_16, VAR_76->s))
      FUNC_3 (1);

    FUNC_6 (VAR_76);
  }

  FUNC_3 (0);

  return 0;
}

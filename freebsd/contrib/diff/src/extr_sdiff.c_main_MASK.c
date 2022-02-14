
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_filter {int dummy; } ;
typedef int sigset_t ;
typedef int FILE ;


 char* VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (int,int,int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int VAR_19 ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 char** VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int) ;
 char const* VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (char*,char**) ;
 int FUNC_14 (int ) ;
 int VAR_24 ;
 int FUNC_15 () ;
 char* FUNC_16 (char*,int,char*) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (int,char*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (int,char**,char*,int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int*,char***) ;
 int FUNC_24 (struct line_filter*,struct line_filter*,char const*,struct line_filter*,char const*,int *) ;
 int FUNC_25 (struct line_filter*,int *) ;
 int VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 char const* VAR_30 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (char*) ;
 scalar_t__ FUNC_28 (int*) ;
 int * FUNC_29 (char*,char*) ;
 char* VAR_31 ;
 scalar_t__ FUNC_30 (char*,char*) ;
 int FUNC_31 (int ,char*) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int ,scalar_t__) ;
 int FUNC_35 (int ,int *,int *) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_36 (int ) ;
 scalar_t__ VAR_34 ;
 int FUNC_37 () ;
 int FUNC_38 (char*,char*) ;
 int FUNC_39 (scalar_t__) ;
 int FUNC_40 (int ) ;
 int FUNC_41 () ;
 int FUNC_42 (int ,char*,int ,int ,char*,char*) ;
 scalar_t__ FUNC_43 () ;
 scalar_t__ FUNC_44 (scalar_t__,int*,int ) ;
 char* FUNC_45 (size_t) ;

int
FUNC_46 (int VAR_35, char *VAR_36[])
{
  int VAR_37;
  char const *VAR_38;

  VAR_24 = VAR_5;
  FUNC_23 (&VAR_35, &VAR_36);
  VAR_31 = VAR_36[0];
  FUNC_31 (VAR_6, "");
  FUNC_2 (VAR_8, VAR_7);
  FUNC_36 (VAR_8);
  FUNC_3 (VAR_19);

  VAR_38 = FUNC_20 ("EDITOR");
  if (VAR_38)
    VAR_22 = VAR_38;

  FUNC_10 (VAR_0);


  while ((VAR_37 = FUNC_21 (VAR_35, VAR_36, "abBdEHiI:lo:stvw:W", VAR_27, 0))
  != -1)
    {
      switch (VAR_37)
 {
 case 'a':
   FUNC_10 ("-a");
   break;

 case 'b':
   FUNC_10 ("-b");
   break;

 case 'B':
   FUNC_10 ("-B");
   break;

 case 'd':
   FUNC_10 ("-d");
   break;

 case 'E':
   FUNC_10 ("-E");
   break;

 case 'H':
   FUNC_10 ("-H");
   break;

 case 'i':
   FUNC_10 ("-i");
   break;

 case 'I':
   FUNC_10 ("-I");
   FUNC_10 (VAR_28);
   break;

 case 'l':
   FUNC_10 ("--left-column");
   break;

 case 'o':
   VAR_30 = VAR_28;
   break;

 case 's':
   VAR_33 = 1;
   break;

 case 't':
   FUNC_10 ("-t");
   break;

 case 'v':
   FUNC_42 (VAR_32, "sdiff", VAR_9, VAR_10,
         "Thomas Lord", (char *) 0);
   FUNC_5 ();
   return VAR_4;

 case 'w':
   FUNC_10 ("-W");
   FUNC_10 (VAR_28);
   break;

 case 'W':
   FUNC_10 ("-w");
   break;

 case 131:
   VAR_20[0] = VAR_28;
   break;

 case 130:
   FUNC_41 ();
   FUNC_5 ();
   return VAR_4;

 case 129:
   FUNC_10 ("--strip-trailing-cr");
   break;

 case 128:
   FUNC_10 ("--tabsize");
   FUNC_10 (VAR_28);
   break;

 default:
   FUNC_38 (0, 0);
 }
    }

  if (VAR_35 - VAR_29 != 2)
    {
      if (VAR_35 - VAR_29 < 2)
 FUNC_38 ("missing operand after `%s'", VAR_36[VAR_35 - 1]);
      else
 FUNC_38 ("extra operand `%s'", VAR_36[VAR_29 + 2]);
    }

  if (! VAR_30)
    {

      if (VAR_33)
 FUNC_10 ("--suppress-common-lines");
      FUNC_10 ("-y");
      FUNC_10 ("--");
      FUNC_10 (VAR_36[VAR_29]);
      FUNC_10 (VAR_36[VAR_29 + 1]);
      FUNC_10 (0);
      FUNC_13 (VAR_20[0], (char **) VAR_20);
      FUNC_27 (VAR_20[0]);
    }
  else
    {
      char const *VAR_39, *VAR_40;
      FILE *VAR_41, *VAR_42, *VAR_43, *VAR_44;
      bool VAR_45;
      struct line_filter VAR_46;
      struct line_filter VAR_47;
      struct line_filter VAR_48;
      bool VAR_49 = FUNC_11 (VAR_36[VAR_29]);
      bool VAR_50 = FUNC_11 (VAR_36[VAR_29 + 1]);

      if (VAR_49 & VAR_50)
 FUNC_17 ("both files to be compared are directories");

      VAR_39 = FUNC_16 (VAR_36[VAR_29], VAR_49, VAR_36[VAR_29 + 1]);
      VAR_41 = FUNC_8 (VAR_39, "r");
      VAR_40 = FUNC_16 (VAR_36[VAR_29 + 1], VAR_50, VAR_36[VAR_29]);
      VAR_42 = FUNC_8 (VAR_40, "r");
      VAR_43 = FUNC_8 (VAR_30, "w");

      FUNC_10 ("--sdiff-merge-assist");
      FUNC_10 ("--");
      FUNC_10 (VAR_36[VAR_29]);
      FUNC_10 (VAR_36[VAR_29 + 1]);
      FUNC_10 (0);

      FUNC_37 ();


      {
 size_t VAR_51 = 1;
 char *VAR_52, *VAR_53;
 int VAR_54;

 for (VAR_54 = 0; VAR_20[VAR_54]; VAR_54++)
   VAR_51 += FUNC_30 (0, VAR_20[VAR_54]) + 1;
 VAR_53 = VAR_52 = FUNC_45 (VAR_51);
 for (VAR_54 = 0; VAR_20[VAR_54]; VAR_54++)
   {
     VAR_52 += FUNC_30 (VAR_52, VAR_20[VAR_54]);
     *VAR_52++ = ' ';
   }
 VAR_52[-1] = 0;
 VAR_23 = 0;
 VAR_44 = FUNC_29 (VAR_53, "r");
 if (! VAR_44)
   FUNC_27 (VAR_53);
 FUNC_19 (VAR_53);
      }
      FUNC_25 (&VAR_48, VAR_44);
      FUNC_25 (&VAR_46, VAR_41);
      FUNC_25 (&VAR_47, VAR_42);

      VAR_45 = FUNC_24 (&VAR_48, &VAR_46, VAR_39, &VAR_47, VAR_40, VAR_43);

      FUNC_7 (VAR_41);
      FUNC_7 (VAR_42);
      FUNC_7 (VAR_43);

      {
 int VAR_55;
 int VAR_56 = 0;


 VAR_55 = FUNC_26 (VAR_44);
 if (VAR_55 == -1)
   VAR_56 = VAR_23;
 if (VAR_34)
   {
     FUNC_39 (VAR_34);
     VAR_34 = 0;
   }

 if (! VAR_45)
   FUNC_15 ();

 FUNC_4 (VAR_56, VAR_55, VAR_3, VAR_20[0]);
 FUNC_40 (0);
 FUNC_6 ();
 FUNC_14 (FUNC_0 (VAR_55));
      }
    }
  return VAR_4;
}

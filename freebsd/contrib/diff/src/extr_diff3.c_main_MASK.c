
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct diff_block {int dummy; } ;
struct diff3_block {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,int ,char*,char*) ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int,char**,char*,int ,int ) ;
 int VAR_18 ;
 int FUNC_10 (int*,char***) ;
 int VAR_19 ;
 struct diff3_block* FUNC_11 (struct diff_block*,struct diff_block*) ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (int ,struct diff3_block*,int*,int*) ;
 int FUNC_13 (int ,struct diff3_block*,int*,int*,char*,char*,char*) ;
 int FUNC_14 (int ,int ,struct diff3_block*,int*,int*,char*,char*,char*) ;
 int VAR_23 ;
 int FUNC_15 (char*) ;
 struct diff_block* FUNC_16 (char*,char*,struct diff_block**) ;
 char* VAR_24 ;
 int FUNC_17 (int ,char*) ;
 int VAR_25 ;
 int FUNC_18 (int ,int ) ;
 int VAR_26 ;
 scalar_t__ FUNC_19 (char*,struct stat*) ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 () ;
 int FUNC_24 (int ,char*,int ,int ,char*,char*) ;

int
FUNC_25 (int VAR_31, char **VAR_32)
{
  int VAR_33, VAR_34;
  int VAR_35;
  int VAR_36[3];
  int VAR_37[3];
  int VAR_38 = 0;
  bool VAR_39;
  struct diff_block *VAR_40, *VAR_41, *VAR_42;
  struct diff3_block *VAR_43;
  int VAR_44 = 0;
  char *VAR_45[3];
  char *VAR_46;
  char **VAR_47;
  struct stat VAR_48;

  VAR_15 = 2;
  FUNC_10 (&VAR_31, &VAR_32);
  VAR_24 = VAR_32[0];
  FUNC_17 (VAR_6, "");
  FUNC_1 (VAR_8, VAR_7);
  FUNC_21 (VAR_8);
  FUNC_2 (0);

  while ((VAR_33 = FUNC_9 (VAR_31, VAR_32, "aeimvx3AEL:TX", VAR_19, 0)) != -1)
    {
      switch (VAR_33)
 {
 case 'a':
   VAR_30 = 1;
   break;
 case 'A':
   VAR_25 = 1;
   VAR_17 = 1;
   VAR_38++;
   break;
 case 'x':
   VAR_23 = 1;
   VAR_38++;
   break;
 case '3':
   VAR_26 = 1;
   VAR_38++;
   break;
 case 'i':
   VAR_16 = 1;
   break;
 case 'm':
   VAR_20 = 1;
   break;
 case 'X':
   VAR_23 = 1;

 case 'E':
   VAR_17 = 1;

 case 'e':
   VAR_38++;
   break;
 case 'T':
   VAR_18 = 1;
   break;
 case 128:
   VAR_29 = 1;
   break;
 case 'v':
   FUNC_24 (VAR_28, "diff3", VAR_9, VAR_10,
         "Randy Smith", (char *) 0);
   FUNC_3 ();
   return VAR_1;
 case 130:
   VAR_13 = VAR_21;
   break;
 case 129:
   FUNC_23 ();
   FUNC_3 ();
   return VAR_1;
 case 'L':

   if (VAR_44 < 3)
     {
       VAR_45[VAR_44++] = VAR_21;
       break;
     }
   FUNC_22 ("too many file label options", 0);
 default:
   FUNC_22 (0, 0);
 }
    }

  VAR_14 = VAR_38 & ~VAR_20;
  VAR_25 |= ~VAR_38 & VAR_20;
  VAR_17 |= ~VAR_38 & VAR_20;

  if (VAR_38 > 1
      || VAR_16 & VAR_20
      || (VAR_44 && ! VAR_17))
    FUNC_22 ("incompatible options", 0);

  if (VAR_31 - VAR_22 != 3)
    {
      if (VAR_31 - VAR_22 < 3)
 FUNC_22 ("missing operand after `%s'", VAR_32[VAR_31 - 1]);
      else
 FUNC_22 ("extra operand `%s'", VAR_32[VAR_22 + 3]);
    }

  VAR_47 = &VAR_32[VAR_22];

  for (VAR_34 = VAR_44; VAR_34 < 3; VAR_34++)
    VAR_45[VAR_34] = VAR_47[VAR_34];
  VAR_35 = 2 - (VAR_14 | VAR_20);

  if (FUNC_20 (VAR_47[VAR_35], "-") == 0)
    {



      VAR_35 = 3 - VAR_35;
      if (FUNC_20 (VAR_47[0], "-") == 0 || FUNC_20 (VAR_47[VAR_35], "-") == 0)
 FUNC_6 ("`-' specified for more than one input file");
    }

  VAR_36[0] = 0;
  VAR_36[1] = 3 - VAR_35;
  VAR_36[2] = VAR_35;

  for (VAR_34 = 0; VAR_34 < 3; VAR_34++)
    VAR_37[VAR_36[VAR_34]] = VAR_34;

  for (VAR_34 = 0; VAR_34 < 3; VAR_34++)
    if (FUNC_20 (VAR_47[VAR_34], "-") != 0)
      {
 if (FUNC_19 (VAR_47[VAR_34], &VAR_48) < 0)
   FUNC_15 (VAR_47[VAR_34]);
 else if (FUNC_0 (VAR_48.st_mode))
   FUNC_4 (VAR_2, VAR_0, "%s", VAR_47[VAR_34]);
      }
  VAR_46 = VAR_47[VAR_37[VAR_5]];
  VAR_41 = FUNC_16 (VAR_47[VAR_37[VAR_4]], VAR_46, &VAR_42);
  VAR_40 = FUNC_16 (VAR_47[VAR_37[VAR_3]], VAR_46, &VAR_42);
  VAR_43 = FUNC_11 (VAR_40, VAR_41);
  if (VAR_14)
    VAR_39
      = FUNC_13 (VAR_28, VAR_43, VAR_36, VAR_37,
          VAR_45[0], VAR_45[1], VAR_45[2]);
  else if (VAR_20)
    {
      if (! FUNC_8 (VAR_47[VAR_37[VAR_3]], "r", VAR_27))
 FUNC_15 (VAR_47[VAR_37[VAR_3]]);
      VAR_39
 = FUNC_14 (VAR_27, VAR_28, VAR_43, VAR_36, VAR_37,
         VAR_45[0], VAR_45[1], VAR_45[2]);
      if (FUNC_7 (VAR_27))
 FUNC_6 ("read failed");
    }
  else
    {
      FUNC_12 (VAR_28, VAR_43, VAR_36, VAR_37);
      VAR_39 = 0;
    }

  FUNC_3 ();
  FUNC_5 (VAR_39);
  return VAR_39;
}

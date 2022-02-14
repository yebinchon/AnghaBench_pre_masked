
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* bfd_boolean ;
typedef int bfd ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ) ;
 void* VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 void* VAR_6 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_9 (int *,char**) ;
 int FUNC_10 (int*,char***) ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *,int ,char**,int) ;
 int FUNC_13 (int *,char**) ;
 int FUNC_14 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int ,char) ;
 int * FUNC_16 (char*,char*) ;
 void* VAR_14 ;
 int * VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 char* VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_17 (char*) ;
 char* VAR_24 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int VAR_25 ;
 int FUNC_20 (int *,char**,int) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,char*) ;
 int VAR_26 ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (char*) ;
 char* FUNC_25 (char*,char) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int) ;
 int FUNC_30 (char*) ;

int
FUNC_31 (int VAR_29, char **VAR_30)
{
  char *VAR_31;
  char VAR_32;
  enum
    {
      none = 0, delete, replace, print_table,
      print_files, extract, move, quick_append
    } VAR_33 = none;
  int VAR_34;
  char **VAR_35;
  int VAR_36;
  char *VAR_37;
  int VAR_38;
  int VAR_39;
  int VAR_40 = 0;







  FUNC_8 (VAR_4, VAR_3);
  FUNC_26 (VAR_4);

  VAR_24 = VAR_30[0];
  FUNC_30 (VAR_24);

  FUNC_10 (&VAR_29, &VAR_30);

  if (VAR_11 < 0)
    {
      char *VAR_41;

      VAR_41 = FUNC_25 (VAR_24, '/');
      if (VAR_41 == ((void*)0))
 VAR_41 = VAR_24;
      else
 ++VAR_41;
      if (FUNC_24 (VAR_41) >= 6
   && FUNC_2 (VAR_41 + FUNC_24 (VAR_41) - 6, "ranlib") == 0)
 VAR_11 = 1;
      else
 VAR_11 = 0;
    }

  if (VAR_29 > 1 && VAR_30[1][0] == '-')
    {
      if (FUNC_23 (VAR_30[1], "--help") == 0)
 FUNC_27 (1);
      else if (FUNC_23 (VAR_30[1], "--version") == 0)
 {
   if (VAR_11)
     FUNC_17 ("ranlib");
   else
     FUNC_17 ("ar");
 }
    }

  FUNC_3 (VAR_24, 0);

  FUNC_7 ();
  FUNC_21 ();

  VAR_38 = 0;

  FUNC_28 (VAR_25);

  for (VAR_39 = 1; VAR_39 < VAR_29; VAR_39++)
    if (! FUNC_5 (VAR_30[VAR_39]))
      break;
  VAR_30 += (VAR_39 - 1);
  VAR_29 -= (VAR_39 - 1);

  if (VAR_11)
    {
      int VAR_42 = 0;
      bfd_boolean VAR_43 = VAR_0;

      if (VAR_29 < 2
   || FUNC_23 (VAR_30[1], "--help") == 0
   || FUNC_23 (VAR_30[1], "-h") == 0
   || FUNC_23 (VAR_30[1], "-H") == 0)
 FUNC_27 (0);
      if (FUNC_23 (VAR_30[1], "-V") == 0
   || FUNC_23 (VAR_30[1], "-v") == 0
   || FUNC_0 (VAR_30[1], "--v"))
 FUNC_17 ("ranlib");
      VAR_34 = 1;
      if (FUNC_23 (VAR_30[1], "-t") == 0)
 {
   ++VAR_34;
   VAR_43 = VAR_5;
 }
      while (VAR_34 < VAR_29)
 {
   if (! VAR_43)
     VAR_42 |= FUNC_18 (VAR_30[VAR_34]);
   else
     VAR_42 |= FUNC_19 (VAR_30[VAR_34]);
   ++VAR_34;
 }
      FUNC_29 (VAR_42);
    }

  if (VAR_29 == 2 && FUNC_23 (VAR_30[1], "-M") == 0)
    {
      FUNC_14 ();
      FUNC_29 (0);
    }

  if (VAR_29 < 2)
    FUNC_27 (0);

  VAR_34 = 1;
  VAR_31 = VAR_30[VAR_34];

  if (*VAR_31 == '-')
    {


      VAR_40 = 1;
      ++VAR_31;
    }

  do
    {
      while ((VAR_32 = *VAR_31++) != '\0')
 {
   switch (VAR_32)
     {
     case 'd':
     case 'm':
     case 'p':
     case 'q':
     case 'r':
     case 't':
     case 'x':
       if (VAR_33 != none)
  FUNC_11 (FUNC_4("two different operation options specified"));
       switch (VAR_32)
  {
  case 'd':
    VAR_33 = delete;
    VAR_14 = VAR_5;
    break;
  case 'm':
    VAR_33 = move;
    VAR_14 = VAR_5;
    break;
  case 'p':
    VAR_33 = print_files;
    break;
  case 'q':
    VAR_33 = quick_append;
    VAR_14 = VAR_5;
    break;
  case 'r':
    VAR_33 = replace;
    VAR_14 = VAR_5;
    break;
  case 't':
    VAR_33 = print_table;
    break;
  case 'x':
    VAR_33 = extract;
    break;
  }
     case 'l':
       break;
     case 'c':
       VAR_26 = 1;
       break;
     case 'o':
       VAR_21 = 1;
       break;
     case 'V':
       VAR_38 = VAR_5;
       break;
     case 's':
       VAR_28 = 1;
       break;
     case 'S':
       VAR_28 = -1;
       break;
     case 'u':
       VAR_13 = 1;
       break;
     case 'v':
       VAR_27 = 1;
       break;
     case 'a':
       VAR_20 = VAR_16;
       break;
     case 'b':
       VAR_20 = VAR_17;
       break;
     case 'i':
       VAR_20 = VAR_17;
       break;
     case 'M':
       VAR_12 = 1;
       break;
     case 'N':
       VAR_8 = VAR_5;
       break;
     case 'f':
       VAR_6 = VAR_5;
       break;
     case 'P':
       VAR_10 = VAR_5;
       break;
     default:

       FUNC_15 (FUNC_4("illegal option -- %c"), VAR_32);
       FUNC_27 (0);
     }
 }



      if (VAR_40 && VAR_34 + 1 < VAR_29 && VAR_30[VAR_34 + 1][0] == '-')
 VAR_31 = VAR_30[++VAR_34] + 1;
      else
 VAR_40 = 0;
    }
  while (VAR_40);

  if (VAR_38)
    FUNC_17 ("ar");

  ++VAR_34;
  if (VAR_34 >= VAR_29)
    FUNC_27 (0);

  if (VAR_12)
    {
      FUNC_14 ();
    }
  else
    {
      bfd *VAR_44;







      if (VAR_33 == quick_append && VAR_28)
 VAR_33 = replace;

      if ((VAR_33 == none || VAR_33 == print_table)
   && VAR_28 == 1)
 FUNC_29 (FUNC_18 (VAR_30[VAR_34]));

      if (VAR_33 == none)
 FUNC_11 (FUNC_4("no operation specified"));

      if (VAR_13 && VAR_33 != replace)
 FUNC_11 (FUNC_4("`u' is only meaningful with the `r' option."));

      if (VAR_20 != VAR_18)
 VAR_19 = VAR_30[VAR_34++];

      if (VAR_8)
 {
   if (VAR_33 != extract && VAR_33 != delete)
      FUNC_11 (FUNC_4("`N' is only meaningful with the `x' and `d' options."));
   VAR_7 = FUNC_6 (VAR_30[VAR_34++]);
   if (VAR_7 <= 0)
     FUNC_11 (FUNC_4("Value for `N' must be positive."));
 }

      VAR_37 = VAR_30[VAR_34++];

      VAR_35 = VAR_34 < VAR_29 ? VAR_30 + VAR_34 : ((void*)0);
      VAR_36 = VAR_29 - VAR_34;

      VAR_44 = FUNC_16 (VAR_37,
     VAR_35 == ((void*)0) ? (char *) ((void*)0) : VAR_35[0]);

      switch (VAR_33)
 {
 case print_table:
   FUNC_12 (VAR_44, VAR_23, VAR_35, VAR_36);
   break;

 case print_files:
   FUNC_12 (VAR_44, VAR_22, VAR_35, VAR_36);
   break;

 case extract:
   FUNC_12 (VAR_44, VAR_9, VAR_35, VAR_36);
   break;

 case delete:
   if (VAR_35 != ((void*)0))
     FUNC_9 (VAR_44, VAR_35);
   else
     VAR_15 = ((void*)0);
   break;

 case move:
   if (VAR_35 != ((void*)0))
     FUNC_13 (VAR_44, VAR_35);
   else
     VAR_15 = ((void*)0);
   break;

 case replace:
 case quick_append:
   if (VAR_35 != ((void*)0) || VAR_28 > 0)
     FUNC_20 (VAR_44, VAR_35, VAR_33 == quick_append);
   else
     VAR_15 = ((void*)0);
   break;


 default:

   FUNC_11 (FUNC_4("internal error -- this option not implemented"));
 }
    }

  FUNC_1 (VAR_24);

  FUNC_29 (0);
  return 0;
}

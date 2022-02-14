
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int word ;
typedef scalar_t__ uintmax_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct stat) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_14 ;
 scalar_t__* VAR_15 ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int,int ,char*,char*) ;
 int FUNC_11 (int) ;
 int VAR_19 ;
 char** VAR_20 ;
 scalar_t__* VAR_21 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__,struct stat*) ;
 int FUNC_15 (int,char**,char*,int ,int ) ;
 scalar_t__* VAR_22 ;
 int FUNC_16 (int*,char***) ;
 int VAR_23 ;
 scalar_t__ FUNC_17 (char*,int ,int ) ;
 int VAR_24 ;
 char* VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 scalar_t__ FUNC_18 (struct stat*,struct stat*) ;
 scalar_t__ FUNC_19 (struct stat*,struct stat*) ;
 int FUNC_20 (scalar_t__,int) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (int,char**,char) ;
 scalar_t__ FUNC_24 (int ,struct stat*) ;
 struct stat* VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_25 (char*,char*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,char*) ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_28 () ;
 int VAR_32 ;
 int FUNC_29 (int ,char*,int ,int ,int ,char*,char*) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (char*,int ,int ,scalar_t__*,int ) ;

int
FUNC_32 (int VAR_33, char **VAR_34)
{
  int VAR_35, VAR_36, VAR_37;
  size_t VAR_38;

  VAR_19 = VAR_2;
  FUNC_16 (&VAR_33, &VAR_34);
  VAR_27 = VAR_34[0];
  FUNC_21 (VAR_3, "");
  FUNC_4 (VAR_8, VAR_4);
  FUNC_26 (VAR_8);
  FUNC_6 (0);



  while ((VAR_35 = FUNC_15 (VAR_33, VAR_34, "bci:ln:sv", VAR_23, 0))
  != -1)
    switch (VAR_35)
      {
      case 'b':
      case 'c':
 VAR_24 = 1;
 break;

      case 'i':
 FUNC_23 (0, &VAR_25, ':');
 if (*VAR_25++ == ':')
   FUNC_23 (1, &VAR_25, 0);
 else if (VAR_22[1] < VAR_22[0])
   VAR_22[1] = VAR_22[0];
 break;

      case 'l':
 FUNC_22 (VAR_30);
 break;

      case 'n':
 {
   uintmax_t VAR_39;
   if (FUNC_31 (VAR_25, 0, 0, &VAR_39, VAR_32) != VAR_5)
     FUNC_27 ("invalid --bytes value `%s'", VAR_25);
   if (VAR_39 < VAR_16)
     VAR_16 = VAR_39;
 }
 break;

      case 's':
 FUNC_22 (VAR_31);
 break;

      case 'v':



 FUNC_29 (VAR_29, "cmp", VAR_9, VAR_10,
       FUNC_3("Torbjorn Granlund"), "David MacKenzie", (char *) 0);
 FUNC_7 ();
 return VAR_1;

      case 128:
 FUNC_28 ();
 FUNC_7 ();
 return VAR_1;

      default:
 FUNC_27 (0, 0);
      }

  if (VAR_26 == VAR_33)
    FUNC_27 ("missing operand after `%s'", VAR_34[VAR_33 - 1]);

  VAR_20[0] = VAR_34[VAR_26++];
  VAR_20[1] = VAR_26 < VAR_33 ? VAR_34[VAR_26++] : "-";

  for (VAR_36 = 0; VAR_36 < 2 && VAR_26 < VAR_33; VAR_36++)
    {
      char *VAR_40 = VAR_34[VAR_26++];
      FUNC_23 (VAR_36, &VAR_40, 0);
    }

  if (VAR_26 < VAR_33)
    FUNC_27 ("extra operand `%s'", VAR_34[VAR_26]);

  for (VAR_36 = 0; VAR_36 < 2; VAR_36++)
    {


      int VAR_41 = VAR_36 ^ (FUNC_25 (VAR_20[1], "-") == 0);



      if (VAR_36 && VAR_22[0] == VAR_22[1]
   && FUNC_12 (VAR_20[0], VAR_20[1]) == 0)
 return VAR_1;

      VAR_21[VAR_41] = (FUNC_25 (VAR_20[VAR_41], "-") == 0
         ? VAR_12
         : FUNC_17 (VAR_20[VAR_41], VAR_7, 0));
      if (VAR_21[VAR_41] < 0 || FUNC_14 (VAR_21[VAR_41], VAR_28 + VAR_41) != 0)
 {
   if (VAR_21[VAR_41] < 0 && VAR_17 == VAR_31)
     FUNC_11 (VAR_2);
   else
     FUNC_10 (VAR_2, VAR_18, "%s", VAR_20[VAR_41]);
 }

      FUNC_20 (VAR_21[VAR_41], 1);
    }




  if (0 < FUNC_18 (&VAR_28[0], &VAR_28[1])
      && FUNC_19 (&VAR_28[0], &VAR_28[1])
      && FUNC_13 (0) == FUNC_13 (1))
    return VAR_1;



  if (VAR_17 != VAR_31)
    {
      struct stat VAR_42, VAR_43;

      if (FUNC_14 (VAR_13, &VAR_42) == 0
   && FUNC_24 (VAR_6, &VAR_43) == 0
   && 0 < FUNC_18 (&VAR_42, &VAR_43))
 VAR_17 = VAR_31;
    }






  if (VAR_17 == VAR_31
      && FUNC_2 (VAR_28[0].st_mode)
      && FUNC_2 (VAR_28[1].st_mode))
    {
      off_t VAR_44 = VAR_28[0].st_size - FUNC_13 (0);
      off_t VAR_45 = VAR_28[1].st_size - FUNC_13 (1);
      if (VAR_44 < 0)
 VAR_44 = 0;
      if (VAR_45 < 0)
 VAR_45 = 0;
      if (VAR_44 != VAR_45 && FUNC_0 (VAR_44, VAR_45) < VAR_16)
 FUNC_11 (VAR_0);
    }



  VAR_14 = FUNC_5 (FUNC_1 (VAR_28[0]),
    FUNC_1 (VAR_28[1]),
    VAR_11 - sizeof (word));



  VAR_38 = (VAR_14 + 2 * sizeof (word) - 1) / sizeof (word);
  VAR_15[0] = FUNC_30 (2 * sizeof (word) * VAR_38);
  VAR_15[1] = VAR_15[0] + VAR_38;

  VAR_37 = FUNC_9 ();

  for (VAR_36 = 0; VAR_36 < 2; VAR_36++)
    if (FUNC_8 (VAR_21[VAR_36]) != 0)
      FUNC_10 (VAR_2, VAR_18, "%s", VAR_20[VAR_36]);
  if (VAR_37 != 0 && VAR_17 != VAR_31)
    FUNC_7 ();
  FUNC_11 (VAR_37);
  return VAR_37;
}

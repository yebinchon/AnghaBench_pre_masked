
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct section_list {void* remove; } ;
typedef void* bfd_boolean ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int **) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 () ;
 struct section_list* FUNC_4 (char*,void*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*,int ,int*) ;
 int VAR_12 ;
 int * VAR_13 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 char* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int FUNC_10 (char*) ;
 void* VAR_17 ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*,char*,void*) ;
 int FUNC_13 (char*,struct stat*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int VAR_21 ;
 int * VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (char*) ;
 void* VAR_24 ;
 void* VAR_25 ;

__attribute__((used)) static int
FUNC_17 (int VAR_26, char *VAR_27[])
{
  char *VAR_28 = ((void*)0);
  char *VAR_29 = ((void*)0);
  bfd_boolean VAR_30 = VAR_1;
  bfd_boolean VAR_31 = VAR_1;
  int VAR_32;
  int VAR_33;
  struct section_list *VAR_34;
  char *VAR_35 = ((void*)0);

  while ((VAR_32 = FUNC_7 (VAR_26, VAR_27, "I:O:F:K:N:R:o:sSpdgxXHhVvw",
      VAR_21, (int *) 0)) != VAR_0)
    {
      switch (VAR_32)
 {
 case 'I':
   VAR_28 = VAR_14;
   break;
 case 'O':
   VAR_29 = VAR_14;
   break;
 case 'F':
   VAR_28 = VAR_29 = VAR_14;
   break;
 case 'R':
   VAR_34 = FUNC_4 (VAR_14, VAR_10);
   VAR_34->remove = VAR_10;
   VAR_17 = VAR_10;
   break;
 case 's':
   VAR_23 = VAR_5;
   break;
 case 'S':
 case 'g':
 case 'd':
   VAR_23 = VAR_6;
   break;
 case 128:
   VAR_23 = VAR_9;
   break;
 case 'K':
   FUNC_1 (VAR_14, &VAR_13);
   break;
 case 'N':
   FUNC_1 (VAR_14, &VAR_22);
   break;
 case 'o':
   VAR_35 = VAR_14;
   break;
 case 'p':
   VAR_16 = VAR_10;
   break;
 case 'x':
   VAR_11 = VAR_2;
   break;
 case 'X':
   VAR_11 = VAR_3;
   break;
 case 'v':
   VAR_24 = VAR_10;
   break;
 case 'V':
   VAR_30 = VAR_10;
   break;
 case 131:
   VAR_31 = VAR_10;
   break;
 case 129:
   VAR_23 = VAR_7;
   break;
 case 130:
   VAR_12 = 1;
   break;
 case 0:

   break;
 case 'w':
   VAR_25 = VAR_10;
   break;
 case 'H':
 case 'h':
   FUNC_15 (VAR_20, 0);
 default:
   FUNC_15 (VAR_19, 1);
 }
    }

  if (VAR_31)
    {
      FUNC_3 ();
      return 0;
    }

  if (VAR_30)
    FUNC_10 ("strip");


  if (VAR_23 == VAR_8
      && VAR_11 == VAR_4
      && VAR_22 == ((void*)0))
    VAR_23 = VAR_5;

  if (VAR_29 == ((void*)0))
    VAR_29 = VAR_28;

  VAR_33 = VAR_15;
  if (VAR_33 == VAR_26
      || (VAR_35 != ((void*)0) && (VAR_33 + 1) < VAR_26))
    FUNC_15 (VAR_19, 1);

  for (; VAR_33 < VAR_26; VAR_33++)
    {
      int VAR_36 = VAR_18;
      struct stat VAR_37;
      char *VAR_38;

      if (FUNC_6 (VAR_27[VAR_33]) < 1)
 {
   VAR_18 = 1;
   continue;
 }

      if (VAR_16)


 FUNC_13 (VAR_27[VAR_33], &VAR_37);

      if (VAR_35 == ((void*)0) || FUNC_14 (VAR_27[VAR_33], VAR_35) == 0)
 VAR_38 = FUNC_8 (VAR_27[VAR_33]);
      else
 VAR_38 = VAR_35;

      if (VAR_38 == ((void*)0))
 {
   FUNC_9 (FUNC_0("could not create temporary file to hold stripped copy of '%s'"),
       VAR_27[VAR_33]);
   VAR_18 = 1;
   continue;
 }

      VAR_18 = 0;
      FUNC_2 (VAR_27[VAR_33], VAR_38, VAR_28, VAR_29);
      if (VAR_18 == 0)
 {
   if (VAR_16)
     FUNC_11 (VAR_38, &VAR_37);
   if (VAR_35 != VAR_38)
     FUNC_12 (VAR_38, VAR_35 ? VAR_35 : VAR_27[VAR_33],
     VAR_16);
   VAR_18 = VAR_36;
 }
      else
 FUNC_16 (VAR_38);
      if (VAR_35 != VAR_38)
 FUNC_5 (VAR_38);
    }

  return VAR_18;
}

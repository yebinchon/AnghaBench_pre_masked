
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int member_2; int const member_1; } ;
struct coff_ofile {int dummy; } ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char***) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int * FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct coff_ofile*) ;
 struct coff_ofile* FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int*,char***) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char**) ;
 int FUNC_13 (int,char**,char*,struct option*,int*) ;
 int FUNC_14 (char**) ;

 int VAR_7 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 char* VAR_8 ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;

int
FUNC_21 (int VAR_11, char **VAR_12)
{
  bfd *VAR_13;
  struct coff_ofile *VAR_14;
  char **VAR_15;
  char *VAR_16 = ((void*)0);
  int VAR_17;
  static struct option VAR_18[] =
    {
      { "help", 128, 0, 'h' },
      { "version", 128, 0, 'V' },
      { ((void*)0), 128, 0, 0 }
    };







  FUNC_6 (VAR_4, VAR_3);
  FUNC_19 (VAR_4);

  VAR_8 = VAR_12[0];
  FUNC_20 (VAR_8);

  FUNC_10 (&VAR_11, &VAR_12);

  while ((VAR_17 = FUNC_13 (VAR_11, VAR_12, "HhVv", VAR_18,
        (int *) ((void*)0)))
  != VAR_0)
    {
      switch (VAR_17)
 {
 case 'H':
 case 'h':
   FUNC_18 (VAR_10, 0);
   break;
 case 'v':
 case 'V':
   FUNC_15 ("coffdump");
   FUNC_9 (0);
 case 0:
   break;
 default:
   FUNC_18 (VAR_9, 1);
   break;
 }
    }

  if (VAR_7 < VAR_11)
    {
      VAR_16 = VAR_12[VAR_7];
    }

  if (!VAR_16)
    FUNC_11 (FUNC_0("no input file specified"));

  VAR_13 = FUNC_5 (VAR_16, 0);

  if (!VAR_13)
    FUNC_2 (VAR_16);

  if (! FUNC_1 (VAR_13, VAR_6, &VAR_15))
    {
      FUNC_4 (VAR_16);

      if (FUNC_3 () == VAR_5)
 {
   FUNC_14 (VAR_15);
   FUNC_12 (VAR_15);
 }
      FUNC_9 (1);
    }

  VAR_14 = FUNC_8 (VAR_13);

  FUNC_7 (VAR_14);
  FUNC_16 ("\n");

  return 0;
}

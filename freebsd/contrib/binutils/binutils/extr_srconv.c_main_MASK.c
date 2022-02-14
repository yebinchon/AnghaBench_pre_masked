
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int member_2; int const member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,char***) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_10 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int*,char***) ;
 int FUNC_10 (int ,...) ;
 int VAR_12 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char**) ;
 int FUNC_13 (int,char**,char*,struct option*,int*) ;
 int FUNC_14 (char**) ;

 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int,int) ;
 char* VAR_15 ;
 int VAR_16 ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ) ;
 int VAR_19 ;
 int FUNC_25 (int ) ;
 char* FUNC_26 (int) ;
 int FUNC_27 (char*) ;

int
FUNC_28 (int VAR_20, char **VAR_21)
{
  int VAR_22;
  static struct option VAR_23[] =
  {
    {"debug", 128, 0, 'd'},
    {"quick", 128, 0, 'q'},
    {"noprescan", 128, 0, 'n'},
    {"help", 128, 0, 'h'},
    {"version", 128, 0, 'V'},
    {((void*)0), 128, 0, 0}
  };
  char **VAR_24;
  char *VAR_25;
  char *VAR_26;







  FUNC_6 (VAR_5, VAR_4);
  FUNC_24 (VAR_5);

  VAR_15 = VAR_21[0];
  FUNC_27 (VAR_15);

  FUNC_9 (&VAR_20, &VAR_21);

  while ((VAR_22 = FUNC_13 (VAR_20, VAR_21, "dHhVvqn", VAR_23,
        (int *) ((void*)0)))
  != VAR_0)
    {
      switch (VAR_22)
 {
 case 'q':
   VAR_16 = 1;
   break;
 case 'n':
   VAR_13 = 1;
   break;
 case 'd':
   VAR_11 = 1;
   break;
 case 'H':
 case 'h':
   FUNC_19 (VAR_18, 0);

 case 'v':
 case 'V':
   FUNC_16 ("srconv");
   FUNC_8 (0);

 case 0:
   break;
 default:
   FUNC_19 (VAR_17, 1);

 }
    }


  VAR_26 = ((void*)0);
  if (VAR_14 < VAR_20)
    {
      VAR_25 = VAR_21[VAR_14];
      ++VAR_14;
      if (VAR_14 < VAR_20)
 {
   VAR_26 = VAR_21[VAR_14];
   ++VAR_14;
   if (VAR_14 < VAR_20)
     FUNC_19 (VAR_17, 1);
   if (FUNC_21 (VAR_25, VAR_26) == 0)
     {
       FUNC_10 (FUNC_0("input and output files must be different"));
     }
 }
    }
  else
    VAR_25 = 0;

  if (!VAR_25)
    {
      FUNC_10 (FUNC_0("no input file specified"));
    }

  if (!VAR_26)
    {



      int VAR_27 = FUNC_23 (VAR_25);

      VAR_26 = FUNC_26 (VAR_27 + 5);
      FUNC_22 (VAR_26, VAR_25);

      if (VAR_27 > 3
   && VAR_26[VAR_27 - 2] == '.'
   && VAR_26[VAR_27 - 1] == 'o')
 {
   VAR_26[VAR_27] = 'b';
   VAR_26[VAR_27 + 1] = 'j';
   VAR_26[VAR_27 + 2] = 0;
 }
      else
 {
   FUNC_20 (VAR_26, ".obj");
 }
    }

  VAR_6 = FUNC_5 (VAR_25, 0);

  if (!VAR_6)
    FUNC_2 (VAR_25);

  if (!FUNC_1 (VAR_6, VAR_10, &VAR_24))
    {
      FUNC_4 (VAR_25);

      if (FUNC_3 () == VAR_9)
 {
   FUNC_14 (VAR_24);
   FUNC_12 (VAR_24);
 }
      FUNC_8 (1);
    }

  VAR_12 = FUNC_11 (VAR_26, VAR_1);

  if (!VAR_12)
    FUNC_10 (FUNC_0("unable to open output file %s"), VAR_26);

  if (VAR_11)
    FUNC_17 ("ids %d %d\n", VAR_7, VAR_8);

  VAR_19 = FUNC_7 (VAR_6);

  if (!VAR_13)
    FUNC_15 (VAR_19);

  FUNC_25 (VAR_19);
  return 0;
}

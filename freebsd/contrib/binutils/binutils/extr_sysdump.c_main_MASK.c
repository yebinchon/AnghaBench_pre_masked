
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,char***) ;
 int FUNC_4 (int ,...) ;
 int VAR_6 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int,char**,char*,struct option*,int*) ;
 int FUNC_7 () ;

 int VAR_7 ;
 int FUNC_8 (char*) ;
 char* VAR_8 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

int
FUNC_13 (int VAR_11, char **VAR_12)
{
  char *VAR_13 = ((void*)0);
  int VAR_14;
  static struct option VAR_15[] =
  {
    {"help", 128, 0, 'h'},
    {"version", 128, 0, 'V'},
    {((void*)0), 128, 0, 0}
  };







  FUNC_1 (VAR_5, VAR_4);
  FUNC_11 (VAR_5);

  VAR_8 = VAR_12[0];
  FUNC_12 (VAR_8);

  FUNC_3 (&VAR_11, &VAR_12);

  while ((VAR_14 = FUNC_6 (VAR_11, VAR_12, "HhVv", VAR_15, (int *) ((void*)0))) != VAR_0)
    {
      switch (VAR_14)
 {
 case 'H':
 case 'h':
   FUNC_10 (VAR_10, 0);

 case 'v':
 case 'V':
   FUNC_8 ("sysdump");
   FUNC_2 (0);

 case 0:
   break;
 default:
   FUNC_10 (VAR_9, 1);

 }
    }



  if (VAR_7 < VAR_11)
    VAR_13 = VAR_12[VAR_7];

  if (!VAR_13)
    FUNC_4 (FUNC_0("no input file specified"));

  VAR_6 = FUNC_5 (VAR_13, VAR_1);

  if (!VAR_6)
    FUNC_4 (FUNC_0("cannot open input file %s"), VAR_13);

  FUNC_7 ();
  return 0;
}

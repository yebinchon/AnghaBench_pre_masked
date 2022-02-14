
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (char*,int ,int) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 int FUNC_10 (int (*) (char*),char*) ;
 int FUNC_11 (int ,int,char*,int,int ,char**) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (char*) ;

bfd *
FUNC_18 (char *VAR_4)
{
  bfd *VAR_5;
  int VAR_6;
  char *VAR_7;



  VAR_4 = FUNC_16 (VAR_4);


  VAR_6 = FUNC_11 (FUNC_9 ("PATH"), 1, VAR_4, VAR_1 | VAR_0, 0, &VAR_7);
  if (VAR_6 < 0)
    {
      FUNC_10 (FUNC_17, VAR_4);
      FUNC_12 (VAR_4);
    }
  FUNC_17 (VAR_4);
  VAR_4 = VAR_7;


  VAR_5 = FUNC_4 (VAR_4, VAR_3, VAR_6);
  if (!VAR_5)
    {
      FUNC_7 (VAR_6);
      FUNC_10 (FUNC_17, VAR_4);
      FUNC_8 ("\"%s\": can't open to read symbols: %s.", VAR_4,
      FUNC_3 (FUNC_5 ()));
    }
  FUNC_6 (VAR_5, 1);

  if (!FUNC_1 (VAR_5, VAR_2))
    {



      FUNC_2 (VAR_5);
      FUNC_10 (FUNC_17, VAR_4);
      FUNC_8 ("\"%s\": can't read symbols: %s.", VAR_4,
      FUNC_3 (FUNC_5 ()));
    }
  return (VAR_5);
}

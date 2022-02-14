
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asection ;
typedef int LONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int * FUNC_3 (char*,int ,int) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 int FUNC_10 (int (*) (char*),char*) ;
 int FUNC_11 (int ,int,char*,int,int ,char**) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static LONGEST
FUNC_14 (char *VAR_4)
{
  bfd *VAR_5;
  int VAR_6;
  char *VAR_7;
  LONGEST VAR_8 = (LONGEST) 0;
  asection *VAR_9;




  VAR_6 = FUNC_11 (FUNC_9 ("PATH"), 1, VAR_4, VAR_1 | VAR_0, 0, &VAR_7);
  if (VAR_6 < 0)
    {
      FUNC_12 (VAR_4);
    }
  VAR_4 = VAR_7;

  VAR_5 = FUNC_3 (VAR_4, VAR_3, VAR_6);
  if (!VAR_5)
    {
      FUNC_7 (VAR_6);
      FUNC_10 (FUNC_13, VAR_4);
      FUNC_8 ("\"%s\": can't open to read symbols: %s.", VAR_4,
      FUNC_2 (FUNC_4 ()));
    }

  if (!FUNC_0 (VAR_5, VAR_2))
    {
      FUNC_1 (VAR_5);
      FUNC_10 (FUNC_13, VAR_4);
      FUNC_8 ("\"%s\": can't read symbols: %s.", VAR_4,
      FUNC_2 (FUNC_4 ()));
    }




  VAR_9 = FUNC_5 (VAR_5, "$DEBUG$");
  if (VAR_9)
    VAR_8 += (LONGEST) FUNC_6 (VAR_5, VAR_9);


  VAR_9 = FUNC_5 (VAR_5, "$PINFO$");
  if (VAR_9)
    VAR_8 += (LONGEST) FUNC_6 (VAR_5, VAR_9);

  FUNC_1 (VAR_5);
  FUNC_13 (VAR_4);
  return VAR_8 * (LONGEST) 10;
}

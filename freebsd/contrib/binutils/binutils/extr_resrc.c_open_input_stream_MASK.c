
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,int ) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_6 ;
 int * FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,char*) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static FILE *
FUNC_13 (char *VAR_9)
{
  if (VAR_6 == VAR_1)
    {
      char *VAR_10;

      VAR_10 = FUNC_1 ();
      VAR_4 = (char *) FUNC_12 (FUNC_10 (VAR_10) + 5);
      FUNC_8 (VAR_4, "%s.irc", VAR_10);
      FUNC_5 (VAR_10);

      if (FUNC_7 (VAR_9, VAR_4))
 FUNC_2 (FUNC_0("can't execute `%s': %s"), VAR_9, FUNC_9 (VAR_5));

      VAR_3 = FUNC_3 (VAR_4, VAR_0);;
      if (VAR_3 == ((void*)0))
 FUNC_2 (FUNC_0("can't open temporary file `%s': %s"),
        VAR_4, FUNC_9 (VAR_5));

      if (VAR_8)
 FUNC_4 (VAR_7,
          FUNC_0("Using temporary file `%s' to read preprocessor output\n"),
   VAR_4);
    }
  else
    {
      VAR_3 = FUNC_6 (VAR_9, VAR_0);
      if (VAR_3 == ((void*)0))
 FUNC_2 (FUNC_0("can't popen `%s': %s"), VAR_9, FUNC_9 (VAR_5));
      if (VAR_8)
 FUNC_4 (VAR_7, FUNC_0("Using popen to read preprocessor output\n"));
    }

  FUNC_11 (VAR_2);
  return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (void)
{
  size_t VAR_3;
  const char *VAR_4;

  FUNC_0 (VAR_4, "COLUMNS");
  if (VAR_4)
    {
      int VAR_5 = FUNC_2 (VAR_4);
      if (VAR_5 > 0)
 VAR_1 = VAR_5;
    }

  FUNC_7 (FUNC_1("The following options are language-independent:\n"));

  FUNC_3 (VAR_0);
  FUNC_4 ();

  for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++)
    {
      FUNC_6 (FUNC_1("The %s front end recognizes the following options:\n\n"),
       VAR_2[VAR_3]);
      FUNC_3 (1U << VAR_3);
    }
  FUNC_5 ();
}

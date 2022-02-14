
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,...) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int VAR_3 ;
 char* FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static FILE *
FUNC_9 (char *VAR_5, const char *VAR_6, int VAR_7,
    const char *VAR_8, const char *VAR_9)
{
  char *VAR_10;
  int VAR_11;
  struct stat VAR_12;
  const char *VAR_13 = (FUNC_1 (VAR_9) ? "\"" : "");

  FUNC_8 (VAR_5, VAR_6);

  FUNC_4 (VAR_5 + VAR_7, "%s", VAR_0);
  VAR_10 = FUNC_7 (VAR_5 + VAR_7, ' ');
  if (VAR_10)
    *VAR_10 = 0;

  if (



      FUNC_7 (VAR_5, '/'))
    {
      VAR_11 = (FUNC_5 (VAR_5, &VAR_12) == 0



        );

      if (! VAR_11)
 {
   if (VAR_4)
     FUNC_2 (VAR_3, FUNC_0("Tried `%s'\n"), VAR_5);
   return ((void*)0);
 }
    }

  FUNC_8 (VAR_5, VAR_6);

  FUNC_4 (VAR_5 + VAR_7, "%s %s %s%s%s",
    VAR_0, VAR_8, VAR_13, VAR_9, VAR_13);

  if (VAR_4)
    FUNC_2 (VAR_3, FUNC_0("Using `%s'\n"), VAR_5);

  VAR_2 = FUNC_3 (VAR_5);
  return VAR_2;
}

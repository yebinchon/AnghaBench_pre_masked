
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 char const* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,char const*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (char*,char const*) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 char* FUNC_9 (scalar_t__) ;

__attribute__((used)) static char *
FUNC_10 (const char *VAR_1, const char *VAR_2, int VAR_3)
{
  struct stat VAR_4;
  char *VAR_5;

  VAR_5 = FUNC_9 (FUNC_8 (VAR_2)
   + FUNC_8 (VAR_1)



   + 10);
  FUNC_7 (VAR_5, VAR_2);

  FUNC_3 (VAR_5 + VAR_3, "%s", VAR_1);

  if (FUNC_6 (VAR_5, '/') != ((void*)0))
    {
      int VAR_6;

      VAR_6 = (FUNC_4 (VAR_5, &VAR_4) == 0



        );

      if (! VAR_6)
 {

   FUNC_2 (FUNC_0("Tried file: %s"), VAR_5);
   FUNC_1 (VAR_5);
   return ((void*)0);
 }
    }


  FUNC_2 (FUNC_0("Using file: %s"), VAR_5);

  return VAR_5;
}

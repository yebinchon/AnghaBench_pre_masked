
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* VAR_0 ;
 int FUNC_4 (char*,char*,char const*,char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (size_t) ;

__attribute__((used)) static FILE *
FUNC_7 (const char *VAR_1, const char *VAR_2)
{
  FILE *VAR_3;
  size_t VAR_4 = 1;
  char *VAR_5;

  VAR_4 += (VAR_1 != ((void*)0) ? FUNC_5 (VAR_1) : 0);
  VAR_4 += FUNC_5 (VAR_0);
  VAR_4 += (VAR_2 != ((void*)0) ? FUNC_5 (VAR_2) : 0);
  VAR_5 = FUNC_6 (VAR_4);
  FUNC_4 (VAR_5, "%s%s%s", (VAR_1 != ((void*)0) ? VAR_1 : ""), VAR_0,
    (VAR_2 != ((void*)0) ? VAR_2 : ""));
  if ((VAR_3 = FUNC_2 (VAR_5, "wb")) == ((void*)0))
    FUNC_1 (FUNC_0("can't create %s file ,%s' for output.\n"), (VAR_2 ? VAR_2 : "text"), VAR_5);
  FUNC_3 (VAR_5);
  return VAR_3;
}

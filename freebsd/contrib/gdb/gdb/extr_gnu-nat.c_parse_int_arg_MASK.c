
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_0, char *VAR_1)
{
  if (VAR_0)
    {
      char *VAR_2;
      int VAR_3 = FUNC_1 (VAR_0, &VAR_2, 10);
      if (*VAR_0 && *VAR_2 == '\0')
 return VAR_3;
    }
  FUNC_0 ("Illegal argument for \"%s\" command, should be an integer.", VAR_1);
}

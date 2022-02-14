
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 char* FUNC_0 (scalar_t__) ;
 struct type* FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static struct type *
FUNC_6 (const char *VAR_0, const char *VAR_1,
     int VAR_2)
{
  int VAR_3 = VAR_2 + FUNC_2 (VAR_1 + VAR_2);
  char *VAR_4;



  if (VAR_1[VAR_3] == ':')
    {
      struct type *VAR_5
 = FUNC_6 (VAR_0, VAR_1, VAR_3 + 2);
      if (VAR_5 != ((void*)0))
 return VAR_5;
    }

  VAR_4 = FUNC_0 (VAR_3 + 2 + FUNC_4 (VAR_0) + 1);
  FUNC_5 (VAR_4, VAR_1, VAR_3);
  FUNC_5 (VAR_4 + VAR_3, "::", 2);
  FUNC_3 (VAR_4 + VAR_3 + 2, VAR_0);

  return FUNC_1 (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 unsigned int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,unsigned int) ;
 char* FUNC_4 (struct type const*) ;

int
FUNC_5 (const char *VAR_0, const struct type *VAR_1)
{


  if (VAR_0[0] == '~')
    {
      char *VAR_2 = FUNC_4 (VAR_1);
      char *VAR_3 = FUNC_1 (VAR_2, '<');
      unsigned int VAR_4;


      if (VAR_3 == ((void*)0))
 VAR_4 = FUNC_2 (VAR_2);
      else
 VAR_4 = VAR_3 - VAR_2;
      if (FUNC_2 (VAR_0 + 1) != VAR_4 || FUNC_3 (VAR_2, VAR_0 + 1, VAR_4) != 0)
 FUNC_0 ("name of destructor must equal name of class");
      else
 return 1;
    }
  return 0;
}

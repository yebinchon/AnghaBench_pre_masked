
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct type* FUNC_1 (struct type*) ;
 char* FUNC_2 (struct type*) ;
 char* FUNC_3 (char const*,char*) ;

__attribute__((used)) static const char *
FUNC_4 (struct type *VAR_3)
{
  const char *VAR_4 = FUNC_2 (VAR_3);
  enum type_code VAR_5 = (VAR_3 == ((void*)0)) ? VAR_2 : FUNC_0 (VAR_3);

  if ((VAR_5 == VAR_0 || VAR_5 == VAR_1) && VAR_4 != ((void*)0))
    {
      const char *VAR_6 = FUNC_3 (VAR_4, "___XF_");
      if (VAR_6 == ((void*)0))
 return ((void*)0);
      else
 return VAR_6 + 5;
    }
  else if (VAR_5 == VAR_1 && FUNC_1 (VAR_3) != VAR_3)
    return FUNC_4 (FUNC_1 (VAR_3));
  else
    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;


 struct type* FUNC_2 (struct type*,char*) ;
 struct type* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;

__attribute__((used)) static struct type *
FUNC_5 (struct type *VAR_0)
{
  struct type *VAR_1;

  if (VAR_0 == ((void*)0))
    return ((void*)0);





  FUNC_0 (VAR_0);

  switch (FUNC_1 (VAR_0))
    {
    default:
      return VAR_0;
    case 129:
      VAR_1 = FUNC_3 (VAR_0);
      if (VAR_1 != ((void*)0))
 return FUNC_4 (VAR_1);
      return VAR_0;
    case 128:
      VAR_1 = FUNC_2 (VAR_0, "___XVU");
      if (VAR_1 != ((void*)0))
 return FUNC_4 (VAR_1);
      return VAR_0;
    }
}

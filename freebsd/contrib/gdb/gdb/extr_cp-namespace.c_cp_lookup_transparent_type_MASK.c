
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 struct type* FUNC_0 (char const*) ;
 char* FUNC_1 (int ) ;
 struct type* FUNC_2 (char const*,char const*,int ) ;
 int FUNC_3 (int ) ;

struct type *
FUNC_4 (const char *VAR_0)
{

  struct type *VAR_1 = FUNC_0 (VAR_0);
  const char *VAR_2;

  if (VAR_1 != ((void*)0))
    return VAR_1;



  VAR_2 = FUNC_1 (FUNC_3 (0));

  if (VAR_2[0] == '\0')
    return ((void*)0);

  return FUNC_2 (VAR_0, VAR_2, 0);
}

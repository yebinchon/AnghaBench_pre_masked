
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (struct type*,int) ;
 struct type* FUNC_2 (struct type*,int) ;
 int * FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7 (struct type *VAR_1, int VAR_2, struct type *VAR_3)
{
  struct type *VAR_4;
  char *VAR_5 = FUNC_1 (VAR_1, VAR_2);
  char *VAR_6 = ((void*)0);

  if (*VAR_5 != '_')
    return 0;

  if (VAR_5[1] == 'v' && VAR_5[2] == 'b' && FUNC_5 (VAR_5[3]))
    VAR_6 = VAR_5 + 4;

  if (VAR_5[1] == '_' && VAR_5[2] == 'v' && VAR_5[3] == 'b' && VAR_5[4] == '_')
    VAR_6 = VAR_5 + 5;

  if (VAR_6 == ((void*)0))

    return 0;



  VAR_4 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_4 == ((void*)0)
      || FUNC_0 (VAR_4) != VAR_0)

    return 0;





  if (FUNC_4 (VAR_4) == VAR_3)
    return 1;

  if (FUNC_3 (VAR_3) != ((void*)0)
      && FUNC_3 (FUNC_4 (VAR_4)) != ((void*)0)
      && FUNC_6 (FUNC_3 (VAR_3),
   FUNC_3 (FUNC_4 (VAR_4))) == 0)
    return 1;
  return 0;
}

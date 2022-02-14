
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int *,int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4 (int VAR_1, sigset_t *VAR_2, sigset_t *VAR_3)
{
  sigset_t VAR_4, VAR_5;
  int VAR_6;

  FUNC_0 (VAR_1, VAR_2, &VAR_4, &VAR_5);

  if (!VAR_3)
    return 0;

  for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++)
    if (FUNC_3 (VAR_2, VAR_6))
      if (!FUNC_3 (VAR_3, VAR_6)
   || FUNC_3 (&VAR_4, VAR_6)
   || FUNC_3 (&VAR_5, VAR_6))
 FUNC_1 (VAR_2, VAR_6);

  if (FUNC_2 (VAR_2))
    return 0;

  return 1;
}

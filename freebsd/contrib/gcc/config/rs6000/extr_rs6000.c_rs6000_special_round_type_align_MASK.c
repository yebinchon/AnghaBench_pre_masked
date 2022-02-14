
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * VAR_3 ;

unsigned int
FUNC_6 (tree VAR_4, unsigned int VAR_5,
     unsigned int VAR_6)
{
  unsigned int VAR_7 = FUNC_0 (VAR_5, VAR_6);
  tree VAR_8 = FUNC_4 (VAR_4);


  while (VAR_8 != ((void*)0) && FUNC_2 (VAR_8) != VAR_2)
    VAR_8 = FUNC_1 (VAR_8);

  if (VAR_8 != ((void*)0) && VAR_8 != VAR_4)
    {
      VAR_4 = FUNC_3 (VAR_8);
      while (FUNC_2 (VAR_4) == VAR_0)
 VAR_4 = FUNC_3 (VAR_4);

      if (VAR_4 != VAR_3 && FUNC_5 (VAR_4) == VAR_1)
 VAR_7 = FUNC_0 (VAR_7, 64);
    }

  return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;

void
FUNC_3 (bfd *VAR_1, asection *VAR_2, void *VAR_3)
{
  asection **VAR_4 = (asection **) VAR_3;

  if (0 == (FUNC_0 (VAR_1, VAR_2) & VAR_0))
    return;
  if (!*VAR_4)
    *VAR_4 = VAR_2;
  else if (FUNC_2 (VAR_1, *VAR_4) > FUNC_2 (VAR_1, VAR_2))
    *VAR_4 = VAR_2;
  else if (FUNC_2 (VAR_1, *VAR_4) == FUNC_2 (VAR_1, VAR_2)
    && (FUNC_1 (VAR_1, (*VAR_4))
        <= FUNC_1 (VAR_1, VAR_2)))
    *VAR_4 = VAR_2;
}

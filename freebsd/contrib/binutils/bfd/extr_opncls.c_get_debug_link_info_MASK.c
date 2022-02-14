
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef unsigned long bfd ;
typedef int asection ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long*,int *) ;
 int * FUNC_2 (unsigned long*,int ) ;
 int FUNC_3 (unsigned long*,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6 (bfd *VAR_1, unsigned long *VAR_2)
{
  asection *VAR_3;
  unsigned long VAR_4;
  bfd_byte *VAR_5;
  int VAR_6;
  char *VAR_7;

  FUNC_0 (VAR_1);
  FUNC_0 (VAR_2);

  VAR_3 = FUNC_2 (VAR_1, VAR_0);

  if (VAR_3 == ((void*)0))
    return ((void*)0);

  if (!FUNC_3 (VAR_1, VAR_3, &VAR_5))
    {
      if (VAR_5 != ((void*)0))
 FUNC_4 (VAR_5);
      return ((void*)0);
    }


  VAR_7 = (char *) VAR_5;
  VAR_6 = FUNC_5 (VAR_7) + 1;
  VAR_6 = (VAR_6 + 3) & ~3;

  VAR_4 = FUNC_1 (VAR_1, VAR_5 + VAR_6);

  *VAR_2 = VAR_4;
  return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asection ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *,char const*) ;
 unsigned long FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 unsigned long FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5 (bfd *VAR_1, asection *VAR_2, const char *VAR_3,
     const char *VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
  unsigned long VAR_7;
  unsigned long VAR_8;


  VAR_7 = 4 * 3;
  VAR_7 += FUNC_4 (VAR_4) + 1;
  VAR_7 = ((VAR_7 + 3) & ~3);


  FUNC_2 (VAR_7 <= VAR_0);


  if (VAR_7 > FUNC_1 (VAR_1, VAR_2))
    return 0;


  if (FUNC_0 (VAR_1, VAR_3) != (FUNC_4 (VAR_4) + 1)
      || FUNC_3 (VAR_3 + 12, VAR_4) != 0)
    return 0;


  VAR_8 = FUNC_0 (VAR_1, VAR_3 + 4);
  if (VAR_5 != (unsigned long)-1 && VAR_8 != VAR_5)
    return 0;

  VAR_7 += VAR_8;
  VAR_7 = ((VAR_7 + 3) & ~3);


  if (VAR_7 > FUNC_1 (VAR_1, VAR_2))
    return 0;


  if (FUNC_0 (VAR_1, VAR_3 + 8) != VAR_6)
    return 0;

  return 1;
}

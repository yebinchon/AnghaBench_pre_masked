
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned
FUNC_4 (unsigned VAR_0, unsigned VAR_1)
{
  unsigned VAR_2 = FUNC_1 (VAR_0);
  unsigned VAR_3 = FUNC_0 (VAR_0);

  switch (VAR_1)
    {
    case 16:
      if (VAR_2 > 7 || VAR_3 > 3)
        goto bad_scalar;
      return VAR_2 | (VAR_3 << 3);

    case 32:
      if (VAR_2 > 15 || VAR_3 > 1)
        goto bad_scalar;
      return VAR_2 | (VAR_3 << 4);

    default:
    bad_scalar:
      FUNC_3 (FUNC_2("scalar out of range for multiply instruction"));
    }

  return 0;
}

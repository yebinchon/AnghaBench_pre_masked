
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef scalar_t__ unichar ;
typedef int rc_uint_type ;
typedef int bfd_byte ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static unichar *
FUNC_4 (windres_bfd *VAR_0, const bfd_byte *VAR_1, rc_uint_type VAR_2,
      rc_uint_type *VAR_3)
{
  rc_uint_type VAR_4, VAR_5;
  unichar *VAR_6;

  VAR_4 = 0;
  while (1)
    {
      if (VAR_2 < VAR_4 * 2 + 2)
 FUNC_2 (FUNC_0("null terminated unicode string"));
      if (FUNC_3 (VAR_0, VAR_1 + VAR_4 * 2, 2) == 0)
 break;
      ++VAR_4;
    }

  VAR_6 = (unichar *) FUNC_1 ((VAR_4 + 1) * sizeof (unichar));

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    VAR_6[VAR_5] = FUNC_3 (VAR_0, VAR_1 + VAR_5 * 2, 2);
  VAR_6[VAR_5] = 0;

  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_4;

  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef int unichar ;
typedef int rc_uint_type ;
typedef int bfd_byte ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *,int const) ;

__attribute__((used)) static rc_uint_type
FUNC_4 (windres_bfd *VAR_0, rc_uint_type VAR_1, const unichar *VAR_2)
{
  rc_uint_type VAR_3 = 0;

  if (VAR_2 != ((void*)0))
    VAR_3 = FUNC_2 (VAR_2);

  if (VAR_0)
    {
      bfd_byte *VAR_4;
      rc_uint_type VAR_5;
      VAR_4 = (bfd_byte *) FUNC_0 ( (VAR_3 + 1) * sizeof (unichar));
      for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 FUNC_3 (VAR_0, VAR_4 + (VAR_5 * sizeof (unichar)), VAR_2[VAR_5]);
      FUNC_3 (VAR_0, VAR_4 + (VAR_3 * sizeof (unichar)), 0);
      FUNC_1 (VAR_0, VAR_4, VAR_1, (VAR_3 + 1) * sizeof (unichar));
    }
  VAR_1 += (rc_uint_type) ((VAR_3 + 1) * sizeof (unichar));

  return VAR_1;
}

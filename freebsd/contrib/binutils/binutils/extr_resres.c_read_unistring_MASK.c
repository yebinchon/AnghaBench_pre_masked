
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef scalar_t__ unichar ;
typedef int rc_uint_type ;
typedef int bfd_byte ;


 int FUNC_0 (int *,int*,int,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unichar *
FUNC_3 (windres_bfd *VAR_0, rc_uint_type *VAR_1, rc_uint_type VAR_2,
  rc_uint_type *VAR_3)
{
  unichar *VAR_4;
  bfd_byte VAR_5[2];
  unichar VAR_6;
  unichar *VAR_7;
  rc_uint_type VAR_8;
  rc_uint_type VAR_9 = VAR_1[0];

  do
    {
      FUNC_0 (VAR_0, &VAR_9, VAR_2, VAR_5, sizeof (unichar));
      VAR_6 = FUNC_1 (VAR_0, VAR_5, 2);
    }
  while (VAR_6 != 0);
  VAR_8 = ((VAR_9 - VAR_1[0]) / sizeof (unichar));


  VAR_7 = VAR_4 = (unichar *) FUNC_2 (sizeof (unichar) * VAR_8);
  do
    {
      FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_5, sizeof (unichar));
      VAR_6 = FUNC_1 (VAR_0, VAR_5, 2);
      *VAR_7++ = VAR_6;
    }
  while (VAR_6 != 0);
  *VAR_3 = VAR_8 - 1;
  return VAR_4;
}

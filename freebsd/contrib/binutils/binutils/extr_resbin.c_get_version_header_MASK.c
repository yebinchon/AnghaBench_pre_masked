
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef int unichar ;
typedef int rc_uint_type ;
typedef scalar_t__ bfd_byte ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,scalar_t__ const*,int,int*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__ const*,int) ;

__attribute__((used)) static void
FUNC_5 (windres_bfd *VAR_0, const bfd_byte *VAR_1, rc_uint_type VAR_2,
      const char *VAR_3, unichar **VAR_4,
      rc_uint_type *VAR_5, rc_uint_type *VAR_6, rc_uint_type *VAR_7,
      rc_uint_type *VAR_8)
{
  if (VAR_2 < 8)
    FUNC_3 (VAR_3);

  *VAR_5 = FUNC_4 (VAR_0, VAR_1, 2);
  *VAR_6 = FUNC_4 (VAR_0, VAR_1 + 2, 2);
  *VAR_7 = FUNC_4 (VAR_0, VAR_1 + 4, 2);

  *VAR_8 = 6;

  VAR_2 -= 6;
  VAR_1 += 6;

  if (VAR_3 == ((void*)0))
    {
      rc_uint_type VAR_9;

      *VAR_4 = FUNC_2 (VAR_0, VAR_1, VAR_2, &VAR_9);
      *VAR_8 += (VAR_9 + 1) * sizeof (unichar);
    }
  else
    {
      while (1)
 {
   if (VAR_2 < 2)
     FUNC_3 (VAR_3);
   if (FUNC_4 (VAR_0, VAR_1, 2) != (bfd_byte) *VAR_3)
     FUNC_1 (FUNC_0("unexpected version string"));

   *VAR_8 += 2;
   VAR_2 -= 2;
   VAR_1 += 2;

   if (*VAR_3 == '\0')
     break;

   ++VAR_3;
 }
    }

  *VAR_8 = (*VAR_8 + 3) &~ 3;
}

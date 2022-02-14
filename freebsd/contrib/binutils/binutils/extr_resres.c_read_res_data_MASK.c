
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef scalar_t__ rc_uint_type ;


 int FUNC_0 (char*,int ,long,long,long) ;
 int VAR_0 ;
 int FUNC_1 (int *,void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (windres_bfd *VAR_1, rc_uint_type *VAR_2, rc_uint_type VAR_3, void *VAR_4,
        rc_uint_type VAR_5)
{
  if ((VAR_2[0] + VAR_5) > VAR_3)
    FUNC_0 ("%s: unexpected end of file %ld/%ld %ld", VAR_0,(long) VAR_2[0],
        (long) VAR_3, (long) VAR_5);
  FUNC_1 (VAR_1, VAR_4, VAR_2[0], VAR_5);
  VAR_2[0] += VAR_5;
}

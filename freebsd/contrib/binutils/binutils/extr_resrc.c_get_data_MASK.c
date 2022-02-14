
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rc_uint_type ;
typedef int bfd_byte ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,long,long) ;
 scalar_t__ FUNC_2 (int *,int,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_0, bfd_byte *VAR_1, rc_uint_type VAR_2, const char *VAR_3)
{
  rc_uint_type VAR_4;

  VAR_4 = (rc_uint_type) FUNC_2 (VAR_1, 1, VAR_2, VAR_0);
  if (VAR_4 == VAR_2)
    return;

  FUNC_1 (FUNC_0("%s: read of %lu returned %lu"), VAR_3, (long) VAR_2, (long) VAR_4);
}

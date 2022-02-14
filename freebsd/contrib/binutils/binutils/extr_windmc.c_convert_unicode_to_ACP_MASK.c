
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unichar ;
typedef int rc_uint_type ;


 int FUNC_0 (int *,int const*,char**,scalar_t__) ;
 int FUNC_1 (char*,long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static char *
FUNC_2 (const unichar *VAR_1)
{
  char *VAR_2;
  rc_uint_type VAR_3;

  if (! VAR_1)
    return ((void*)0);
  FUNC_0 (&VAR_3, VAR_1, &VAR_2, VAR_0);
  if (! VAR_2)
    FUNC_1 ("unicode string not mappable to ASCII codepage 0x%lx.\n", (long) VAR_0);
  return VAR_2;
}

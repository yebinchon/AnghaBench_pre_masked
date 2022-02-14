
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char const*,...) ;

void
FUNC_1 (FILE *VAR_2, const char *VAR_3, void *VAR_4)
{
  if (VAR_0 || VAR_1)
    FUNC_0 (VAR_2, "%s#", VAR_3);
  else
    FUNC_0 (VAR_2, "%s%p", VAR_3, VAR_4);
}

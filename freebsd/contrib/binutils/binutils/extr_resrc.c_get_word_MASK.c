
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (FILE *VAR_0, const char *VAR_1)
{
  int VAR_2, VAR_3;

  VAR_2 = FUNC_1 (VAR_0);
  VAR_3 = FUNC_1 (VAR_0);
  if (FUNC_0 (VAR_0))
    FUNC_2 (VAR_1);
  return ((VAR_3 & 0xff) << 8) | (VAR_2 & 0xff);
}

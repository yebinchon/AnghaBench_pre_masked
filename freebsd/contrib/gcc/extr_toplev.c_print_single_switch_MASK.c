
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2 (FILE *VAR_0, int VAR_1, int VAR_2,
       const char *VAR_3, const char *VAR_4, const char *VAR_5,
       const char *VAR_6, const char *VAR_7)
{


  int VAR_8 = FUNC_1 (VAR_4) + FUNC_1 (VAR_6) + FUNC_1 (VAR_7);

  if (VAR_1 != 0
      && VAR_1 + VAR_8 > VAR_2)
    {
      FUNC_0 (VAR_0, "%s", VAR_5);
      VAR_1 = 0;
    }
  if (VAR_1 == 0)
    {
      FUNC_0 (VAR_0, "%s", VAR_3);
      VAR_1 = FUNC_1 (VAR_3);
    }
  FUNC_0 (VAR_0, "%s%s%s", VAR_4, VAR_6, VAR_7);
  VAR_1 += VAR_8;
  return VAR_1;
}

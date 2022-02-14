
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;


 int FUNC_0 (char const*,int,struct objfile*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_0, int VAR_1,
           struct objfile *VAR_2)
{
  if (VAR_0[VAR_1] == ':')
    {
      int VAR_3;
      int VAR_4 = VAR_1 + 2;

      VAR_4 += FUNC_1 (VAR_0 + VAR_4);
      VAR_3 = FUNC_2 (VAR_0, VAR_4,
          VAR_2);

      if (!VAR_3)
 VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);

      return VAR_3;
    }
  else
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int dummy; } ;
typedef int string ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (struct work_stuff*,char const**,int,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (struct work_stuff *VAR_0, const char **VAR_1,
                     string *VAR_2)
{
  int VAR_3;
  int VAR_4 = 0;

  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3 == -1)
    return 0;
  if ((int) FUNC_2 (*VAR_1) >= VAR_3)
    {
      FUNC_1 (VAR_0, VAR_1, VAR_3, VAR_2);
      VAR_4 = 1;
    }

  return (VAR_4);
}

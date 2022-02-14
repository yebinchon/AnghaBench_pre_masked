
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _func_map {int (* func ) (char const*) ;scalar_t__ name; } ;


 scalar_t__ FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 struct _func_map* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, const char *VAR_3)
{
  struct _func_map *VAR_4;


  if (!VAR_3 || VAR_3[0] == '\0')
    return 1;




  for (VAR_4 = VAR_0; VAR_4->name; VAR_4++)
    if (FUNC_0(VAR_4->name, VAR_2))
      return (VAR_4->func)(VAR_3);

  FUNC_1(VAR_1, "conf: unknown global key: \"%s\"\n", VAR_2);
  return 1;
}

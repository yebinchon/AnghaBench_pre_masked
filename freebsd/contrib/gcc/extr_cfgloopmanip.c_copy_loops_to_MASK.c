
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int dummy; } ;
struct loop {int dummy; } ;


 struct loop* FUNC_0 (struct loops*,struct loop*,struct loop*) ;
 int FUNC_1 (struct loops*,struct loop*,struct loop*) ;

__attribute__((used)) static void
FUNC_2 (struct loops *VAR_0, struct loop **VAR_1, int VAR_2, struct loop *VAR_3)
{
  struct loop *VAR_4;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    {
      VAR_4 = FUNC_0 (VAR_0, VAR_1[VAR_5], VAR_3);
      FUNC_1 (VAR_0, VAR_1[VAR_5], VAR_4);
    }
}

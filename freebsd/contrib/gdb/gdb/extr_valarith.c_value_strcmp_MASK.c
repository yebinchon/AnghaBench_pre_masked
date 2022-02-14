
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;

__attribute__((used)) static int
FUNC_3 (struct value *VAR_0, struct value *VAR_1)
{
  int VAR_2 = FUNC_0 (FUNC_2 (VAR_0));
  int VAR_3 = FUNC_0 (FUNC_2 (VAR_1));
  char *VAR_4 = FUNC_1 (VAR_0);
  char *VAR_5 = FUNC_1 (VAR_1);
  int VAR_6, VAR_7 = VAR_2 < VAR_3 ? VAR_2 : VAR_3;

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    {
      if (VAR_4[VAR_6] < VAR_5[VAR_6])
        return -1;
      else if (VAR_4[VAR_6] > VAR_5[VAR_6])
        return 1;
      else
        continue;
    }

  if (VAR_2 < VAR_3)
    return -1;
  else if (VAR_2 > VAR_3)
    return 1;
  else
    return 0;
}

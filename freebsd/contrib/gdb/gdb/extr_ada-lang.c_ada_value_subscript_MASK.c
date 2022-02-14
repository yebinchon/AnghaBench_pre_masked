
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct value*) ;
 struct value* FUNC_3 (struct value*) ;
 struct type* FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct value*) ;
 struct value* FUNC_7 (struct value*,int ) ;
 struct value* FUNC_8 (struct value*,int,struct value**) ;

struct value *
FUNC_9 (struct value *VAR_1, int VAR_2, struct value **VAR_3)
{
  int VAR_4;
  struct value *VAR_5;
  struct type *VAR_6;

  VAR_5 = FUNC_3 (VAR_1);

  VAR_6 = FUNC_4 (FUNC_2 (VAR_5));
  if (FUNC_0 (VAR_6) == VAR_0
      && FUNC_1 (VAR_6, 0) > 0)
    return FUNC_8 (VAR_5, VAR_2, VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 1)
    {
      if (FUNC_0 (VAR_6) != VAR_0)
 FUNC_5 ("too many subscripts (%d expected)", VAR_4);
      VAR_5 = FUNC_7 (VAR_5, FUNC_6 (VAR_3[VAR_4]));
    }
  return VAR_5;
}

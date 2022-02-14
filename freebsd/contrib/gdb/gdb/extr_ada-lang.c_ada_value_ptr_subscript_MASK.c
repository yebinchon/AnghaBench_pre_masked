
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ LONGEST ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct type*) ;
 struct value* FUNC_6 (struct value*,struct value*) ;
 struct value* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct value*) ;
 int FUNC_9 (int ,scalar_t__) ;
 struct value* FUNC_10 (struct value*) ;
 struct value* FUNC_11 (struct value*,int ) ;

struct value *
FUNC_12 (struct value *VAR_2, struct type *VAR_3, int VAR_4,
    struct value **VAR_5)
{
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += 1)
    {
      LONGEST VAR_7, VAR_8;
      struct value *VAR_9;

      if (FUNC_0 (VAR_3) != VAR_0)
 FUNC_3 ("too many subscripts (%d expected)", VAR_6);
      VAR_2 = FUNC_7 (FUNC_5 (FUNC_2 (VAR_3)),
   FUNC_8 (VAR_2));
      FUNC_4 (FUNC_1 (VAR_3), &VAR_7, &VAR_8);
      if (VAR_7 == 0)
 VAR_9 = VAR_5[VAR_6];
      else
 VAR_9 = FUNC_11 (VAR_5[VAR_6], FUNC_9 (VAR_1, VAR_7));
      VAR_2 = FUNC_6 (VAR_2, VAR_9);
      VAR_3 = FUNC_2 (VAR_3);
    }

  return FUNC_10 (VAR_2);
}

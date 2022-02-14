
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct value* FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct value*,int,int) ;
 struct value* FUNC_6 (struct type*) ;
 int FUNC_7 (int ) ;
 struct type* FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*,int,int) ;
 int FUNC_10 (struct type*,int,int) ;
 struct type* FUNC_11 (struct type*) ;
 int FUNC_12 (struct type*) ;
 int FUNC_13 (struct type*) ;
 int FUNC_14 (struct type*) ;
 int FUNC_15 (struct type*) ;
 int FUNC_16 (int ,struct value*,int ,int ) ;
 struct value* FUNC_17 (struct value*,int *) ;
 struct value* FUNC_18 (struct value*) ;
 struct value* FUNC_19 (int ) ;

__attribute__((used)) static struct value *
FUNC_20 (struct type *VAR_1, struct value *VAR_2, CORE_ADDR *VAR_3)
{
  struct type *VAR_4 = FUNC_11 (VAR_1);
  struct type *VAR_5 = FUNC_8 (VAR_1);
  struct value *VAR_6 = FUNC_6 (VAR_5);
  struct value *VAR_7 = FUNC_6 (VAR_4);
  CORE_ADDR VAR_8;
  int VAR_9;

  for (VAR_9 = FUNC_4 (FUNC_7 (FUNC_3 (VAR_2))); VAR_9 > 0; VAR_9 -= 1)
    {
      FUNC_16 (FUNC_2 (VAR_7),
       FUNC_19 (FUNC_5 (VAR_2, VAR_9, 0)),
       FUNC_9 (VAR_4, VAR_9, 0),
       FUNC_10 (VAR_4, VAR_9, 0));
      FUNC_16 (FUNC_2 (VAR_7),
       FUNC_19 (FUNC_5 (VAR_2, VAR_9, 1)),
       FUNC_9 (VAR_4, VAR_9, 1),
       FUNC_10 (VAR_4, VAR_9, 1));
    }

  VAR_7 = FUNC_17 (VAR_7, VAR_3);

  FUNC_16 (FUNC_2 (VAR_6),
   VAR_2,
   FUNC_14 (VAR_5),
   FUNC_15 (VAR_5));
  FUNC_16 (FUNC_2 (VAR_6),
   FUNC_1 (VAR_7),
   FUNC_12 (VAR_5),
   FUNC_13 (VAR_5));

  VAR_6 = FUNC_17 (VAR_6, VAR_3);

  if (FUNC_0 (VAR_1) == VAR_0)
    return FUNC_18 (VAR_6);
  else
    return VAR_6;
}

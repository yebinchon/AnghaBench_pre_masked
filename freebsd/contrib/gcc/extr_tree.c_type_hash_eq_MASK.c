
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_hash {scalar_t__ hash; int type; } ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;



 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int
FUNC_17 (const void *VAR_1, const void *VAR_2)
{
  const struct type_hash *VAR_3 = VAR_1, *VAR_4 = VAR_2;


  if (VAR_3->hash != VAR_4->hash
      || FUNC_0 (VAR_3->type) != FUNC_0 (VAR_4->type)
      || FUNC_1 (VAR_3->type) != FUNC_1 (VAR_4->type)
      || !FUNC_14 (FUNC_4 (VAR_3->type),
     FUNC_4 (VAR_4->type))
      || FUNC_2 (VAR_3->type) != FUNC_2 (VAR_4->type)
      || FUNC_10 (VAR_3->type) != FUNC_10 (VAR_4->type))
    return 0;

  switch (FUNC_0 (VAR_3->type))
    {
    case 128:
    case 141:
    case 135:
    case 131:
      return 1;

    case 129:
      return FUNC_13 (VAR_3->type) == FUNC_13 (VAR_4->type);

    case 140:
      if (FUNC_12 (VAR_3->type) != FUNC_12 (VAR_4->type)
   && !(FUNC_12 (VAR_3->type)
        && FUNC_0 (FUNC_12 (VAR_3->type)) == VAR_0
        && FUNC_12 (VAR_4->type)
        && FUNC_0 (FUNC_12 (VAR_4->type)) == VAR_0
        && FUNC_16 (FUNC_12 (VAR_3->type),
       FUNC_12 (VAR_4->type))))
 return 0;



    case 138:
    case 133:
    case 142:
      return ((FUNC_7 (VAR_3->type) == FUNC_7 (VAR_4->type)
        || FUNC_15 (FUNC_7 (VAR_3->type),
          FUNC_7 (VAR_4->type)))
       && (FUNC_9 (VAR_3->type) == FUNC_9 (VAR_4->type)
    || FUNC_15 (FUNC_9 (VAR_3->type),
      FUNC_9 (VAR_4->type))));

    case 136:
      return FUNC_11 (VAR_3->type) == FUNC_11 (VAR_4->type);

    case 137:
      return (FUNC_8 (VAR_3->type) == FUNC_8 (VAR_4->type)
       && (FUNC_3 (VAR_3->type) == FUNC_3 (VAR_4->type)
    || (FUNC_3 (VAR_3->type)
        && FUNC_0 (FUNC_3 (VAR_3->type)) == VAR_0
        && FUNC_3 (VAR_4->type)
        && FUNC_0 (FUNC_3 (VAR_4->type)) == VAR_0
        && FUNC_16 (FUNC_3 (VAR_3->type),
       FUNC_3 (VAR_4->type)))));

    case 143:
      return FUNC_5 (VAR_3->type) == FUNC_5 (VAR_4->type);

    case 132:
    case 130:
    case 134:
      return (FUNC_6 (VAR_3->type) == FUNC_6 (VAR_4->type)
       || (FUNC_6 (VAR_3->type)
    && FUNC_0 (FUNC_6 (VAR_3->type)) == VAR_0
    && FUNC_6 (VAR_4->type)
    && FUNC_0 (FUNC_6 (VAR_4->type)) == VAR_0
    && FUNC_16 (FUNC_6 (VAR_3->type),
          FUNC_6 (VAR_4->type))));

    case 139:
      return (FUNC_3 (VAR_3->type) == FUNC_3 (VAR_4->type)
       || (FUNC_3 (VAR_3->type)
    && FUNC_0 (FUNC_3 (VAR_3->type)) == VAR_0
    && FUNC_3 (VAR_4->type)
    && FUNC_0 (FUNC_3 (VAR_4->type)) == VAR_0
    && FUNC_16 (FUNC_3 (VAR_3->type),
          FUNC_3 (VAR_4->type))));

    default:
      return 0;
    }
}

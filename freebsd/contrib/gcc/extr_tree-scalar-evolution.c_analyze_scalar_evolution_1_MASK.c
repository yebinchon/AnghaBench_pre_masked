
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct loop {int dummy; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {struct loop* loop_father; } ;



 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct loop*,struct loop*,int ) ;
 struct loop* FUNC_8 (struct loop*,struct loop*) ;
 int FUNC_9 (struct loop*,TYPE_1__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct loop*,int ) ;
 int FUNC_12 (struct loop*,int ) ;
 int FUNC_13 (struct loop*,int ,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static tree
FUNC_17 (struct loop *VAR_5, tree VAR_6, tree VAR_7)
{
  tree VAR_8, VAR_9 = FUNC_4 (VAR_6);
  basic_block VAR_10;
  struct loop *VAR_11;

  if (VAR_5 == ((void*)0) || FUNC_2 (VAR_9) == VAR_2)
    return VAR_3;

  if (FUNC_2 (VAR_6) != VAR_1)
    return FUNC_13 (VAR_5, VAR_0, VAR_6, VAR_9);

  VAR_8 = FUNC_1 (VAR_6);
  VAR_10 = FUNC_6 (VAR_8);
  VAR_11 = VAR_10 ? VAR_10->loop_father : ((void*)0);

  if (VAR_10 == ((void*)0)
      || !FUNC_9 (VAR_5, VAR_10))
    {

      VAR_7 = VAR_6;
      goto set_and_end;
    }

  if (VAR_7 != VAR_4)
    {
      if (VAR_5 != VAR_10->loop_father)
 VAR_7 = FUNC_7
     (FUNC_8 (VAR_5, VAR_10->loop_father), VAR_10->loop_father, VAR_7);

      goto set_and_end;
    }

  if (VAR_5 != VAR_11)
    {
      VAR_7 = FUNC_17 (VAR_11, VAR_6, VAR_4);
      VAR_7 = FUNC_7 (VAR_5, VAR_11, VAR_7);

      goto set_and_end;
    }

  switch (FUNC_2 (VAR_8))
    {
    case 129:
      VAR_7 = FUNC_13 (VAR_5, VAR_8, FUNC_3 (VAR_8, 1), VAR_9);

      if (FUNC_0 (VAR_9)
   && !FUNC_5 (VAR_7)
   && FUNC_15 (VAR_6))
 VAR_7 = FUNC_10 (VAR_7, VAR_8);
      break;

    case 128:
      if (FUNC_14 (VAR_8))
 VAR_7 = FUNC_12 (VAR_5, VAR_8);
      else
 VAR_7 = FUNC_11 (VAR_5, VAR_8);
      break;

    default:
      VAR_7 = VAR_3;
      break;
    }

 set_and_end:


  if (VAR_7 == VAR_3)
    VAR_7 = VAR_6;

  if (VAR_5 == VAR_11)
    FUNC_16 (VAR_6, VAR_7);

  return VAR_7;
}

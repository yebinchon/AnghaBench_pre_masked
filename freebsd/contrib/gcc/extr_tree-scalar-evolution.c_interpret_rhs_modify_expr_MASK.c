
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;



 int FUNC_0 (int ) ;







 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct loop*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static tree
FUNC_10 (struct loop *VAR_2, tree VAR_3,
      tree VAR_4, tree VAR_5)
{
  tree VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

  if (FUNC_9 (VAR_4))
    return FUNC_4 (VAR_5, VAR_4, VAR_3);

  switch (FUNC_1 (VAR_4))
    {
    case 129:
      VAR_7 = FUNC_2 (VAR_4, 0);
      VAR_8 = FUNC_2 (VAR_4, 1);
      VAR_9 = FUNC_3 (VAR_2, VAR_7);
      VAR_10 = FUNC_3 (VAR_2, VAR_8);
      VAR_9 = FUNC_4 (VAR_5, VAR_9, VAR_3);
      VAR_10 = FUNC_4 (VAR_5, VAR_10, VAR_3);
      VAR_6 = FUNC_7 (VAR_5, VAR_9, VAR_10);
      break;

    case 133:
      VAR_7 = FUNC_2 (VAR_4, 0);
      VAR_8 = FUNC_2 (VAR_4, 1);
      VAR_9 = FUNC_3 (VAR_2, VAR_7);
      VAR_10 = FUNC_3 (VAR_2, VAR_8);
      VAR_9 = FUNC_4 (VAR_5, VAR_9, VAR_3);
      VAR_10 = FUNC_4 (VAR_5, VAR_10, VAR_3);
      VAR_6 = FUNC_5 (VAR_5, VAR_9, VAR_10);
      break;

    case 131:
      VAR_7 = FUNC_2 (VAR_4, 0);
      VAR_9 = FUNC_3 (VAR_2, VAR_7);
      VAR_9 = FUNC_4 (VAR_5, VAR_9, VAR_3);

      VAR_6 = FUNC_6 (VAR_5, VAR_9,
     FUNC_8 (VAR_5, VAR_1));
      break;

    case 132:
      VAR_7 = FUNC_2 (VAR_4, 0);
      VAR_8 = FUNC_2 (VAR_4, 1);
      VAR_9 = FUNC_3 (VAR_2, VAR_7);
      VAR_10 = FUNC_3 (VAR_2, VAR_8);
      VAR_9 = FUNC_4 (VAR_5, VAR_9, VAR_3);
      VAR_10 = FUNC_4 (VAR_5, VAR_10, VAR_3);
      VAR_6 = FUNC_6 (VAR_5, VAR_9, VAR_10);
      break;

    case 128:
      VAR_6 = FUNC_4 (VAR_5, FUNC_3 (VAR_2, VAR_4),
      VAR_3);
      break;

    case 135:
      VAR_7 = FUNC_0 (VAR_4);
      VAR_6 = FUNC_4 (VAR_5, FUNC_3 (VAR_2, VAR_7),
      VAR_3);
      break;

    case 130:
    case 134:
      VAR_7 = FUNC_2 (VAR_4, 0);
      VAR_9 = FUNC_3 (VAR_2, VAR_7);
      VAR_6 = FUNC_4 (VAR_5, VAR_9, VAR_3);
      break;

    default:
      VAR_6 = VAR_0;
      break;
    }

  return VAR_6;
}

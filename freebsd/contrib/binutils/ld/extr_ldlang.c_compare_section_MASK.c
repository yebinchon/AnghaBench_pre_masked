
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sort_type ;
struct TYPE_6__ {int owner; } ;
typedef TYPE_1__ asection ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;




 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4 (sort_type VAR_0, asection *VAR_1, asection *VAR_2)
{
  int VAR_3;

  switch (VAR_0)
    {
    default:
      FUNC_0 ();

    case 130:
      VAR_3 = (FUNC_2 (VAR_2->owner, VAR_2)
      - FUNC_2 (VAR_1->owner, VAR_1));
      if (VAR_3)
 break;


    case 129:
      VAR_3 = FUNC_3 (FUNC_1 (VAR_1->owner, VAR_1),
      FUNC_1 (VAR_2->owner, VAR_2));
      break;

    case 128:
      VAR_3 = FUNC_3 (FUNC_1 (VAR_1->owner, VAR_1),
      FUNC_1 (VAR_2->owner, VAR_2));
      if (VAR_3)
 break;


    case 131:
      VAR_3 = (FUNC_2 (VAR_2->owner, VAR_2)
      - FUNC_2 (VAR_1->owner, VAR_1));
      break;
    }

  return VAR_3;
}

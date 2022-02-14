
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int (* signed_or_unsigned_type ) (int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int*) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int
FUNC_8 (tree VAR_1, tree VAR_2, tree VAR_3)
{
  int VAR_4, VAR_5;
  tree VAR_6, VAR_7, VAR_8;
  unsigned int VAR_9;

  if (FUNC_6 (VAR_1, VAR_2, 0))
    return 1;

  if (! FUNC_0 (FUNC_2 (VAR_1))
      || ! FUNC_0 (FUNC_2 (VAR_2)))
    return 0;




  VAR_6 = VAR_1, VAR_7 = VAR_2;
  FUNC_1 (VAR_6);
  FUNC_1 (VAR_7);
  if (FUNC_6 (VAR_6, VAR_7, 0))
    return 1;







  VAR_7 = FUNC_5 (VAR_2, &VAR_4);
  VAR_8 = FUNC_5 (VAR_3, &VAR_5);

  VAR_9 = FUNC_3 (FUNC_2 (VAR_2));
  if (VAR_4 == VAR_5
      && FUNC_3 (FUNC_2 (VAR_7)) < VAR_9
      && FUNC_3 (FUNC_2 (VAR_8)) < VAR_9)
    {
      tree VAR_10 = FUNC_2 (VAR_1);



      VAR_7 = FUNC_4 (VAR_0.types.signed_or_unsigned_type
          (VAR_4, FUNC_2 (VAR_7)), VAR_7);

      if (FUNC_6 (VAR_1, FUNC_4 (VAR_10, VAR_7), 0))
 return 1;
    }

  return 0;
}

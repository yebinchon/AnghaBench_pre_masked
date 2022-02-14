
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {int value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int,size_t) ;
 size_t FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_5)
{
  if (FUNC_1 (VAR_5) == VAR_1)

    return FUNC_5 (VAR_5);
  else if (FUNC_1 (VAR_5) == VAR_0)

    {
      FUNC_2(VAR_2, VAR_4) *VAR_3;
      size_t VAR_6;
      size_t VAR_7;

      VAR_3 = FUNC_0 (VAR_5);
      VAR_6 = FUNC_4 (VAR_2, VAR_3);
      for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
 if (FUNC_7 (FUNC_3 (VAR_2,
            VAR_3, VAR_7)->value))
   return 1;
    }
  else

    return FUNC_6 (VAR_5);

  return 0;
}

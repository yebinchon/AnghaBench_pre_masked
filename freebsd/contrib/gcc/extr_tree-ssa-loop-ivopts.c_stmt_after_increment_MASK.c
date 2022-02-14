
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
struct iv_cand {int pos; } ;





 int FUNC_0 () ;
 int FUNC_1 (struct loop*,int ) ;
 int FUNC_2 (struct iv_cand*,int ) ;

__attribute__((used)) static bool
FUNC_3 (struct loop *VAR_0, struct iv_cand *VAR_1, tree VAR_2)
{
  switch (VAR_1->pos)
    {
    case 130:
      return 0;

    case 129:
      return FUNC_1 (VAR_0, VAR_2);

    case 128:
      return FUNC_2 (VAR_1, VAR_2);

    default:
      FUNC_0 ();
    }
}

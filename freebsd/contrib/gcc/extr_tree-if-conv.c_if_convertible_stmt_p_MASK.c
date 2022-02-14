
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
typedef int basic_block ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct loop*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_4 (struct loop *VAR_4, basic_block VAR_5, tree VAR_6)
{
  switch (FUNC_0 (VAR_6))
    {
    case 129:
      break;

    case 128:

      if (!FUNC_2 (VAR_4, VAR_5, VAR_6))
 return 0;
      break;

    case 130:
      break;

    default:

      if (VAR_2 && (VAR_3 & VAR_0))
 {
   FUNC_1 (VAR_2, "don't know what to do\n");
   FUNC_3 (VAR_2, VAR_6, VAR_1);
 }
      return 0;
      break;
    }

  return 1;
}

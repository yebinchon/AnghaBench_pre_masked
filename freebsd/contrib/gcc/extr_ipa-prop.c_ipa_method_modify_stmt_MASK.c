
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_node {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cgraph_node*) ;
 int FUNC_3 (struct cgraph_node*,int,int) ;
 int FUNC_4 (struct cgraph_node*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct cgraph_node *VAR_1, tree VAR_2)
{
  int VAR_3, VAR_4;

  switch (FUNC_0 (VAR_2))
    {
    case 128:
      if (FUNC_0 (FUNC_1 (VAR_2, 0)) == VAR_0)
 {
   VAR_3 = FUNC_4 (VAR_1, FUNC_1 (VAR_2, 0));
   if (VAR_3 >= 0)
            FUNC_3 (VAR_1, VAR_3, 1);
 }
      break;
    case 129:

      for (VAR_4 = 0; VAR_4 < FUNC_2 (VAR_1); VAR_4++)
 FUNC_3 (VAR_1, VAR_4, 1);
      break;
    default:
      break;
    }
}

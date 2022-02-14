
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cgraph_node*) ;
 int FUNC_5 (struct cgraph_node*,int) ;
 int FUNC_6 (struct cgraph_node*) ;
 int FUNC_7 (struct cgraph_node*,int,int ) ;

__attribute__((used)) static void
FUNC_8 (struct cgraph_node *VAR_2)
{
  int VAR_3;
  tree VAR_4;

  FUNC_6 (VAR_2);
  for (VAR_3 = 0; VAR_3 < FUNC_4 (VAR_2); VAR_3++)
    {
      VAR_4 = FUNC_5 (VAR_2, VAR_3);
      if (FUNC_0 (FUNC_3 (VAR_4))
   || FUNC_2 (FUNC_3 (VAR_4))
   || FUNC_1 (FUNC_3 (VAR_4)))
 FUNC_7 (VAR_2, VAR_3, VAR_1);
      else
 FUNC_7 (VAR_2, VAR_3, VAR_0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_varpool_node {int finalized; scalar_t__ needed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (struct cgraph_varpool_node*) ;
 int FUNC_5 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct cgraph_varpool_node*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_8 (tree VAR_3)
{
  struct cgraph_varpool_node *VAR_4 = FUNC_6 (VAR_3);





  if (VAR_4->finalized)
    {
      if (VAR_0 || (!VAR_2 && !VAR_1))
 FUNC_3 ();
      return;
    }
  if (VAR_4->needed)
    FUNC_4 (VAR_4);
  VAR_4->finalized = 1;

  if (FUNC_7 (VAR_4, VAR_3))
    FUNC_5 (VAR_4);



  else if (FUNC_2 (VAR_3) && !FUNC_0 (VAR_3) && !FUNC_1 (VAR_3))
    FUNC_5 (VAR_4);
  if (VAR_0 || (!VAR_2 && !VAR_1))
    FUNC_3 ();
}

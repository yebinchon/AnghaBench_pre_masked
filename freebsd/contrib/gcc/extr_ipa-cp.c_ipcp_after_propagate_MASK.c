
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cgraph_node* VAR_2 ;
 int FUNC_0 (struct cgraph_node*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cgraph_node*,int) ;
 int FUNC_3 (struct cgraph_node*,int,int ) ;

__attribute__((used)) static bool
FUNC_4 (void)
{
  int VAR_3, VAR_4;
  struct cgraph_node *VAR_5;
  bool VAR_6;

  VAR_6 = 0;
  for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next)
    {
      VAR_4 = FUNC_0 (VAR_5);
      for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 if (FUNC_1 (FUNC_2 (VAR_5, VAR_3)) == VAR_1)
   {
     VAR_6 = 1;
     FUNC_3 (VAR_5, VAR_3, VAR_0);
   }
    }
  return VAR_6;
}

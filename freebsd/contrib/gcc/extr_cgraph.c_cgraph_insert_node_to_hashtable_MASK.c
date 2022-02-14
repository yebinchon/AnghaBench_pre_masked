
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct cgraph_node*,int ) ;

void
FUNC_2 (struct cgraph_node *VAR_2)
{
  struct cgraph_node **VAR_3;

  VAR_3 = (struct cgraph_node **) FUNC_1 (VAR_1, VAR_2, VAR_0);

  FUNC_0 (!*VAR_3);
  *VAR_3 = VAR_2;
}

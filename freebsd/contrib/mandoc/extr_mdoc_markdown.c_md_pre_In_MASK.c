
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct roff_node*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct roff_node *VAR_3)
{
 if (VAR_3->flags & VAR_1) {
  FUNC_0(VAR_3);
  FUNC_1("**");
  VAR_2 &= ~VAR_0;
  FUNC_2("#include <");
 } else {
  FUNC_2("<");
  VAR_2 &= ~VAR_0;
  FUNC_1("*");
 }
 VAR_2 &= ~VAR_0;
 return 1;
}

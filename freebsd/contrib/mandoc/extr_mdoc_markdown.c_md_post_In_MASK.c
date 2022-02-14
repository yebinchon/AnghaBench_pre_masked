
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct roff_node *VAR_4)
{
 if (VAR_4->flags & VAR_2) {
  VAR_3 &= ~VAR_1;
  FUNC_0(">**");
  VAR_3 |= VAR_0;
 } else {
  VAR_3 &= ~VAR_1;
  FUNC_0("*>");
 }
}

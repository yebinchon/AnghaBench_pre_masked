
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct roff_node *VAR_4)
{




 if (VAR_3) {
  FUNC_0('>');
  VAR_3++;
 } else {
  FUNC_0('\t');
  VAR_1++;
 }
 VAR_2 |= VAR_0;
 return 1;
}

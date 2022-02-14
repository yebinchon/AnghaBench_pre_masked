
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int mstacksz; int reqtab; struct roff* mstack; struct roff* argv; } ;


 int FUNC_0 (struct roff*) ;
 int FUNC_1 (struct roff*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct roff *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->mstacksz; VAR_1++)
  FUNC_0(VAR_0->mstack[VAR_1].argv);
 FUNC_0(VAR_0->mstack);
 FUNC_2(VAR_0->reqtab);
 FUNC_0(VAR_0);
}

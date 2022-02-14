
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {scalar_t__ mstackpos; struct mctx* mstack; } ;
struct mctx {int argc; int * argv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct roff *VAR_0)
{
 struct mctx *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0->mstackpos >= 0);
 VAR_1 = VAR_0->mstack + VAR_0->mstackpos;
 for (VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++)
  FUNC_1(VAR_1->argv[VAR_2]);
 VAR_1->argc = 0;
 VAR_0->mstackpos--;
}

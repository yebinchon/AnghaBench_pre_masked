
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int cfglock; int finalized; } ;


 int FUNC_0 (struct ub_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ub_ctx* VAR_0)
{
 int VAR_1 = 0;
 FUNC_1(&VAR_0->cfglock);
 if (!VAR_0->finalized) {
  VAR_1 = FUNC_0(VAR_0);
 }
 FUNC_2(&VAR_0->cfglock);
 return VAR_1;
}

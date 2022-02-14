
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int dothread; int cfglock; scalar_t__ finalized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct ub_ctx* VAR_2, int VAR_3)
{




 FUNC_0(&VAR_2->cfglock);
 if(VAR_2->finalized) {
  FUNC_1(&VAR_2->cfglock);
  return VAR_0;
 }
 VAR_2->dothread = VAR_3;
 FUNC_1(&VAR_2->cfglock);
 return VAR_1;
}

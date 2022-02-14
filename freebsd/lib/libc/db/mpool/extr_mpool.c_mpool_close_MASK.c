
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lqh; } ;
typedef TYPE_1__ MPOOL ;
typedef TYPE_1__ BKT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_4(MPOOL *VAR_2)
{
 BKT *VAR_3;


 while (!FUNC_0(&VAR_2->lqh)) {
  VAR_3 = FUNC_1(&VAR_2->lqh);
  FUNC_2(&VAR_2->lqh, VAR_3, VAR_1);
  FUNC_3(VAR_3);
 }


 FUNC_3(VAR_2);
 return (VAR_0);
}

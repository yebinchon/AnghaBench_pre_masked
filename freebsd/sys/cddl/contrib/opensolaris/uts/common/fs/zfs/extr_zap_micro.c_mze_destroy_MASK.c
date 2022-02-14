
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zap_avl; } ;
struct TYPE_5__ {TYPE_1__ zap_m; } ;
typedef TYPE_2__ zap_t ;
typedef int mzap_ent_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,void**) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(zap_t *VAR_0)
{
 mzap_ent_t *VAR_1;
 void *VAR_2 = ((void*)0);

 while ((VAR_1 = FUNC_1(&VAR_0->zap_m.zap_avl, &VAR_2)))
  FUNC_2(VAR_1, sizeof (mzap_ent_t));
 FUNC_0(&VAR_0->zap_m.zap_avl);
}

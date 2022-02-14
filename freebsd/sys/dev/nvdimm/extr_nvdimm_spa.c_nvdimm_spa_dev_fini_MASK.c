
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_spa_dev {int * spa_kva; int spa_len; int spa_obj; int * spa_dev; TYPE_1__* spa_g; } ;
struct TYPE_2__ {int class; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct nvdimm_spa_dev *VAR_0)
{

 if (VAR_0->spa_g != ((void*)0)) {
  FUNC_1();
  FUNC_3(((void*)0), VAR_0->spa_g->class, VAR_0->spa_g);
  FUNC_2();
 }
 if (VAR_0->spa_dev != ((void*)0)) {
  FUNC_0(VAR_0->spa_dev);
  VAR_0->spa_dev = ((void*)0);
 }
 FUNC_5(VAR_0->spa_obj);
 if (VAR_0->spa_kva != ((void*)0)) {
  FUNC_4(VAR_0->spa_kva, VAR_0->spa_len);
  VAR_0->spa_kva = ((void*)0);
 }
}

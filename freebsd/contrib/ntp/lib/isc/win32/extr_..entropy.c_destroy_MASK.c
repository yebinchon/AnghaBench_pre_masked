
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_mem_t ;
struct TYPE_8__ {int type; } ;
typedef TYPE_1__ isc_entropysource_t ;
struct TYPE_9__ {scalar_t__ refcnt; int lock; int pool; int * mctx; int sources; } ;
typedef TYPE_2__ isc_entropy_t ;


 int FUNC_0 (int *) ;


 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *,TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_11(isc_entropy_t **VAR_0) {
 isc_entropy_t *VAR_1;
 isc_entropysource_t *VAR_2;
 isc_mem_t *VAR_3;

 FUNC_4(VAR_0 != ((void*)0) && *VAR_0 != ((void*)0));
 VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 FUNC_3(&VAR_1->lock);

 FUNC_4(VAR_1->refcnt == 0);




 VAR_2 = FUNC_2(VAR_1->sources);
 while (VAR_2 != ((void*)0)) {
  switch(VAR_2->type) {
  case 129:
  case 128:
   FUNC_6(&VAR_2);
   break;
  }
  VAR_2 = FUNC_2(VAR_1->sources);
 }




 FUNC_4(FUNC_1(VAR_1->sources));

 VAR_3 = VAR_1->mctx;

 FUNC_7(&VAR_1->pool);

 FUNC_5(&VAR_1->lock);

 FUNC_0(&VAR_1->lock);

 FUNC_10(VAR_1, 0, sizeof(isc_entropy_t));
 FUNC_9(VAR_3, VAR_1, sizeof(isc_entropy_t));
 FUNC_8(&VAR_3);
}

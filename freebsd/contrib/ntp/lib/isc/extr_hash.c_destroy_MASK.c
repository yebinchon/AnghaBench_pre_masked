
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_mem_t ;
struct TYPE_6__ {int vectorlen; int lock; struct TYPE_6__* rndvector; int * entropy; int * mctx; int refcnt; } ;
typedef TYPE_1__ isc_hash_t ;
typedef int canary1 ;
typedef int canary0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned char*,unsigned char*,int) ;
 int FUNC_10 (unsigned char*,TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_12(isc_hash_t **VAR_0) {
 isc_hash_t *VAR_1;
 isc_mem_t *VAR_2;
 unsigned char VAR_3[4], VAR_4[4];

 FUNC_3(VAR_0 != ((void*)0) && *VAR_0 != ((void*)0));
 VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 FUNC_2(&VAR_1->lock);

 FUNC_8(&VAR_1->refcnt);

 VAR_2 = VAR_1->mctx;




 if (VAR_1->rndvector != ((void*)0))
  FUNC_7(VAR_2, VAR_1->rndvector, VAR_1->vectorlen);

 FUNC_4(&VAR_1->lock);

 FUNC_0(&VAR_1->lock);

 FUNC_10(VAR_3, VAR_1 + 1, sizeof(VAR_3));
 FUNC_11(VAR_1, 0, sizeof(isc_hash_t));
 FUNC_10(VAR_4, VAR_1 + 1, sizeof(VAR_4));
 FUNC_1(FUNC_9(VAR_3, VAR_4, sizeof(VAR_3)) == 0);
 FUNC_7(VAR_2, VAR_1, sizeof(isc_hash_t));
 FUNC_6(&VAR_2);
}

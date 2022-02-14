
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
struct TYPE_6__ {unsigned int limit; size_t vectorlen; int lock; int * entropy; struct TYPE_6__* rndvector; int refcnt; int initialized; int * mctx; int magic; } ;
typedef TYPE_1__ isc_hash_t ;
typedef int isc_entropy_t ;
typedef TYPE_1__ hash_random_t ;
typedef unsigned int hash_accum_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int **) ;
 TYPE_1__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,TYPE_1__*,size_t) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;

isc_result_t
FUNC_9(isc_mem_t *VAR_5, isc_entropy_t *VAR_6,
     unsigned int VAR_7, isc_hash_t **VAR_8)
{
 isc_result_t VAR_9;
 isc_hash_t *VAR_10;
 size_t VAR_11;
 hash_random_t *VAR_12;
 hash_accum_t VAR_13;

 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_8 != ((void*)0) && *VAR_8 == ((void*)0));






 VAR_13 =
  1 << (((sizeof(hash_accum_t) - sizeof(hash_random_t))) * 8);
 if (VAR_13 < (VAR_7 + 1) * 0xff)
  return (VAR_3);

 VAR_10 = FUNC_5(VAR_5, sizeof(isc_hash_t));
 if (VAR_10 == ((void*)0))
  return (VAR_2);

 VAR_11 = sizeof(hash_random_t) * (VAR_7 + 1);
 VAR_12 = FUNC_5(VAR_5, VAR_11);
 if (VAR_12 == ((void*)0)) {
  VAR_9 = VAR_2;
  goto errout;
 }




 VAR_9 = FUNC_7(&VAR_10->lock);
 if (VAR_9 != VAR_4)
  goto errout;




 VAR_10->magic = VAR_0;
 VAR_10->mctx = ((void*)0);
 FUNC_4(VAR_5, &VAR_10->mctx);
 VAR_10->initialized = VAR_1;
 VAR_9 = FUNC_8(&VAR_10->refcnt, 1);
 if (VAR_9 != VAR_4)
  goto cleanup_lock;
 VAR_10->entropy = ((void*)0);
 VAR_10->limit = VAR_7;
 VAR_10->vectorlen = VAR_11;
 VAR_10->rndvector = VAR_12;





 FUNC_2(VAR_6);


 *VAR_8 = VAR_10;
 return (VAR_4);

 cleanup_lock:
 FUNC_0(&VAR_10->lock);
 errout:
 FUNC_6(VAR_5, VAR_10, sizeof(isc_hash_t));
 if (VAR_12 != ((void*)0))
  FUNC_6(VAR_5, VAR_12, VAR_11);

 return (VAR_9);
}

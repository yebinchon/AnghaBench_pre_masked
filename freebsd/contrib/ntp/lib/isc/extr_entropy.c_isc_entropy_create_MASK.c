
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
struct TYPE_5__ {int refcnt; int pool; int magic; scalar_t__ initcount; scalar_t__ initialized; int * mctx; scalar_t__ nsources; int * nextsource; int sources; int lock; } ;
typedef TYPE_1__ isc_entropy_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (int *) ;

isc_result_t
FUNC_7(isc_mem_t *VAR_3, isc_entropy_t **VAR_4) {
 isc_result_t VAR_5;
 isc_entropy_t *VAR_6;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0) && *VAR_4 == ((void*)0));

 VAR_6 = FUNC_4(VAR_3, sizeof(isc_entropy_t));
 if (VAR_6 == ((void*)0))
  return (VAR_1);




 VAR_5 = FUNC_6(&VAR_6->lock);
 if (VAR_5 != VAR_2)
  goto errout;




 FUNC_0(VAR_6->sources);
 VAR_6->nextsource = ((void*)0);
 VAR_6->nsources = 0;
 VAR_6->mctx = ((void*)0);
 FUNC_3(VAR_3, &VAR_6->mctx);
 VAR_6->refcnt = 1;
 VAR_6->initialized = 0;
 VAR_6->initcount = 0;
 VAR_6->magic = VAR_0;

 FUNC_2(&VAR_6->pool);

 *VAR_4 = VAR_6;
 return (VAR_2);

 errout:
 FUNC_5(VAR_3, VAR_6, sizeof(isc_entropy_t));

 return (VAR_5);
}

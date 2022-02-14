
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
typedef int isc_entropystop_t ;
typedef int isc_entropystart_t ;
struct TYPE_16__ {void* arg; int stopfunc; int * getfunc; int startfunc; void* start_called; int samplequeue; } ;
struct TYPE_13__ {TYPE_4__ callback; } ;
struct TYPE_14__ {int name; scalar_t__ total; TYPE_3__* ent; int type; int magic; TYPE_1__ sources; void* bad; } ;
typedef TYPE_2__ isc_entropysource_t ;
typedef int * isc_entropyget_t ;
struct TYPE_15__ {int lock; int mctx; int nsources; int sources; } ;
typedef TYPE_3__ isc_entropy_t ;
typedef TYPE_4__ isc_cbsource_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_2__* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,TYPE_2__*,int) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *) ;

isc_result_t
FUNC_10(isc_entropy_t *VAR_6,
     isc_entropystart_t VAR_7,
     isc_entropyget_t VAR_8,
     isc_entropystop_t VAR_9,
     void *VAR_10,
     isc_entropysource_t **VAR_11)
{
 isc_result_t VAR_12;
 isc_entropysource_t *VAR_13;
 isc_cbsource_t *VAR_14;

 FUNC_3(FUNC_5(VAR_6));
 FUNC_3(VAR_8 != ((void*)0));
 FUNC_3(VAR_11 != ((void*)0) && *VAR_11 == ((void*)0));

 FUNC_2(&VAR_6->lock);

 VAR_13 = FUNC_6(VAR_6->mctx, sizeof(isc_entropysource_t));
 if (VAR_13 == ((void*)0)) {
  VAR_12 = VAR_2;
  goto errout;
 }
 VAR_13->bad = VAR_1;

 VAR_14 = &VAR_13->sources.callback;

 VAR_12 = FUNC_9(VAR_6, &VAR_14->samplequeue);
 if (VAR_12 != VAR_3)
  goto errout;

 VAR_14->start_called = VAR_1;
 VAR_14->startfunc = VAR_7;
 VAR_14->getfunc = VAR_8;
 VAR_14->stopfunc = VAR_9;
 VAR_14->arg = VAR_10;




 VAR_13->magic = VAR_4;
 VAR_13->type = VAR_0;
 VAR_13->ent = VAR_6;
 VAR_13->total = 0;
 FUNC_8(VAR_13->name, 0, sizeof(VAR_13->name));
 FUNC_0(VAR_13, VAR_5);




 FUNC_1(VAR_6->sources, VAR_13, VAR_5);
 VAR_6->nsources++;

 *VAR_11 = VAR_13;

 FUNC_4(&VAR_6->lock);
 return (VAR_3);

 errout:
 if (VAR_13 != ((void*)0))
  FUNC_7(VAR_6->mctx, VAR_13, sizeof(isc_entropysource_t));

 FUNC_4(&VAR_6->lock);

 return (VAR_12);
}

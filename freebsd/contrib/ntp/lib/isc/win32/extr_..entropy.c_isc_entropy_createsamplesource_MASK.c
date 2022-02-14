
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sample_queue_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_13__ {int samplequeue; } ;
struct TYPE_14__ {TYPE_1__ sample; } ;
struct TYPE_15__ {int name; scalar_t__ total; TYPE_4__* ent; int type; int magic; TYPE_2__ sources; } ;
typedef TYPE_3__ isc_entropysource_t ;
struct TYPE_16__ {int lock; int mctx; int nsources; int sources; } ;
typedef TYPE_4__ isc_entropy_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,TYPE_3__*,int) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int *) ;

isc_result_t
FUNC_10(isc_entropy_t *VAR_5,
          isc_entropysource_t **VAR_6)
{
 isc_result_t VAR_7;
 isc_entropysource_t *VAR_8;
 sample_queue_t *VAR_9;

 FUNC_3(FUNC_5(VAR_5));
 FUNC_3(VAR_6 != ((void*)0) && *VAR_6 == ((void*)0));

 FUNC_2(&VAR_5->lock);

 VAR_8 = FUNC_6(VAR_5->mctx, sizeof(isc_entropysource_t));
 if (VAR_8 == ((void*)0)) {
  VAR_7 = VAR_1;
  goto errout;
 }

 VAR_9 = &VAR_8->sources.sample.samplequeue;
 VAR_7 = FUNC_9(VAR_5, VAR_9);
 if (VAR_7 != VAR_2)
  goto errout;




 VAR_8->magic = VAR_3;
 VAR_8->type = VAR_0;
 VAR_8->ent = VAR_5;
 VAR_8->total = 0;
 FUNC_8(VAR_8->name, 0, sizeof(VAR_8->name));
 FUNC_0(VAR_8, VAR_4);




 FUNC_1(VAR_5->sources, VAR_8, VAR_4);
 VAR_5->nsources++;

 *VAR_6 = VAR_8;

 FUNC_4(&VAR_5->lock);
 return (VAR_2);

 errout:
 if (VAR_8 != ((void*)0))
  FUNC_7(VAR_5->mctx, VAR_8, sizeof(isc_entropysource_t));

 FUNC_4(&VAR_5->lock);

 return (VAR_7);
}

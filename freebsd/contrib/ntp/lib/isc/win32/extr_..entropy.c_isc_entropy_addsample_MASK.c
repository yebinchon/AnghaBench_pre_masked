
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sample_queue_t ;
typedef int isc_uint32_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_9__ {int samplequeue; } ;
struct TYPE_10__ {TYPE_1__ sample; } ;
struct TYPE_11__ {TYPE_2__ sources; TYPE_4__* ent; } ;
typedef TYPE_3__ isc_entropysource_t ;
struct TYPE_12__ {int lock; } ;
typedef TYPE_4__ isc_entropy_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,unsigned int) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 unsigned int FUNC_6 (TYPE_4__*,int *) ;

isc_result_t
FUNC_7(isc_entropysource_t *VAR_1, isc_uint32_t VAR_2,
        isc_uint32_t VAR_3)
{
 isc_entropy_t *VAR_4;
 sample_queue_t *VAR_5;
 unsigned int VAR_6;
 isc_result_t VAR_7;

 FUNC_1(FUNC_3(VAR_1));

 VAR_4 = VAR_1->ent;

 FUNC_0(&VAR_4->lock);

 VAR_5 = &VAR_1->sources.sample.samplequeue;
 VAR_7 = FUNC_5(VAR_5, VAR_2, VAR_3);
 if (VAR_7 == VAR_0) {
  VAR_6 = FUNC_6(VAR_4, VAR_5);
  FUNC_4(VAR_4, VAR_6);
 }

 FUNC_2(&VAR_4->lock);

 return (VAR_7);
}

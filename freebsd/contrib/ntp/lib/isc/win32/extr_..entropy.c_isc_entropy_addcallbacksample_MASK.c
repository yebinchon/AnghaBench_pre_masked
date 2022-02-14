
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sample_queue_t ;
typedef int isc_uint32_t ;
typedef int isc_result_t ;
struct TYPE_6__ {int samplequeue; } ;
struct TYPE_7__ {TYPE_1__ callback; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ sources; } ;
typedef TYPE_3__ isc_entropysource_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;

isc_result_t
FUNC_3(isc_entropysource_t *VAR_1, isc_uint32_t VAR_2,
         isc_uint32_t VAR_3)
{
 sample_queue_t *VAR_4;
 isc_result_t VAR_5;

 FUNC_0(FUNC_1(VAR_1));
 FUNC_0(VAR_1->type == VAR_0);

 VAR_4 = &VAR_1->sources.callback.samplequeue;
 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);

 return (VAR_5);
}

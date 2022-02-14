
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int level; } ;
struct TYPE_5__ {int pool; TYPE_1__ lock; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef int SCI_BASE_LOGGER_T ;
typedef TYPE_2__ SCIF_SAS_HIGH_PRIORITY_REQUEST_QUEUE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(
   SCIF_SAS_HIGH_PRIORITY_REQUEST_QUEUE_T * VAR_3,
   SCI_BASE_LOGGER_T * VAR_4
)
{
   FUNC_0((
      VAR_4,
      VAR_0 | VAR_1,
      "scif_sas_high_priority_request_queue_construct(0x%x,0x%x) enter\n",
      VAR_3, VAR_4
   ));

   FUNC_1((SCI_BASE_OBJECT_T*) &VAR_3->lock, VAR_4);
   VAR_3->lock.level = VAR_2;

   FUNC_2(VAR_3->pool);
}

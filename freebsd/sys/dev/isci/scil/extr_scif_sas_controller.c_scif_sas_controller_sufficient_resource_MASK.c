
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_7__ {int pool; } ;
struct TYPE_9__ {TYPE_2__ hprq; TYPE_3__* domains; } ;
struct TYPE_6__ {size_t element_count; } ;
struct TYPE_8__ {TYPE_1__ request_list; } ;
typedef TYPE_3__ SCIF_SAS_DOMAIN_T ;
typedef TYPE_4__ SCIF_SAS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;

BOOL FUNC_1(
   SCIF_SAS_CONTROLLER_T *VAR_4
)
{
   SCIF_SAS_DOMAIN_T * VAR_5;
   U32 VAR_6;
   U32 VAR_7 = 0;
   U32 VAR_8 = 0;

   for(VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
      VAR_5 = &VAR_4->domains[VAR_6];
      VAR_7 += VAR_5->request_list.element_count;
   }

   VAR_8 = FUNC_0(VAR_4->hprq.pool);

   if ( (VAR_7 + VAR_8) > VAR_2 )
      return VAR_0;

   return VAR_3;
}

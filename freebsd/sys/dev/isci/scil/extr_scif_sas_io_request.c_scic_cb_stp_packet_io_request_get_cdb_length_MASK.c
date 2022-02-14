
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_7__ {int associated_object; } ;
struct TYPE_8__ {TYPE_2__ parent; } ;
struct TYPE_6__ {TYPE_5__ sequence; } ;
struct TYPE_9__ {TYPE_3__ parent; TYPE_1__ stp; } ;
typedef TYPE_4__ SCIF_SAS_REQUEST_T ;
typedef TYPE_5__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

U32 FUNC_1(
   void * VAR_2
)
{
   SCIF_SAS_REQUEST_T * VAR_3 = (SCIF_SAS_REQUEST_T*)
                                   VAR_2;

   SATI_TRANSLATOR_SEQUENCE_T * VAR_4 = &VAR_3->stp.sequence;

   if (VAR_4->state != VAR_1)
      return FUNC_0(
                VAR_3->parent.parent.associated_object
             );
   else
      return VAR_0;
}

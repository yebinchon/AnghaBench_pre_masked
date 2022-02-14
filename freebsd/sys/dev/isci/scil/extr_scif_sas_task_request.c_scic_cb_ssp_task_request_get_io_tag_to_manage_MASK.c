
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_5__ {int associated_object; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
struct TYPE_7__ {TYPE_2__ parent; } ;
struct TYPE_8__ {int io_tag_to_manage; TYPE_3__ parent; } ;
typedef TYPE_4__ SCIF_SAS_TASK_REQUEST_T ;


 int FUNC_0 (int ) ;

U16 FUNC_1(
   void * VAR_0
)
{
   SCIF_SAS_TASK_REQUEST_T * VAR_1 = (SCIF_SAS_TASK_REQUEST_T*)
                                       VAR_0;

   VAR_1->io_tag_to_manage
      = FUNC_0(
           VAR_1->parent.parent.parent.associated_object
        );

   return VAR_1->io_tag_to_manage;
}

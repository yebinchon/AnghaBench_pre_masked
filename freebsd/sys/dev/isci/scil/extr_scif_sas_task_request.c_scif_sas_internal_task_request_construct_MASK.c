
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef int U16 ;
struct TYPE_3__ {int is_internal; } ;
struct TYPE_4__ {TYPE_1__ parent; } ;
typedef int SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_TASK_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,void*,int *,int ) ;

SCI_STATUS FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_1,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_2,
   U16 VAR_3,
   void * VAR_4,
   SCI_TASK_REQUEST_HANDLE_T * VAR_5,
   U8 VAR_6
)
{
   SCI_STATUS VAR_7;
   SCIF_SAS_TASK_REQUEST_T * VAR_8;

   VAR_7 = FUNC_0(
               VAR_1,
               VAR_2,
               VAR_3,
               ((void*)0),
               VAR_4,
               VAR_5,
               VAR_6
            );

   VAR_8 = (SCIF_SAS_TASK_REQUEST_T *)VAR_4;

   VAR_8->parent.is_internal = VAR_0;

   return VAR_7;
}

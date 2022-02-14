
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_12__ {int pool; } ;
struct TYPE_15__ {TYPE_2__ hprq; } ;
struct TYPE_14__ {int * internal_io_timer; } ;
struct TYPE_11__ {int is_internal; } ;
struct TYPE_13__ {TYPE_1__ parent; } ;
typedef int SMP_REQUEST_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_INTERNAL_IO_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_CONTROLLER_T ;
typedef int POINTER_UINT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *,void*,char*,int ,int *,int *) ;

SCI_STATUS FUNC_8(
   SCIF_SAS_CONTROLLER_T * VAR_7,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_8,
   void * VAR_9,
   U16 VAR_10,
   SMP_REQUEST_T * VAR_11
)
{
   SCIF_SAS_INTERNAL_IO_REQUEST_T * VAR_12 =
     (SCIF_SAS_INTERNAL_IO_REQUEST_T*)VAR_9;

   SCIF_SAS_IO_REQUEST_T * VAR_13 =
     (SCIF_SAS_IO_REQUEST_T*)VAR_9;

   SCI_STATUS VAR_14;


   VAR_14 = FUNC_7(
               VAR_7,
               VAR_8,
               VAR_9,
               (char *)VAR_9 + sizeof(SCIF_SAS_INTERNAL_IO_REQUEST_T),
               VAR_2,
               VAR_11,
               ((void*)0)
            );


   if (VAR_14 == VAR_4)
   {

      VAR_13->parent.is_internal = VAR_5;

      if (VAR_12->internal_io_timer == ((void*)0))
      {

         VAR_12->internal_io_timer =
            FUNC_5(
               (SCI_CONTROLLER_HANDLE_T *)VAR_7,
               VAR_6,
               (void*)VAR_13
            );
      }
      else
      {
         FUNC_0 (0);
      }


      if ( !FUNC_3(VAR_7->hprq.pool) )
      {
         FUNC_4(
            VAR_7->hprq.pool, (POINTER_UINT) VAR_9
         );
      }
      else
      {
         FUNC_1((
            FUNC_2(VAR_7),
            VAR_0 | VAR_1,
            "scif_sas_internal_io_request_construct_smp, high priority queue full!\n"
         ));

         FUNC_6(VAR_7, VAR_12);


         return VAR_3;
      }
   }

   return VAR_14;
}

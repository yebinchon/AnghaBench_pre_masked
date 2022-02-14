
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int U32 ;
struct TYPE_13__ {scalar_t__ assigned_device_count; scalar_t__ timer_handle; scalar_t__ reserved_rni; scalar_t__ reserved_tci; TYPE_10__* owning_controller; } ;
struct TYPE_12__ {int available_remote_nodes; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_PORT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int *,int) ;

__attribute__((used)) static
SCI_STATUS FUNC_12(
   SCI_BASE_PORT_T *VAR_9
)
{
   U32 VAR_10;
   SCI_STATUS VAR_11 = VAR_5;
   SCIC_SDS_PORT_T *VAR_12 = (SCIC_SDS_PORT_T *)VAR_9;

   if (VAR_12->assigned_device_count > 0)
   {



      return VAR_3;
   }

   VAR_12->timer_handle = FUNC_1(
      FUNC_7(VAR_12),
      VAR_8,
      VAR_12
   );

   if (VAR_12->timer_handle == VAR_4)
   {
      return VAR_2;
   }

   if (FUNC_10(VAR_12))
   {
   if (VAR_12->reserved_rni == VAR_6)
   {
      VAR_12->reserved_rni =
         FUNC_11(
            &VAR_12->owning_controller->available_remote_nodes, 1
         );

      if (VAR_12->reserved_rni != VAR_6)
      {
         FUNC_3(
            VAR_12,
            VAR_12->reserved_rni
         );
      }
      else
      {
         VAR_11 = VAR_2;
      }
   }

   if (VAR_12->reserved_tci == VAR_6)
   {

      VAR_12->reserved_tci =
         FUNC_2(VAR_12->owning_controller);

      if (VAR_12->reserved_tci != VAR_6)
      {
         FUNC_4(VAR_12, VAR_12->reserved_tci);
      }
      else
      {
         VAR_11 = VAR_2;
      }
   }
   }

   if (VAR_11 == VAR_5)
   {
      VAR_10 = FUNC_8(VAR_12);




      if (FUNC_9(VAR_12, VAR_10) == VAR_7)
      {
         FUNC_0(
            FUNC_6(VAR_12),
            VAR_0
         );
      }
      else
      {
         VAR_11 = VAR_1;
      }
   }

   if (VAR_11 != VAR_5)
   {
      FUNC_5(VAR_12);
   }

   return VAR_11;
}

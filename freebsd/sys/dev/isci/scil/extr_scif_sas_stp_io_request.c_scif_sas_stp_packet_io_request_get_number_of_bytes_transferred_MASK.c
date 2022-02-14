
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_8__ {int sequence; } ;
struct TYPE_9__ {TYPE_1__ stp; } ;
struct TYPE_10__ {TYPE_2__ parent; } ;
typedef scalar_t__ SCI_IO_STATUS ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_3__ SCIF_SAS_IO_REQUEST_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;

U32 FUNC_4(
   SCIF_SAS_IO_REQUEST_T * VAR_2
)
{
   SCI_IO_REQUEST_HANDLE_T VAR_3 = FUNC_3(VAR_2);
   SCI_IO_STATUS VAR_4 = FUNC_2 (VAR_3);
   U32 VAR_5;

   if (VAR_4 == VAR_0)
       VAR_5 = 0;
   else if (VAR_4 == VAR_1)
   {
      VAR_5 = FUNC_0(
         &VAR_2->parent.stp.sequence, VAR_2, VAR_2);

      if (VAR_5 == 0)
         VAR_5 =
            FUNC_1(VAR_3);
   }
   else
      VAR_5 =
         FUNC_1(VAR_3);

   return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {scalar_t__ pio_transfer_bytes; int current_transfer_bytes; } ;
struct TYPE_7__ {TYPE_1__ pio; } ;
struct TYPE_8__ {TYPE_2__ type; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_STP_REQUEST_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,scalar_t__) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCIC_SDS_STP_REQUEST_T * VAR_2,
   U8 * VAR_3
)
{
   SCI_STATUS VAR_4;



   if (VAR_2->type.pio.pio_transfer_bytes < VAR_1)
   {
      VAR_4 = FUNC_0(
         VAR_2,VAR_3,VAR_2->type.pio.pio_transfer_bytes);

      if (VAR_4 == VAR_0)
      {



         VAR_2->type.pio.current_transfer_bytes += VAR_2->type.pio.pio_transfer_bytes;
         VAR_2->type.pio.pio_transfer_bytes = 0;
      }
   }
   else
   {

      VAR_4 = FUNC_0(
         VAR_2, VAR_3, VAR_1);

      if (VAR_4 == VAR_0)
      {
         VAR_2->type.pio.pio_transfer_bytes -= VAR_1;
         VAR_2->type.pio.current_transfer_bytes += VAR_1;
      }
   }

   return VAR_4;
}

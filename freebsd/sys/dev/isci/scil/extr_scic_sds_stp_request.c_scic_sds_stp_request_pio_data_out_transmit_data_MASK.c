
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_8__ {scalar_t__ sgl_offset; scalar_t__ sgl_set; TYPE_1__* sgl_pair; } ;
struct TYPE_9__ {scalar_t__ pio_transfer_bytes; TYPE_2__ request_current; } ;
struct TYPE_10__ {TYPE_3__ pio; } ;
struct TYPE_12__ {TYPE_4__ type; } ;
struct TYPE_11__ {scalar_t__ length; int address_lower; } ;
struct TYPE_7__ {TYPE_5__ B; TYPE_5__ A; } ;
typedef TYPE_5__ SCU_SGL_ELEMENT_T ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_6__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCIC_SDS_REQUEST_T * VAR_2
)
{

   SCU_SGL_ELEMENT_T * VAR_3;
   U32 VAR_4;
   U32 VAR_5 = 0;
   SCI_STATUS VAR_6 = VAR_0;

   SCIC_SDS_STP_REQUEST_T * VAR_7 = (SCIC_SDS_STP_REQUEST_T *)VAR_2;

   VAR_4 = VAR_7->type.pio.request_current.sgl_offset;

   if (VAR_7->type.pio.request_current.sgl_set == VAR_1)
   {
      VAR_3 = &(VAR_7->type.pio.request_current.sgl_pair->A);
      VAR_5 = VAR_7->type.pio.request_current.sgl_pair->A.length - VAR_4;
   }
   else
   {
      VAR_3 = &(VAR_7->type.pio.request_current.sgl_pair->B);
      VAR_5 = VAR_7->type.pio.request_current.sgl_pair->B.length - VAR_4;
   }


   if (VAR_7->type.pio.pio_transfer_bytes > 0)
   {
      if (VAR_7->type.pio.pio_transfer_bytes >= VAR_5 )
      {

         VAR_6 = FUNC_0 (VAR_2, VAR_5);
         if (VAR_6 == VAR_0)
         {
            VAR_7->type.pio.pio_transfer_bytes -= VAR_5;
            VAR_4 = 0;
         }
      }
      else if (VAR_7->type.pio.pio_transfer_bytes < VAR_5 )
      {

         FUNC_0 (VAR_2, VAR_7->type.pio.pio_transfer_bytes);

         if (VAR_6 == VAR_0)
         {

            VAR_4 += VAR_7->type.pio.pio_transfer_bytes;
            VAR_3->address_lower += VAR_7->type.pio.pio_transfer_bytes;
            VAR_7->type.pio.pio_transfer_bytes = 0;
         }
      }
   }

   if (VAR_6 == VAR_0)
   {
      VAR_7->type.pio.request_current.sgl_offset = VAR_4;
   }

   return VAR_6;
}

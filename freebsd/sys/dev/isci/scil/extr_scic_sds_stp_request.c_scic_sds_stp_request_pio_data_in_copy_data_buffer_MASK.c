
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int U8 ;
typedef scalar_t__ U32 ;
struct TYPE_13__ {scalar_t__ sgl_set; scalar_t__ sgl_offset; TYPE_1__* sgl_pair; } ;
struct TYPE_14__ {scalar_t__ current_transfer_bytes; TYPE_2__ request_current; } ;
struct TYPE_15__ {TYPE_3__ pio; } ;
struct TYPE_17__ {TYPE_4__ type; } ;
struct TYPE_16__ {scalar_t__ length; } ;
struct TYPE_12__ {TYPE_5__ B; TYPE_5__ A; } ;
typedef TYPE_5__ SCU_SGL_ELEMENT_T ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_6__ SCIC_SDS_STP_REQUEST_T ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_6__*,scalar_t__) ;
 TYPE_5__* FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_STP_REQUEST_T * VAR_3,
   U8 * VAR_4,
   U32 VAR_5
)
{
   SCI_STATUS VAR_6;
   SCU_SGL_ELEMENT_T * VAR_7;
   U32 VAR_8;
   U32 VAR_9;
   U8 * VAR_10;


   VAR_7 =
      (VAR_3->type.pio.request_current.sgl_set == VAR_2) ?
         &(VAR_3->type.pio.request_current.sgl_pair->A) :
         &(VAR_3->type.pio.request_current.sgl_pair->B) ;

   VAR_8 = VAR_3->type.pio.request_current.sgl_offset;

   VAR_10 = VAR_4;
   VAR_9 = VAR_3->type.pio.current_transfer_bytes;
   VAR_6 = VAR_1;


   while (
            (VAR_5 > 0)
         && (VAR_6 == VAR_1)
         )
   {
      if (VAR_7->length == VAR_8)
      {

         VAR_7 = FUNC_4(VAR_3);

         if (VAR_7 == ((void*)0))
            VAR_6 = VAR_0;
         else
            VAR_8 = 0;
      }
      else
      {




         U8 * VAR_11;
         U32 VAR_12;

         VAR_11 = (U8 *)FUNC_3(
            VAR_3,
            VAR_9
         );

         VAR_12 = FUNC_0(VAR_5, VAR_7->length - VAR_8);

         FUNC_1(VAR_11, VAR_10, VAR_12);

         VAR_5 -= VAR_12;
         VAR_8 += VAR_12;
         VAR_9 += VAR_12;
         VAR_10 += VAR_12;

      }
   }

   VAR_3->type.pio.request_current.sgl_offset = VAR_8;

   return VAR_6;
}

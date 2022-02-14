
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ address_lower; scalar_t__ address_upper; } ;
struct TYPE_14__ {scalar_t__ next_pair_lower; scalar_t__ next_pair_upper; TYPE_4__ A; TYPE_4__ B; } ;
struct TYPE_9__ {scalar_t__ sgl_set; TYPE_8__* sgl_pair; } ;
struct TYPE_10__ {TYPE_1__ request_current; int sgl_pair_index; } ;
struct TYPE_11__ {TYPE_2__ pio; } ;
struct TYPE_13__ {TYPE_3__ type; int parent; } ;
typedef TYPE_4__ SCU_SGL_ELEMENT_T ;
typedef TYPE_5__ SCIC_SDS_STP_REQUEST_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_8__* FUNC_0 (int *,int ) ;

SCU_SGL_ELEMENT_T * FUNC_1(
   SCIC_SDS_STP_REQUEST_T * VAR_2
)
{
   SCU_SGL_ELEMENT_T * VAR_3;

   if (VAR_2->type.pio.request_current.sgl_set == VAR_0)
   {
      if (
            (VAR_2->type.pio.request_current.sgl_pair->B.address_lower == 0)
         && (VAR_2->type.pio.request_current.sgl_pair->B.address_upper == 0)
         )
      {
         VAR_3 = ((void*)0);
      }
      else
      {
         VAR_2->type.pio.request_current.sgl_set = VAR_1;
         VAR_3 = &(VAR_2->type.pio.request_current.sgl_pair->B);
      }
   }
   else
   {
      if (
            (VAR_2->type.pio.request_current.sgl_pair->next_pair_lower == 0)
         && (VAR_2->type.pio.request_current.sgl_pair->next_pair_upper == 0)
         )
      {
         VAR_3 = ((void*)0);
      }
      else
      {
         VAR_2->type.pio.request_current.sgl_pair =
            FUNC_0(
               &(VAR_2->parent),
               ++VAR_2->type.pio.sgl_pair_index
            );

         VAR_2->type.pio.request_current.sgl_set = VAR_0;

         VAR_3 = &(VAR_2->type.pio.request_current.sgl_pair->A);
      }
   }

   return VAR_3;
}

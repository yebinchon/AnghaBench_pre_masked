
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_9__ {TYPE_1__* array; } ;
struct TYPE_10__ {TYPE_2__ buffers; } ;
struct TYPE_12__ {size_t remote_node_entries; int ** device_table; int * phy_table; TYPE_3__ uf_control; } ;
struct TYPE_11__ {scalar_t__ is_address_frame; } ;
struct TYPE_8__ {int state; TYPE_4__* header; } ;
typedef TYPE_4__ SCU_UNSOLICITED_FRAME_HEADER_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_5__ SCIC_SDS_CONTROLLER_T ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_5__*,size_t) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 scalar_t__ FUNC_6 (int *,size_t) ;

__attribute__((used)) static
void FUNC_7(
   SCIC_SDS_CONTROLLER_T *VAR_4,
   U32 VAR_5
)
{
   U32 VAR_6;
   U32 VAR_7;

   SCU_UNSOLICITED_FRAME_HEADER_T * VAR_8;
   SCIC_SDS_PHY_T * VAR_9;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_10;

   SCI_STATUS VAR_11 = VAR_1;

   VAR_7 = FUNC_2(VAR_5);

   VAR_8
      = VAR_4->uf_control.buffers.array[VAR_7].header;
   VAR_4->uf_control.buffers.array[VAR_7].state
      = VAR_3;

   if (FUNC_1(VAR_5))
   {



      FUNC_4(VAR_4, VAR_7);
      return;
   }

   if (VAR_8->is_address_frame)
   {
      VAR_6 = FUNC_3(VAR_5);
      VAR_9 = &VAR_4->phy_table[VAR_6];
      if (VAR_9 != ((void*)0))
      {
         VAR_11 = FUNC_5(VAR_9, VAR_7);
      }
   }
   else
   {

      VAR_6 = FUNC_0(VAR_5);

      if (VAR_6 == VAR_0)
      {



         VAR_6 = FUNC_3(VAR_5);
         VAR_9 = &VAR_4->phy_table[VAR_6];
         VAR_11 = FUNC_5(VAR_9, VAR_7);
      }
      else
      {
         if (VAR_6 < VAR_4->remote_node_entries)
            VAR_10 = VAR_4->device_table[VAR_6];
         else
            VAR_10 = ((void*)0);

         if (VAR_10 != ((void*)0))
            VAR_11 = FUNC_6(VAR_10, VAR_7);
         else
            FUNC_4(VAR_4, VAR_7);
      }
   }

   if (VAR_11 != VAR_2)
   {


   }
}

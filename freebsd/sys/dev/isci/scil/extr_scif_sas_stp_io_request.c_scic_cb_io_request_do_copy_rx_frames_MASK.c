
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ protocol; scalar_t__ type; } ;
struct TYPE_6__ {TYPE_3__ sequence; } ;
struct TYPE_7__ {TYPE_1__ stp; } ;
struct TYPE_9__ {TYPE_2__ parent; } ;
typedef TYPE_4__ SCIF_SAS_IO_REQUEST_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*) ;

BOOL FUNC_2(
   void * VAR_8
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_9 = (SCIF_SAS_IO_REQUEST_T*) VAR_8;

   FUNC_0((
      FUNC_1(VAR_9),
      VAR_6,
      "scic_cb_io_request_do_copy_rx_frames(0x%x) enter\n",
      VAR_9
   ));




   if (VAR_9->parent.stp.sequence.protocol == VAR_5)
   {
      if (
            (VAR_9->parent.stp.sequence.type == VAR_1)
         || (VAR_9->parent.stp.sequence.type == VAR_2)
         || (
               (VAR_9->parent.stp.sequence.type >= VAR_4)
            && (VAR_9->parent.stp.sequence.type <= VAR_3)
            )
         )
      {
           FUNC_0((
                 FUNC_1(VAR_9),
                 VAR_6,
                 "scic_cb_io_request_do_copy_rx_frames(0x%x) TRUE\n",
                 VAR_9
              ));
           return VAR_7;
      }
   }




   return VAR_0;
}

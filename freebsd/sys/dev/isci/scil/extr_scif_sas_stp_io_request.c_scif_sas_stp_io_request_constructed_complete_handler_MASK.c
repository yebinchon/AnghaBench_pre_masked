
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ protocol; } ;
struct TYPE_7__ {scalar_t__ ncq_tag; TYPE_4__ sequence; } ;
struct TYPE_8__ {TYPE_1__ stp; int device; } ;
struct TYPE_9__ {TYPE_2__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_IO_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_REQUEST_T * VAR_4
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_5 = (SCIF_SAS_IO_REQUEST_T *) VAR_4;

   FUNC_0(*(
      FUNC_2(VAR_4),
      VAR_1,
      "scif_sas_stp_io_request_constructed_complete_handler(0x%x) enter\n",
      VAR_4
   ));

   if (VAR_5->parent.stp.sequence.protocol == VAR_0)
   {

      if (VAR_5->parent.stp.ncq_tag != VAR_2)
         FUNC_3(
            VAR_5->parent.device, VAR_5->parent.stp.ncq_tag
         );
   }

   FUNC_1(&VAR_5->parent.stp.sequence, VAR_5, VAR_5);

   return VAR_3;
}

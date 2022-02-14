
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int sector_count; } ;
struct TYPE_7__ {scalar_t__ protocol; } ;
struct TYPE_8__ {int ncq_tag; TYPE_1__ sequence; } ;
struct TYPE_9__ {TYPE_2__ stp; int core_object; int device; } ;
struct TYPE_10__ {TYPE_3__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_5__ SATA_FIS_REG_H2D_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_6 = (SCIF_SAS_IO_REQUEST_T *) VAR_5;

   FUNC_0(*(
      FUNC_1(VAR_5),
      VAR_1,
      "scif_sas_stp_io_request_constructed_start_handler(0x%x) enter\n",
      VAR_5
   ));

   if (VAR_6->parent.stp.sequence.protocol == VAR_0)
   {
      SATA_FIS_REG_H2D_T * VAR_7;


      VAR_6->parent.stp.ncq_tag = FUNC_4(
                                     VAR_6->parent.device
                                  );

      if (VAR_6->parent.stp.ncq_tag == VAR_2)
         return VAR_3;



      VAR_7 = FUNC_2(VAR_6->parent.core_object);
      VAR_7->sector_count = (VAR_6->parent.stp.ncq_tag << 3);



      FUNC_3(
         VAR_6->parent.core_object, VAR_6->parent.stp.ncq_tag
      );
   }

   return VAR_4;
}

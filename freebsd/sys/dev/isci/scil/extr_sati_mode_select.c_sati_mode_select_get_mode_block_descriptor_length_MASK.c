
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_4__ {int* block_descriptor_length; } ;
struct TYPE_3__ {int block_descriptor_length; } ;
typedef TYPE_1__ SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T ;
typedef TYPE_2__ SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T ;



__attribute__((used)) static
U32 FUNC_0(
   U8 * VAR_0,
   U32 VAR_1
)
{
   U32 VAR_2 = 0;
   SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T * VAR_3;
   SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T * VAR_4;

   if(VAR_1 == 6)
   {
      VAR_3 = (SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T *) VAR_0;
      VAR_2 = VAR_3->block_descriptor_length;
   }
   else if(VAR_1 == 10)
   {
      VAR_4 = (SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T *) VAR_0;



      VAR_2 =(((U16)VAR_4->block_descriptor_length[0]) << 8) +
         VAR_4->block_descriptor_length[1];

   }

   return VAR_2;

}

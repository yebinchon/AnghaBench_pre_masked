
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_4__ {int medium_type; } ;
struct TYPE_3__ {int medium_type; } ;
typedef TYPE_1__ SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T ;
typedef TYPE_2__ SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T ;



__attribute__((used)) static
U8 FUNC_0(
   U8 * VAR_0,
   U32 VAR_1
)
{
   U8 VAR_2 =0xFF;
   SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T * VAR_3;
   SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T * VAR_4;

   if(VAR_1 == 6)
   {
      VAR_3 = (SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T *) VAR_0;
      VAR_2 = VAR_3->medium_type;
   }
   else if(VAR_1 == 10)
   {
      VAR_4 = (SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T *) VAR_0;
      VAR_2 = VAR_4->medium_type;
   }

   return VAR_2;
}

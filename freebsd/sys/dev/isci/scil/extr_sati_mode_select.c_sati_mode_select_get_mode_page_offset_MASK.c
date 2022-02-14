
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T ;
typedef int SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T ;



__attribute__((used)) static
U32 FUNC_0(
    U32 VAR_0,
    U32 VAR_1
    )
{
   U32 VAR_2;

   if(VAR_1 == 6)
   {
      VAR_2 = sizeof(SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_6_T) + VAR_0;
   }
   else if(VAR_1 == 10)
   {
      VAR_2 = sizeof(SCSI_MODE_SELECT_MODE_PARAMETER_HEADER_10_T) + VAR_0;
   }
   else
   {
      VAR_2 = 0;
   }

   return VAR_2;
}

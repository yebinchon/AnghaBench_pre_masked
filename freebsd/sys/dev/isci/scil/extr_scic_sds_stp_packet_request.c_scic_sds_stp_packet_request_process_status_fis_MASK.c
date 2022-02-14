
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_1__ SATA_FIS_REG_D2H_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

SCI_STATUS FUNC_0(
   SCIC_SDS_REQUEST_T * VAR_3,
   SATA_FIS_REG_D2H_T * VAR_4
)
{
   SCI_STATUS VAR_5 = VAR_2;


   if (VAR_4->status & VAR_0)
      VAR_5 = VAR_1;

   return VAR_5;
}

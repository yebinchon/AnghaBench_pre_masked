
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_2__ {int * domains; } ;
typedef int SCI_STATUS ;
typedef int * SCI_DOMAIN_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

SCI_STATUS FUNC_0(
   SCI_CONTROLLER_HANDLE_T VAR_5,
   U8 VAR_6,
   SCI_DOMAIN_HANDLE_T * VAR_7
)
{
   SCIF_SAS_CONTROLLER_T * VAR_8 = (SCIF_SAS_CONTROLLER_T*) VAR_5;


   if (VAR_5 == VAR_2)
      return VAR_0;


   if (VAR_6 < VAR_3)
   {
      *VAR_7 = &VAR_8->domains[VAR_6];
      return VAR_4;
   }

   return VAR_1;
}

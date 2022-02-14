
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int internal_request_entries; int * mdes; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCIF_SAS_CONTROLLER_T * VAR_5
)
{
   BOOL VAR_6;


   VAR_6 = FUNC_0(
                          &VAR_5->mdes[VAR_1],
                          4,
                          VAR_5->internal_request_entries *
                             FUNC_1(),
                          VAR_3
                       );

   if (VAR_6 == VAR_0)
      return VAR_2;

   return VAR_4;
}

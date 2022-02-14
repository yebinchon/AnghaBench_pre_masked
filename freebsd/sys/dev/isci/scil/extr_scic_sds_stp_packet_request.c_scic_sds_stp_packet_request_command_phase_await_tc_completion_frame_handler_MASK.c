
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_2__ {int parent; int d2h_reg_fis; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCIC_SDS_REQUEST_T * VAR_3,
   U32 VAR_4
)
{
   SCIC_SDS_STP_REQUEST_T * VAR_5 = (SCIC_SDS_STP_REQUEST_T *)VAR_3;

   SCI_STATUS VAR_6 =
      FUNC_1(
         VAR_3, VAR_4);

   if (VAR_6 == VAR_0)
   {

      VAR_6 = FUNC_2(
         VAR_3, &VAR_5->d2h_reg_fis);

      if (VAR_6 != VAR_0)
      {
         FUNC_0(
            &VAR_5->parent,
            VAR_1,
            VAR_6
         );
      }
      else
         FUNC_0(
            &VAR_5->parent, VAR_2, VAR_0
         );
   }

   return VAR_6;
}

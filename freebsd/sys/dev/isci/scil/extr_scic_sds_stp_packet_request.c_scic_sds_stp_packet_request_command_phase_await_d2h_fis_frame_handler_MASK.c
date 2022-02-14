
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_8__ {int state_machine; } ;
struct TYPE_10__ {TYPE_1__ parent; } ;
struct TYPE_9__ {int d2h_reg_fis; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_STP_REQUEST_T ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCIC_SDS_REQUEST_T * VAR_4,
   U32 VAR_5
)
{
   SCI_STATUS VAR_6 =
      FUNC_2(
         VAR_4, VAR_5);

   SCIC_SDS_STP_REQUEST_T * VAR_7 = (SCIC_SDS_STP_REQUEST_T *)VAR_4;

   if (VAR_6 == VAR_1)
   {

      VAR_6 = FUNC_3(
         VAR_4, &VAR_7->d2h_reg_fis);

      if (VAR_6 != VAR_1)
      {
         FUNC_1(
            VAR_4,
            VAR_2,
            VAR_6
         );
      }
      else
         FUNC_1(
            VAR_4, VAR_3, VAR_1
         );



      FUNC_0(
         &VAR_4->parent.state_machine,
         VAR_0
      );
   }

   return VAR_6;
}

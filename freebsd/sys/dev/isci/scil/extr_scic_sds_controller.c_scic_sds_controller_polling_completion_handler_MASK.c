
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_10__ {scalar_t__ encountered_fatal_error; scalar_t__ restrict_completions; } ;
typedef TYPE_1__* SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_9(
   SCI_CONTROLLER_HANDLE_T VAR_7
)
{
   SCIC_SDS_CONTROLLER_T *VAR_8 = (SCIC_SDS_CONTROLLER_T *)VAR_7;

   FUNC_1((
      FUNC_3(VAR_7),
      VAR_1,
      "scic_sds_controller_polling_completion_handler(0x%d) enter\n",
      VAR_7
   ));

   if (VAR_8->encountered_fatal_error == VAR_6)
   {
      FUNC_0((
         FUNC_3(VAR_8),
         VAR_1,
         "SCIC Controller has encountered a fatal error.\n"
      ));

      FUNC_4(
         FUNC_6(VAR_8),
         VAR_2
      );
   }
   else if (FUNC_5(VAR_8))
   {
      if (VAR_8->restrict_completions == VAR_0)
         FUNC_7(VAR_8);
      else
         FUNC_8(VAR_8);
   }
   FUNC_2(
      VAR_8,
      (U32)(VAR_3 | VAR_4 | VAR_5)
   );
}

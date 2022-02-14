
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {void* encountered_fatal_error; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
BOOL FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_5,
   U32 VAR_6
)
{
   BOOL VAR_7 = VAR_0;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1,
      "scic_sds_controller_standard_interrupt_handler(0x%d,0x%d) enter\n",
      VAR_5, VAR_6
   ));

   if (
         (VAR_6 & VAR_2)
      || (
            (VAR_6 & VAR_3)
         && (!FUNC_2(VAR_5))
         )
      )
   {





      VAR_7 = VAR_4;
      VAR_5->encountered_fatal_error = VAR_4;
   }

   if (FUNC_2(VAR_5))
   {
      VAR_7 = VAR_4;
   }

   return VAR_7;
}

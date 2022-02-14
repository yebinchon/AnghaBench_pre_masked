
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {scalar_t__ destination_state; } ;
struct TYPE_5__ {TYPE_3__* rnc; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_4,
   U32 VAR_5
)
{
   SCI_STATUS VAR_6;

   VAR_6 = FUNC_0(VAR_4, VAR_5);

   if (VAR_6 == VAR_1)
   {
      if ((FUNC_2(VAR_5) == VAR_2
          || FUNC_2(VAR_5) == VAR_3)
          && (VAR_4->rnc->destination_state != VAR_0))
      {
         VAR_6 = FUNC_1(
                  VAR_4->rnc, ((void*)0), ((void*)0));
      }
   }

   return VAR_6;
}

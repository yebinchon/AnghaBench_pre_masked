
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef scalar_t__ U32 ;
typedef scalar_t__ U16 ;
struct TYPE_3__ {scalar_t__ interrupt_coalesce_timeout; scalar_t__ interrupt_coalesce_number; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_9 ;

SCI_STATUS FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_10,
   U32 VAR_11,
   U32 VAR_12
)
{
   SCIC_SDS_CONTROLLER_T * VAR_13 = (SCIC_SDS_CONTROLLER_T *)VAR_10;
   U8 VAR_14 = 0;
   U32 VAR_15 = 0;
   U32 VAR_16 = 0;


   if (VAR_11 > VAR_0)
      return VAR_7;
   if (VAR_12 == 0)
      VAR_14 = 0;
   else
   {

      VAR_12 = VAR_12 * 100;
      VAR_15 = VAR_1 / 10;
      VAR_16 = VAR_2 / 10;


      for ( VAR_14 = VAR_4;
            VAR_14 <= VAR_3;
            VAR_14++ )
      {
         if (VAR_15 <= VAR_12 && VAR_16 > VAR_12)
            break;
         else if (VAR_12 >= VAR_16 && VAR_12 < VAR_15*2
            && VAR_12 <= VAR_5*100)
         {
            if ( (VAR_12-VAR_16) < (2*VAR_15 - VAR_12) )
               break;
            else
            {
               VAR_14++;
               break;
            }
         }
         else
         {
            VAR_16 = VAR_16*2;
            VAR_15 = VAR_15*2;
         }
      }

      if ( VAR_14 == VAR_3+1 )

         return VAR_7;
   }

   FUNC_1(
      VAR_13,
      (FUNC_0(VAR_6, VAR_11)|
       FUNC_0(VAR_9, VAR_14))
   );

   VAR_13->interrupt_coalesce_number = (U16)VAR_11;
   VAR_13->interrupt_coalesce_timeout = VAR_12/100;

   return VAR_8;
}

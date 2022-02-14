
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
typedef scalar_t__ U32 ;
typedef scalar_t__ U16 ;
struct TYPE_9__ {int protocol; } ;
struct TYPE_6__ {TYPE_5__ sequence; } ;
struct TYPE_7__ {TYPE_1__ stp; } ;
struct TYPE_8__ {TYPE_2__ parent; } ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_3__ SCIF_SAS_IO_REQUEST_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

U32 FUNC_5(
   SCI_IO_REQUEST_HANDLE_T VAR_2
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_3 = (SCIF_SAS_IO_REQUEST_T*) VAR_2;

   if(FUNC_2(FUNC_3(VAR_2))
       == VAR_1)
   {
      U16 VAR_4 =
             FUNC_0(&(VAR_3->parent.stp.sequence));

      if (VAR_4 != 0)
         return VAR_4;
      else
      {

         U8 VAR_5 = VAR_3->parent.stp.sequence.protocol;
         if ( VAR_5 & VAR_0)
            return
               FUNC_4(VAR_3);
         else

            return FUNC_1(
                      FUNC_3(VAR_2));
      }
   }
   else
   {
      return FUNC_1(
                FUNC_3(VAR_2));
   }
}

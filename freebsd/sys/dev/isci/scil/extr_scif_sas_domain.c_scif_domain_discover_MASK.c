
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int parent; TYPE_1__* state_handlers; int remote_device_list; } ;
struct TYPE_3__ {scalar_t__ (* discover_handler ) (int *,int,int) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_DOMAIN_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int,int) ;

SCI_STATUS FUNC_4(
   SCI_DOMAIN_HANDLE_T VAR_4,
   U32 VAR_5,
   U32 VAR_6
)
{
   SCIF_SAS_DOMAIN_T * VAR_7 = (SCIF_SAS_DOMAIN_T*) VAR_4;
   SCI_STATUS VAR_8 = VAR_2;
   SCI_STATUS VAR_9 = VAR_2;

   FUNC_0((
      FUNC_2(VAR_4),
      VAR_0 | VAR_1,
      "scif_domain_discover(0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6
   ));



   if ((VAR_6 * FUNC_1(&VAR_7->remote_device_list))
        > VAR_5)
      VAR_8 = VAR_3;

   VAR_9 = VAR_7->state_handlers->discover_handler(
                  &VAR_7->parent, VAR_5, VAR_6
               );


   if ( (VAR_8 == VAR_2)
      || (VAR_8 != VAR_2 && VAR_9 != VAR_2) )
   {
      VAR_8 = VAR_9;
   }

   return VAR_8;
}

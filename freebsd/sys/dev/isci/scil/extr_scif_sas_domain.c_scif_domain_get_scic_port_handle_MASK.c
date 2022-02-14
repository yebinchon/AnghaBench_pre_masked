
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ core_object; } ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef scalar_t__ SCI_DOMAIN_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

SCI_PORT_HANDLE_T FUNC_2(
   SCI_DOMAIN_HANDLE_T VAR_2
)
{
   SCIF_SAS_DOMAIN_T * VAR_3 = (SCIF_SAS_DOMAIN_T*) VAR_2;

   if ( (VAR_3 == ((void*)0)) || (VAR_3->core_object == VAR_1) )
      return VAR_1;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "Domain:0x%x no associated core port found\n",
      VAR_3
   ));

   return VAR_3->core_object;
}

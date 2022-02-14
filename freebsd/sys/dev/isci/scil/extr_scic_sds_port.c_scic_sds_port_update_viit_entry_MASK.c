
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned long physical_port_index; } ;
struct TYPE_7__ {unsigned long high; unsigned long low; } ;
typedef TYPE_1__ SCI_SAS_ADDRESS_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned long) ;
 int VAR_7 ;

void FUNC_2(
   SCIC_SDS_PORT_T *VAR_8
)
{
   SCI_SAS_ADDRESS_T VAR_9;

   FUNC_0(VAR_8, &VAR_9);

   FUNC_1(
      VAR_8, VAR_4, VAR_9.high);

   FUNC_1(
      VAR_8, VAR_5, VAR_9.low);


   FUNC_1(
      VAR_8, VAR_6, 0);



   FUNC_1(
      VAR_8, VAR_7, (
           VAR_0
         | VAR_2
         | ((1UL << VAR_8->physical_port_index) << VAR_1)
         | VAR_3
         )
   );
}

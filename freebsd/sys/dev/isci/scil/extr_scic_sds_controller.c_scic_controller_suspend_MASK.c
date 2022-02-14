
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_5__ {scalar_t__ completion_queue_get; int * port_table; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

SCI_STATUS FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_2
)
{
   SCIC_SDS_CONTROLLER_T * VAR_3 = (SCIC_SDS_CONTROLLER_T*)VAR_2;
   U8 VAR_4;



   FUNC_3(VAR_2);







   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
      FUNC_4(
         &(VAR_3->port_table[VAR_4]));



   FUNC_1(VAR_3, 0x00000000);
   FUNC_0(VAR_3, 0x00000000);



   FUNC_2(VAR_3, 0xFFFFFFFF);


   VAR_3->completion_queue_get = 0;

   return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U16 ;
typedef int SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ,void*,void*,int *,int ) ;

SCI_STATUS FUNC_2(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_1,
   U16 VAR_2,
   void * VAR_3,
   void * VAR_4,
   SCI_TASK_REQUEST_HANDLE_T * VAR_5
)
{
   SCI_STATUS VAR_6;
   U8 VAR_7 =
                FUNC_0(VAR_3);

   VAR_6 = FUNC_1(
               VAR_0,
               VAR_1,
               VAR_2,
               VAR_3,
               VAR_4,
               VAR_5,
               VAR_7
            );

   return VAR_6;
}

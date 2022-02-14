
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int ) ;

void FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   SCIF_SAS_REQUEST_T * VAR_4
)
{
   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_terminated_request_handler(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));

   FUNC_2(
      VAR_3, VAR_4, ((void*)0), VAR_2
   );
}

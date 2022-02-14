
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_DOMAIN_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_DOMAIN_T * VAR_2,
   SCI_BASE_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T *) VAR_2;

   FUNC_0(*(
      FUNC_1(VAR_2),
      VAR_0,
      "scif_sas_domain_stopping_device_stop_complete_handler(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));


   FUNC_2(VAR_4);

   return VAR_1;
}

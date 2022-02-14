
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_DOMAIN_T ;
typedef int SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_DOMAIN_T * VAR_3,
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCIF_SAS_DOMAIN_T * VAR_6 = (SCIF_SAS_DOMAIN_T *) VAR_3;
   SCI_STATUS VAR_7;

   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_stopping_complete_task_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));

   VAR_7 = FUNC_2(
               VAR_3, VAR_4, VAR_5
            );


   FUNC_3(VAR_6);

   return VAR_2;
}

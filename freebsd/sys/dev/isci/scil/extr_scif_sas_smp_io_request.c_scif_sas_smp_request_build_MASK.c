
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SMP_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void*,int ,int *) ;
 int FUNC_5 (int *,int *,void*,char*,int ,int *,void*) ;

__attribute__((used)) static
void * FUNC_6(
   SCIF_SAS_CONTROLLER_T * VAR_2,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3,
   SMP_REQUEST_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   if (VAR_6 != ((void*)0) && VAR_5 != ((void*)0))
   {
      FUNC_5(
         VAR_2,
         VAR_3,
         VAR_6,
         (char *)VAR_6 + sizeof(SCIF_SAS_IO_REQUEST_T),
         VAR_1,
         VAR_4,
         VAR_5
      );

      return VAR_6;
   }
   else
   {
      void * VAR_7;
      VAR_7 = FUNC_3(VAR_2);
      FUNC_0(VAR_7 != ((void*)0));

      if (VAR_7 != ((void*)0))
      {

         FUNC_4(
            VAR_2,
            VAR_3,
            VAR_7,
            VAR_1,
            VAR_4
         );
      }
      else
      {
         FUNC_1((
            FUNC_2(VAR_2),
            VAR_0,
            "scif_sas_smp_request_build, no memory available!\n"
         ));
      }

      return VAR_7;
   }
}

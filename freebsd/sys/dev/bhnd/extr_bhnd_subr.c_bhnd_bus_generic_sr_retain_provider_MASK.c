
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_service_registry {int dummy; } ;
typedef int * device_t ;
typedef int bhnd_service_t ;


 struct bhnd_service_registry* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int * FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct bhnd_service_registry*,int *,int ,int ) ;
 int * FUNC_5 (struct bhnd_service_registry*,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;

device_t
FUNC_8(device_t VAR_2, device_t VAR_3,
    bhnd_service_t VAR_4)
{
 struct bhnd_service_registry *VAR_5;
 device_t VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 FUNC_3(VAR_5 != ((void*)0), ("NULL service registry"));
 while (1) {

  VAR_7 = FUNC_5(VAR_5, VAR_4);
  if (VAR_7 != ((void*)0))
   return (VAR_7);


  if ((VAR_6 = FUNC_6(VAR_2)) == ((void*)0))
   return (((void*)0));

  VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_4);
  if (VAR_7 == ((void*)0))
   return (((void*)0));



  VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_4,
      VAR_0);
  if (VAR_8) {
   FUNC_1(VAR_6, VAR_2, VAR_7,
       VAR_4);
   if (VAR_8 == VAR_1) {



    continue;
   }

   FUNC_7(VAR_2, "failed to register service "
       "provider: %d\n", VAR_8);
   return (((void*)0));
  }
 }
}

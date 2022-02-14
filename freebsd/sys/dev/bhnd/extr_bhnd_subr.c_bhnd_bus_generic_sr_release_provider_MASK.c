
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_service_registry {int dummy; } ;
typedef int device_t ;
typedef int bhnd_service_t ;


 struct bhnd_service_registry* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct bhnd_service_registry*,int ,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(device_t VAR_0, device_t VAR_1,
    device_t VAR_2, bhnd_service_t VAR_3)
{
 struct bhnd_service_registry *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_4 != ((void*)0), ("NULL service registry"));




 if (!FUNC_3(VAR_4, VAR_2, VAR_3))
  return;


 FUNC_1(FUNC_4(VAR_0), VAR_0, VAR_2,
     VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int bhnd_service_t ;


 void FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

void
FUNC_3(device_t VAR_0, device_t VAR_1,
    device_t VAR_2, bhnd_service_t VAR_3)
{
 device_t VAR_4 = FUNC_1(VAR_0);

 if (VAR_4 != ((void*)0)) {
  return (FUNC_0(VAR_4, VAR_1,
      VAR_2, VAR_3));
 }

 FUNC_2("missing BHND_BUS_RELEASE_PROVIDER()");
}

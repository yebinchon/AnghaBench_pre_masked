
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_chipid {int dummy; } ;
typedef int device_t ;


 struct bhnd_chipid const* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

const struct bhnd_chipid *
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 if (FUNC_1(VAR_0) != ((void*)0))
  return (FUNC_0(FUNC_1(VAR_0), VAR_1));

 FUNC_2("missing BHND_BUS_GET_CHIPID()");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {scalar_t__ devclass; } ;


 char const* FUNC_0 (scalar_t__) ;

const char *
FUNC_1(device_t VAR_0)
{
 if (VAR_0 != ((void*)0) && VAR_0->devclass)
  return (FUNC_0(VAR_0->devclass));
 return (((void*)0));
}

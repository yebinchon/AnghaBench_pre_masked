
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {void* ivars; } ;


 int FUNC_0 (int ,char*) ;

void
FUNC_1(device_t VAR_0, void * VAR_1)
{

 FUNC_0(VAR_0 != ((void*)0), ("device_set_ivars(NULL, ...)"));
 VAR_0->ivars = VAR_1;
}

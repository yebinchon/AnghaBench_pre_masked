
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_5__ {int flags; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int
FUNC_1(device_t VAR_1, device_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == 0)
  VAR_2->flags |= VAR_0;

 return (VAR_3);
}

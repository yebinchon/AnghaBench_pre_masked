
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_5__ {scalar_t__ state; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;

int
FUNC_3(device_t VAR_3)
{

 FUNC_2(("%s", FUNC_0(VAR_3)));
 if (VAR_3->state == VAR_1)
  return (VAR_2);
 if (VAR_3->state != VAR_0)
  return (0);

 return (FUNC_1(VAR_3));
}

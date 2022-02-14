
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char const*) ;

int
FUNC_1(device_t VAR_2, const char *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return (VAR_4);
 VAR_2->flags |= VAR_0;
 return (0);
}

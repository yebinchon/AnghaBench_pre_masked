
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_3__ {char const* dev_desc; } ;


 char const* VAR_0 ;

const char *
FUNC_0(device_t VAR_1)
{
 if (VAR_1)
  return &(VAR_1->dev_desc[0]);
 return (VAR_0);
}

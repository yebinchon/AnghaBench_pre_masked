
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_chipid {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct bhnd_chipid const cid; } ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static const struct bhnd_chipid *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 return (&FUNC_0()->cid);
}

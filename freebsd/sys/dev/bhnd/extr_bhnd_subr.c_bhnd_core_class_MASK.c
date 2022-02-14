
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_info {int device; int vendor; } ;
typedef int bhnd_devclass_t ;


 int FUNC_0 (int ,int ) ;

bhnd_devclass_t
FUNC_1(const struct bhnd_core_info *VAR_0)
{
 return FUNC_0(VAR_0->vendor, VAR_0->device);
}

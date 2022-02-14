
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_core_info {int device; int vendor; } ;


 char const* FUNC_0 (int ,int ) ;

const char *
FUNC_1(const struct bhnd_core_info *VAR_0)
{
 return FUNC_0(VAR_0->vendor, VAR_0->device);
}

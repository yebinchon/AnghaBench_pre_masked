
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_core_info {int unit; int core_idx; int hwrev; int device; int vendor; } ;
struct bcma_erom_core {int rev; int device; int vendor; } ;



__attribute__((used)) static void
FUNC_0(const struct bcma_erom_core *VAR_0, u_int VAR_1,
    int VAR_2, struct bhnd_core_info *VAR_3)
{
 VAR_3->vendor = VAR_0->vendor;
 VAR_3->device = VAR_0->device;
 VAR_3->hwrev = VAR_0->rev;
 VAR_3->core_idx = VAR_1;
 VAR_3->unit = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_raid_map {int disk_sectors; int disk_sectors_hi; } ;
typedef int off_t ;



__attribute__((used)) static void
FUNC_0(struct intel_raid_map *VAR_0, off_t VAR_1)
{

 VAR_0->disk_sectors = VAR_1 & 0xffffffff;
 VAR_0->disk_sectors_hi = VAR_1 >> 32;
}

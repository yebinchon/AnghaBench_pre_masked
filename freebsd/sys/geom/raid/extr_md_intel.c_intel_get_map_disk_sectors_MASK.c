
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_raid_map {scalar_t__ disk_sectors; scalar_t__ disk_sectors_hi; } ;
typedef int off_t ;



__attribute__((used)) static off_t
FUNC_0(struct intel_raid_map *VAR_0)
{
 off_t VAR_1 = (off_t)VAR_0->disk_sectors_hi << 32;

 VAR_1 += VAR_0->disk_sectors;
 return (VAR_1);
}

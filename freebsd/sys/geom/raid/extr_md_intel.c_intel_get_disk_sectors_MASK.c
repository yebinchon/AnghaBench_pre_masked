
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_raid_disk {scalar_t__ sectors; scalar_t__ sectors_hi; } ;
typedef int off_t ;



__attribute__((used)) static off_t
FUNC_0(struct intel_raid_disk *VAR_0)
{
 off_t VAR_1 = (off_t)VAR_0->sectors_hi << 32;

 VAR_1 += VAR_0->sectors;
 return (VAR_1);
}

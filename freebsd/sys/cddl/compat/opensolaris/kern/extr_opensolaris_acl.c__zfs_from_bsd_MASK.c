
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zfs2bsd {int zb_bsd; int zb_zfs; } ;



__attribute__((used)) static uint32_t
FUNC_0(int VAR_0, const struct zfs2bsd *VAR_1)
{
 const struct zfs2bsd *VAR_2;
 uint32_t VAR_3 = 0;

 for (VAR_2 = VAR_1; VAR_2->zb_bsd != 0; VAR_2++) {
  if (VAR_0 & VAR_2->zb_bsd)
   VAR_3 |= VAR_2->zb_zfs;
 }

 return (VAR_3);
}

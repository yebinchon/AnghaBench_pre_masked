
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zfs2bsd {int zb_zfs; int zb_bsd; } ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0, const struct zfs2bsd *VAR_1)
{
 const struct zfs2bsd *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_1; VAR_2->zb_zfs != 0; VAR_2++) {
  if (VAR_0 & VAR_2->zb_zfs)
   VAR_3 |= VAR_2->zb_bsd;
 }

 return (VAR_3);
}

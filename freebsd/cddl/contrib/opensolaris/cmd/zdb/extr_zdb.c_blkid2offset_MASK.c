
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zb_level; scalar_t__ zb_object; int zb_blkid; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int uint64_t ;
struct TYPE_6__ {int dn_indblkshift; int dn_datablkszsec; } ;
typedef TYPE_2__ dnode_phys_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_2(const dnode_phys_t *VAR_2, const blkptr_t *VAR_3,
    const zbookmark_phys_t *VAR_4)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_4->zb_level < 0);
  if (VAR_4->zb_object == 0)
   return (VAR_4->zb_blkid);
  return (VAR_4->zb_blkid * FUNC_1(VAR_3));
 }

 FUNC_0(VAR_4->zb_level >= 0);

 return ((VAR_4->zb_blkid <<
     (VAR_4->zb_level * (VAR_2->dn_indblkshift - VAR_0))) *
     VAR_2->dn_datablkszsec << VAR_1);
}

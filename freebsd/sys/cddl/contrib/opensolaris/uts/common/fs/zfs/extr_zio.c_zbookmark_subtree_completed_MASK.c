
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ zb_level; int zb_blkid; } ;
typedef TYPE_1__ zbookmark_phys_t ;
struct TYPE_9__ {int dn_indblkshift; int dn_datablkszsec; } ;
typedef TYPE_2__ dnode_phys_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long long,int ,TYPE_1__*,TYPE_1__ const*) ;

boolean_t
FUNC_2(const dnode_phys_t *VAR_3,
    const zbookmark_phys_t *VAR_4, const zbookmark_phys_t *VAR_5)
{
 zbookmark_phys_t VAR_6 = *VAR_4;
 VAR_6.zb_blkid++;
 FUNC_0(VAR_5->zb_level == 0);


 if (VAR_3 == ((void*)0))
  return (VAR_0);
 return (FUNC_1(VAR_3->dn_datablkszsec, VAR_3->dn_indblkshift,
     1ULL << (VAR_1 - VAR_2), 0, &VAR_6,
     VAR_5) <= 0);
}

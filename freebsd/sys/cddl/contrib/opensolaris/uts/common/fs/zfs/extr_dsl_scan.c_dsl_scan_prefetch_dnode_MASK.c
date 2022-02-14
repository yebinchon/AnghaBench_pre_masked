
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zb_blkid; scalar_t__ zb_level; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int uint64_t ;
typedef int scan_prefetch_ctx_t ;
typedef int dsl_scan_t ;
struct TYPE_8__ {int dn_nblkptr; int dn_flags; int dn_spill; int * dn_blkptr; } ;
typedef TYPE_2__ dnode_phys_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int * FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(dsl_scan_t *VAR_3, dnode_phys_t *VAR_4,
    uint64_t VAR_5, uint64_t VAR_6)
{
 int VAR_7;
 zbookmark_phys_t VAR_8;
 scan_prefetch_ctx_t *VAR_9;

 if (VAR_4->dn_nblkptr == 0 && !(VAR_4->dn_flags & VAR_1))
  return;

 FUNC_1(&VAR_8, VAR_5, VAR_6, 0, 0);

 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_4->dn_nblkptr; VAR_7++) {
  VAR_8.zb_level = FUNC_0(&VAR_4->dn_blkptr[VAR_7]);
  VAR_8.zb_blkid = VAR_7;
  FUNC_2(VAR_9, &VAR_4->dn_blkptr[VAR_7], &VAR_8);
 }

 if (VAR_4->dn_flags & VAR_1) {
  VAR_8.zb_level = 0;
  VAR_8.zb_blkid = VAR_0;
  FUNC_2(VAR_9, &VAR_4->dn_spill, &VAR_8);
 }

 FUNC_4(VAR_9, VAR_2);
}

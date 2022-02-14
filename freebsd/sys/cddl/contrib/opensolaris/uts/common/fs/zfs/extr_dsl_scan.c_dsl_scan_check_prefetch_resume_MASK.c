
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ zb_objset; scalar_t__ zb_object; } ;
typedef TYPE_2__ zbookmark_phys_t ;
struct TYPE_12__ {int spc_indblkshift; int spc_datablkszsec; scalar_t__ spc_root; TYPE_1__* spc_scn; } ;
typedef TYPE_3__ scan_prefetch_ctx_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {int dn_indblkshift; int dn_datablkszsec; } ;
typedef TYPE_4__ dnode_phys_t ;
typedef int boolean_t ;
struct TYPE_10__ {TYPE_2__ scn_prefetch_bookmark; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_2__ const*,TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_1(scan_prefetch_ctx_t *VAR_2,
    const zbookmark_phys_t *VAR_3)
{
 zbookmark_phys_t *VAR_4 = &VAR_2->spc_scn->scn_prefetch_bookmark;
 dnode_phys_t VAR_5;
 dnode_phys_t *VAR_6 = (VAR_2->spc_root) ? ((void*)0) : &VAR_5;

 if (VAR_3->zb_objset != VAR_4->zb_objset)
  return (VAR_1);
 if ((int64_t)VAR_3->zb_object < 0)
  return (VAR_0);

 VAR_5.dn_datablkszsec = VAR_2->spc_datablkszsec;
 VAR_5.dn_indblkshift = VAR_2->spc_indblkshift;

 if (FUNC_0(VAR_6, VAR_3, VAR_4))
  return (VAR_1);

 return (VAR_0);
}

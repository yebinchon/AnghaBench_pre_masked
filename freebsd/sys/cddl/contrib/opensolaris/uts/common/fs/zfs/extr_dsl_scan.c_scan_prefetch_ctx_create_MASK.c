
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spc_root; scalar_t__ spc_indblkshift; scalar_t__ spc_datablkszsec; int * spc_scn; int spc_refcnt; } ;
typedef TYPE_1__ scan_prefetch_ctx_t ;
typedef int dsl_scan_t ;
struct TYPE_7__ {scalar_t__ dn_indblkshift; scalar_t__ dn_datablkszsec; } ;
typedef TYPE_2__ dnode_phys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static scan_prefetch_ctx_t *
FUNC_3(dsl_scan_t *VAR_3, dnode_phys_t *VAR_4, void *VAR_5)
{
 scan_prefetch_ctx_t *VAR_6;

 VAR_6 = FUNC_0(sizeof (scan_prefetch_ctx_t), VAR_2);
 FUNC_2(&VAR_6->spc_refcnt);
 FUNC_1(&VAR_6->spc_refcnt, VAR_5);
 VAR_6->spc_scn = VAR_3;
 if (VAR_4 != ((void*)0)) {
  VAR_6->spc_datablkszsec = VAR_4->dn_datablkszsec;
  VAR_6->spc_indblkshift = VAR_4->dn_indblkshift;
  VAR_6->spc_root = VAR_0;
 } else {
  VAR_6->spc_datablkszsec = 0;
  VAR_6->spc_indblkshift = 0;
  VAR_6->spc_root = VAR_1;
 }

 return (VAR_6);
}

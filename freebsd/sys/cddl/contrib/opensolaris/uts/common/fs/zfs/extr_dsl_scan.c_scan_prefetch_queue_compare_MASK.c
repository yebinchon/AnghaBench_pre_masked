
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spic_zb; TYPE_2__* spic_spc; } ;
typedef TYPE_1__ scan_prefetch_issue_ctx_t ;
struct TYPE_4__ {int spc_indblkshift; int spc_datablkszsec; } ;
typedef TYPE_2__ scan_prefetch_ctx_t ;


 int FUNC_0 (int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const scan_prefetch_issue_ctx_t *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 const scan_prefetch_ctx_t *VAR_4 = VAR_2->spic_spc;
 const scan_prefetch_ctx_t *VAR_5 = VAR_3->spic_spc;

 return (FUNC_0(VAR_4->spc_datablkszsec,
     VAR_4->spc_indblkshift, VAR_5->spc_datablkszsec,
     VAR_5->spc_indblkshift, &VAR_2->spic_zb, &VAR_3->spic_zb));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lsrec_t ;
struct TYPE_5__ {scalar_t__ lsd_count; int * lsd_next; } ;
typedef TYPE_1__ lsdata_t ;
struct TYPE_6__ {int dtpda_data; TYPE_3__* dtpda_edesc; } ;
typedef TYPE_2__ dtrace_probedata_t ;
struct TYPE_7__ {int dtepd_nrecs; int dtepd_rec; } ;
typedef TYPE_3__ dtrace_eprobedesc_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const dtrace_probedata_t *VAR_3, void *VAR_4)
{
 lsdata_t *VAR_5 = VAR_4;
 lsrec_t *VAR_6 = VAR_5->lsd_next;
 dtrace_eprobedesc_t *VAR_7 = VAR_3->dtpda_edesc;
 caddr_t VAR_8 = VAR_3->dtpda_data;

 if (VAR_5->lsd_count >= VAR_1)
  return (VAR_0);

 FUNC_0(VAR_6, VAR_7->dtepd_rec, VAR_7->dtepd_nrecs, VAR_8);

 VAR_5->lsd_next = (lsrec_t *)((uintptr_t)VAR_6 + VAR_2);
 VAR_5->lsd_count++;

 return (VAR_0);
}

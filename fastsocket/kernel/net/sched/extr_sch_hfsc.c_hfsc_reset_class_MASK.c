
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {int cl_flags; int cl_usc; int cl_ulimit; int cl_fsc; int cl_virtual; int cl_rsc; int cl_deadline; int qdisc; void* cf_tree; void* vt_tree; scalar_t__ cl_nactive; scalar_t__ cl_cfmin; scalar_t__ cl_myfadj; scalar_t__ cl_myf; scalar_t__ cl_f; scalar_t__ cl_parentperiod; scalar_t__ cl_vtperiod; scalar_t__ cl_pcvtoff; scalar_t__ cl_cvtoff; scalar_t__ cl_cvtmax; scalar_t__ cl_cvtmin; scalar_t__ cl_vtoff; scalar_t__ cl_vtadj; scalar_t__ cl_vt; scalar_t__ cl_e; scalar_t__ cl_d; scalar_t__ cl_cumul; scalar_t__ cl_total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct hfsc_class *VAR_4)
{
 VAR_4->cl_total = 0;
 VAR_4->cl_cumul = 0;
 VAR_4->cl_d = 0;
 VAR_4->cl_e = 0;
 VAR_4->cl_vt = 0;
 VAR_4->cl_vtadj = 0;
 VAR_4->cl_vtoff = 0;
 VAR_4->cl_cvtmin = 0;
 VAR_4->cl_cvtmax = 0;
 VAR_4->cl_cvtoff = 0;
 VAR_4->cl_pcvtoff = 0;
 VAR_4->cl_vtperiod = 0;
 VAR_4->cl_parentperiod = 0;
 VAR_4->cl_f = 0;
 VAR_4->cl_myf = 0;
 VAR_4->cl_myfadj = 0;
 VAR_4->cl_cfmin = 0;
 VAR_4->cl_nactive = 0;

 VAR_4->vt_tree = VAR_3;
 VAR_4->cf_tree = VAR_3;
 FUNC_0(VAR_4->qdisc);

 if (VAR_4->cl_flags & VAR_1)
  FUNC_1(&VAR_4->cl_deadline, &VAR_4->cl_rsc, 0, 0);
 if (VAR_4->cl_flags & VAR_0)
  FUNC_1(&VAR_4->cl_virtual, &VAR_4->cl_fsc, 0, 0);
 if (VAR_4->cl_flags & VAR_2)
  FUNC_1(&VAR_4->cl_ulimit, &VAR_4->cl_usc, 0, 0);
}

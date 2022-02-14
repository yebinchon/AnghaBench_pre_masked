
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_textbuf_t ;
struct TYPE_6__ {char* indicator; char* state; char* reqtag; char* abort_reqtag; char* abort_in_progress; char* type; char* xbusy; char* def_sgl_count; char* n_sge; int * ovfl_io; int * ovfl_sgl; int wqe_link; TYPE_1__* wq; int ref; } ;
typedef TYPE_2__ ocs_hw_io_t ;
struct TYPE_5__ {int instance; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*,...) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ocs_textbuf_t *VAR_0, ocs_hw_io_t *VAR_1)
{
 FUNC_0(VAR_1);

 FUNC_2(VAR_0, "hw_io", VAR_1->indicator);

 FUNC_3(VAR_0, "state", "%d", VAR_1->state);
 FUNC_3(VAR_0, "xri", "0x%x", VAR_1->indicator);
 FUNC_3(VAR_0, "tag", "0x%x", VAR_1->reqtag);
 FUNC_3(VAR_0, "abort_reqtag", "0x%x", VAR_1->abort_reqtag);
 FUNC_3(VAR_0, "ref_count", "%d", FUNC_5(&VAR_1->ref));


 FUNC_3(VAR_0, "abort", "0x%x", VAR_1->abort_in_progress);
 FUNC_3(VAR_0, "wq_index", "%d", (VAR_1->wq == ((void*)0) ? 0xffff : VAR_1->wq->instance));
 FUNC_3(VAR_0, "type", "%d", VAR_1->type);
 FUNC_3(VAR_0, "xbusy", "%d", VAR_1->xbusy);
 FUNC_3(VAR_0, "active_wqe_link", "%d", FUNC_4(&VAR_1->wqe_link));
 FUNC_3(VAR_0, "def_sgl_count", "%d", VAR_1->def_sgl_count);
 FUNC_3(VAR_0, "n_sge", "%d", VAR_1->n_sge);
 FUNC_3(VAR_0, "has_ovfl_sgl", "%s", (VAR_1->ovfl_sgl != ((void*)0) ? "TRUE" : "FALSE"));
 FUNC_3(VAR_0, "has_ovfl_io", "%s", (VAR_1->ovfl_io != ((void*)0) ? "TRUE" : "FALSE"));

 FUNC_1(VAR_0, "hw_io", VAR_1->indicator);
}

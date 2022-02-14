
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sli4_sge_t ;
struct TYPE_11__ {int segment_length; scalar_t__ last; int sge_type; int buffer_address_low; int buffer_address_high; } ;
typedef TYPE_2__ sli4_lsp_sge_t ;
struct TYPE_12__ {int sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_13__ {int def_sgl_count; int n_sge; int ovfl_sgl_count; int sgl_count; TYPE_1__* ovfl_sgl; TYPE_1__* sgl; TYPE_2__* ovfl_lsp; TYPE_8__* ovfl_io; } ;
typedef TYPE_4__ ocs_hw_io_t ;
struct TYPE_10__ {int phys; scalar_t__ virt; } ;
struct TYPE_14__ {int indicator; int def_sgl_count; TYPE_1__ def_sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_7(ocs_hw_t *VAR_5, ocs_hw_io_t *VAR_6)
{
 sli4_lsp_sge_t *VAR_7;


 if (VAR_6->sgl == VAR_6->ovfl_sgl) {
  return VAR_0;
 }







 if (FUNC_5(&VAR_5->sli) &&
     VAR_6->def_sgl_count > 4 &&
     VAR_6->ovfl_io == ((void*)0) &&
     ((VAR_2 == FUNC_4(&VAR_5->sli)) ||
  (VAR_3 == FUNC_4(&VAR_5->sli)))) {
  VAR_6->ovfl_io = FUNC_2(VAR_5);
  if (VAR_6->ovfl_io != ((void*)0)) {





   VAR_6->ovfl_sgl = &VAR_6->ovfl_io->def_sgl;
   VAR_6->ovfl_sgl_count = VAR_6->ovfl_io->def_sgl_count;
  }
 }


 if (VAR_6->ovfl_io == ((void*)0) || VAR_6->ovfl_sgl == ((void*)0)) {
  return VAR_0;
 }






 ((sli4_sge_t*)VAR_6->ovfl_sgl->virt)[0] = ((sli4_sge_t*)VAR_6->sgl->virt)[VAR_6->n_sge - 1];

 VAR_7 = &((sli4_lsp_sge_t*)VAR_6->sgl->virt)[VAR_6->n_sge - 1];
 FUNC_3(VAR_7, 0, sizeof(*VAR_7));

 if ((VAR_2 == FUNC_4(&VAR_5->sli)) ||
     (VAR_3 == FUNC_4(&VAR_5->sli))) {
  FUNC_6(&VAR_5->sli,
     (sli4_sge_t*)VAR_7,
     VAR_6->ovfl_io->indicator,
     0,
     0);
 } else {
  VAR_7->buffer_address_high = FUNC_0(VAR_6->ovfl_sgl->phys);
  VAR_7->buffer_address_low = FUNC_1(VAR_6->ovfl_sgl->phys);
  VAR_7->sge_type = VAR_4;
  VAR_7->last = 0;
  VAR_6->ovfl_lsp = VAR_7;
  VAR_6->ovfl_lsp->segment_length = sizeof(sli4_sge_t);
 }


 VAR_6->sgl = VAR_6->ovfl_sgl;
 VAR_6->sgl_count = VAR_6->ovfl_sgl_count;
 VAR_6->n_sge = 1;

 return VAR_1;
}

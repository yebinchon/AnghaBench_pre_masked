
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int last; int data_offset; int buffer_length; int buffer_address_low; int buffer_address_high; int sge_type; } ;
typedef TYPE_3__ sli4_sge_t ;
struct TYPE_14__ {int sli; int * os; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_15__ {scalar_t__ n_sge; scalar_t__ sgl_count; scalar_t__ first_data_sge; TYPE_2__* ovfl_lsp; int sge_offset; TYPE_1__* sgl; } ;
typedef TYPE_5__ ocs_hw_io_t ;
struct TYPE_12__ {int segment_length; } ;
struct TYPE_11__ {TYPE_3__* virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int *,char*,TYPE_4__*,...) ;
 int FUNC_4 (int *) ;

ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_5, ocs_hw_io_t *VAR_6, uintptr_t VAR_7, uint32_t VAR_8)
{
 sli4_sge_t *VAR_9 = ((void*)0);

 if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8) {
  FUNC_3(VAR_5 ? VAR_5->os : ((void*)0),
       "bad parameter hw=%p io=%p addr=%lx length=%u\n",
       VAR_5, VAR_6, VAR_7, VAR_8);
  return VAR_1;
 }

 if ((VAR_8 != 0) && (VAR_6->n_sge + 1) > VAR_6->sgl_count) {
  if (FUNC_2(VAR_5, VAR_6) != VAR_2) {
   FUNC_3(VAR_5->os, "SGL full (%d)\n", VAR_6->n_sge);
   return VAR_1;
  }
 }

 if (VAR_8 > FUNC_4(&VAR_5->sli)) {
  FUNC_3(VAR_5->os, "length of SGE %d bigger than allowed %d\n",
       VAR_8, FUNC_4(&VAR_5->sli));
  return VAR_1;
 }

 VAR_9 = VAR_6->sgl->virt;
 VAR_9 += VAR_6->n_sge;

 VAR_9->sge_type = VAR_3;
 VAR_9->buffer_address_high = FUNC_0(VAR_7);
 VAR_9->buffer_address_low = FUNC_1(VAR_7);
 VAR_9->buffer_length = VAR_8;
 VAR_9->data_offset = VAR_6->sge_offset;





 VAR_9->last = VAR_4;
 if (VAR_6->n_sge) {
  VAR_9[-1].last = VAR_0;
 }


 if (VAR_6->first_data_sge == 0) {
  VAR_6->first_data_sge = VAR_6->n_sge;
 }

 VAR_6->sge_offset += VAR_8;
 VAR_6->n_sge++;


 if (VAR_6->ovfl_lsp != ((void*)0)) {
  VAR_6->ovfl_lsp->segment_length = VAR_6->n_sge * sizeof(sli4_sge_t);
 }

 return VAR_2;
}

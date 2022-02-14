
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int last; int buffer_address_low; int buffer_address_high; int sge_type; } ;
typedef TYPE_4__ sli4_dif_sge_t ;
struct TYPE_13__ {scalar_t__ if_type; } ;
struct TYPE_11__ {scalar_t__ n_sgl; } ;
struct TYPE_15__ {TYPE_3__ sli; int * os; TYPE_1__ config; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
struct TYPE_16__ {scalar_t__ n_sge; scalar_t__ type; TYPE_2__* sgl; } ;
typedef TYPE_6__ ocs_hw_io_t ;
struct TYPE_12__ {TYPE_4__* virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (uintptr_t) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (int *,char*,scalar_t__,...) ;

ocs_hw_rtn_e
FUNC_4(ocs_hw_t *VAR_9, ocs_hw_io_t *VAR_10, uintptr_t VAR_11)
{
 sli4_dif_sge_t *VAR_12 = ((void*)0);

 if (!VAR_9 || !VAR_10 || !VAR_11) {
  FUNC_3(VAR_9 ? VAR_9->os : ((void*)0),
       "bad parameter hw=%p io=%p addr=%lx\n",
       VAR_9, VAR_10, VAR_11);
  return VAR_3;
 }

 if ((VAR_10->n_sge + 1) > VAR_9->config.n_sgl) {
  if (FUNC_2(VAR_9, VAR_10) != VAR_3) {
   FUNC_3(VAR_9->os, "SGL full (%d)\n", VAR_10->n_sge);
   return VAR_3;
  }
 }

 VAR_12 = VAR_10->sgl->virt;
 VAR_12 += VAR_10->n_sge;

 VAR_12->sge_type = VAR_6;

 if (((VAR_10->type == VAR_2) || (VAR_10->type == VAR_1)) &&
  (VAR_5 != VAR_9->sli.if_type)) {
  VAR_12->sge_type = VAR_7;
 }

 VAR_12->buffer_address_high = FUNC_0(VAR_11);
 VAR_12->buffer_address_low = FUNC_1(VAR_11);






 VAR_12->last = VAR_8;
 if (VAR_10->n_sge) {
  VAR_12[-1].last = VAR_0;
 }

 VAR_10->n_sge++;

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {void* last; void* sge_type; int buffer_length; int buffer_address_low; int buffer_address_high; } ;
typedef TYPE_3__ sli4_sge_t ;
struct TYPE_12__ {int * os; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_io_type_e ;
struct TYPE_10__ {int size; int phys; } ;
struct TYPE_9__ {TYPE_3__* virt; } ;
struct TYPE_13__ {int n_sge; int type; TYPE_2__ xfer_rdy; TYPE_1__* sgl; scalar_t__ sge_offset; scalar_t__ first_data_sge; int def_sgl_count; int sgl_count; TYPE_1__ def_sgl; } ;
typedef TYPE_5__ ocs_hw_io_t ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

ocs_hw_rtn_e
FUNC_4(ocs_hw_t *VAR_7, ocs_hw_io_t *VAR_8, ocs_hw_io_type_e VAR_9)
{
 sli4_sge_t *VAR_10 = ((void*)0);
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;

 if (!VAR_7 || !VAR_8) {
  FUNC_2(VAR_7 ? VAR_7->os : ((void*)0), "bad parameter hw=%p io=%p\n",
       VAR_7, VAR_8);
  return VAR_0;
 }


 VAR_8->sgl = &VAR_8->def_sgl;
 VAR_8->sgl_count = VAR_8->def_sgl_count;
 VAR_8->first_data_sge = 0;

 FUNC_3(VAR_8->sgl->virt, 0, 2 * sizeof(sli4_sge_t));
 VAR_8->n_sge = 0;
 VAR_8->sge_offset = 0;

 VAR_8->type = VAR_9;

 VAR_10 = VAR_8->sgl->virt;





 switch (VAR_9) {
 case 132:
 case 131:
 case 133:





  VAR_10->sge_type = VAR_4;
  VAR_10++;


  VAR_10->sge_type = VAR_4;

  if (133 == VAR_9) {
   VAR_10->last = VAR_6;
  }
  VAR_10++;

  VAR_8->n_sge = 2;
  break;
 case 128:

  VAR_12 = 2;


  VAR_10->sge_type = VAR_4;
  VAR_10->buffer_address_high = FUNC_0(VAR_8->xfer_rdy.phys);
  VAR_10->buffer_address_low = FUNC_1(VAR_8->xfer_rdy.phys);
  VAR_10->buffer_length = VAR_8->xfer_rdy.size;
  VAR_10++;

  VAR_12--;

  VAR_8->n_sge = 1;
  break;
 case 130:




  VAR_12 = 2;
  break;
 case 129:



  break;
 default:
  FUNC_2(VAR_7->os, "unsupported IO type %#x\n", VAR_9);
  return VAR_0;
 }




 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10->sge_type = VAR_5;
  VAR_10++;
 }

 VAR_8->n_sge += VAR_12;




 VAR_10->last = VAR_6;

 return VAR_1;
}

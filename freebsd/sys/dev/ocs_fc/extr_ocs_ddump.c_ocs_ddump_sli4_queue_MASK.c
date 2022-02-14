
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ is_mq; scalar_t__ is_hdr; scalar_t__ rq_batch; } ;
struct TYPE_11__ {scalar_t__ r_idx; TYPE_1__ flag; } ;
struct TYPE_10__ {scalar_t__ virt; scalar_t__ phys; } ;
struct TYPE_12__ {scalar_t__ index; scalar_t__ size; scalar_t__ length; scalar_t__ n_posted; scalar_t__ id; scalar_t__ type; scalar_t__ proc_limit; scalar_t__ posted_limit; scalar_t__ max_num_processed; TYPE_3__ u; TYPE_2__ dma; scalar_t__ max_process_time; } ;
typedef TYPE_4__ sli4_queue_t ;
typedef int ocs_textbuf_t ;
struct TYPE_13__ {scalar_t__ hw_rq_count; TYPE_6__** hw_rq; } ;
typedef TYPE_5__ ocs_hw_t ;
struct TYPE_14__ {scalar_t__ entry_count; int ** rq_tracker; } ;
typedef TYPE_6__ hw_rq_t ;






 int FUNC_0 (int *,char const*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 int FUNC_3 (int *,char*,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(ocs_textbuf_t *VAR_0, const char *VAR_1, ocs_hw_t *VAR_2, sli4_queue_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 ++, VAR_3 ++) {
  FUNC_2(VAR_0, VAR_1, VAR_6);
  FUNC_3(VAR_0, "index", "%d", VAR_3->index);
  FUNC_3(VAR_0, "size", "%d", VAR_3->size);
  FUNC_3(VAR_0, "length", "%d", VAR_3->length);
  FUNC_3(VAR_0, "n_posted", "%d", VAR_3->n_posted);
  FUNC_3(VAR_0, "id", "%d", VAR_3->id);
  FUNC_3(VAR_0, "type", "%d", VAR_3->type);
  FUNC_3(VAR_0, "proc_limit", "%d", VAR_3->proc_limit);
  FUNC_3(VAR_0, "posted_limit", "%d", VAR_3->posted_limit);
  FUNC_3(VAR_0, "max_num_processed", "%d", VAR_3->max_num_processed);
  FUNC_3(VAR_0, "max_process_time", "%ld", (unsigned long)VAR_3->max_process_time);
  FUNC_3(VAR_0, "virt_addr", "%p", VAR_3->dma.virt);
  FUNC_3(VAR_0, "phys_addr", "%lx", (unsigned long)VAR_3->dma.phys);


  switch (VAR_3->type) {
  case 130:
   FUNC_3(VAR_0, "r_idx", "%d", VAR_3->u.r_idx);
   break;
  case 131:
   FUNC_3(VAR_0, "is_mq", "%d", VAR_3->u.flag.is_mq);
   break;
  case 128:
   break;
  case 129: {
   uint32_t VAR_7;
   uint32_t VAR_8;
   uint32_t VAR_9 = 0;
   hw_rq_t *VAR_10;

   FUNC_3(VAR_0, "is_hdr", "%d", VAR_3->u.flag.is_hdr);
   FUNC_3(VAR_0, "rq_batch", "%d", VAR_3->u.flag.rq_batch);


   for (VAR_7 = 0; VAR_7 < VAR_2->hw_rq_count; VAR_7++) {
    VAR_10 = VAR_2->hw_rq[VAR_7];
    for (VAR_8 = 0; VAR_8 < VAR_10->entry_count; VAR_8++) {
     if (VAR_10->rq_tracker[VAR_8] != ((void*)0)) {
      VAR_9++;
     }
    }
   }
   FUNC_3(VAR_0, "rqes_produced", "%d", VAR_9);
   break;
  }
  }
  FUNC_1(VAR_0, VAR_3->dma.virt, VAR_3->size, VAR_3->length,
     ((VAR_3->type == 130) ? VAR_3->u.r_idx : VAR_3->index),
     VAR_5);
  FUNC_0(VAR_0, VAR_1, VAR_6);
 }
}

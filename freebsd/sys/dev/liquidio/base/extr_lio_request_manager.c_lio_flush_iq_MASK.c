
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ (* update_iq_read_idx ) (struct lio_instr_queue*) ;} ;
struct octeon_device {TYPE_1__ fn_list; } ;
struct TYPE_4__ {int instr_processed; } ;
struct lio_instr_queue {scalar_t__ octeon_read_index; scalar_t__ flush_index; int iq_flush_running_lock; int lock; int last_db_time; TYPE_2__ stats; int instr_pending; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct octeon_device*,struct lio_instr_queue*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct lio_instr_queue*) ;
 int VAR_0 ;

int
FUNC_6(struct octeon_device *VAR_1, struct lio_instr_queue *VAR_2,
      uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;
 uint32_t VAR_5 = 0;
 int VAR_6 = 1;

 if (!FUNC_3(&VAR_2->iq_flush_running_lock))
  return (VAR_6);

 FUNC_2(&VAR_2->lock);

 VAR_2->octeon_read_index = VAR_1->fn_list.update_iq_read_idx(VAR_2);

 do {

  if (VAR_2->flush_index == VAR_2->octeon_read_index)
   break;

  if (VAR_3)
   VAR_4 =
    FUNC_1(VAR_1, VAR_2,
           VAR_3 -
           VAR_5);
  else
   VAR_4 =
    FUNC_1(VAR_1, VAR_2, 0);

  if (VAR_4) {
   FUNC_0(&VAR_2->instr_pending, VAR_4);
   VAR_2->stats.instr_processed += VAR_4;
  }
  VAR_5 += VAR_4;
  VAR_4 = 0;

 } while (VAR_5 < VAR_3);

 if (VAR_3 && (VAR_5 >= VAR_3))
  VAR_6 = 0;

 VAR_2->last_db_time = VAR_0;

 FUNC_4(&VAR_2->lock);

 FUNC_4(&VAR_2->iq_flush_running_lock);

 return (VAR_6);
}

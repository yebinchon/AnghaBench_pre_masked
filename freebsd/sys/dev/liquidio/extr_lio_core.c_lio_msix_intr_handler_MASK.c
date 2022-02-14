
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int * ifp; } ;
struct TYPE_3__ {int (* msix_interrupt_handler ) (struct lio_ioq_vector*) ;} ;
struct octeon_device {TYPE_2__ props; int tx_budget; int rx_budget; struct lio_instr_queue** instr_queue; TYPE_1__ fn_list; struct lio_droq** droq; } ;
struct lio_ioq_vector {size_t droq_index; struct octeon_device* oct_dev; } ;
struct lio_instr_queue {int enq_lock; int * br; int instr_pending; } ;
struct lio_droq {size_t q_no; int droq_task; int droq_taskqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct octeon_device*,struct lio_droq*,int ) ;
 int FUNC_3 (struct lio_droq*,struct lio_instr_queue*) ;
 int FUNC_4 (struct octeon_device*,struct lio_instr_queue*,int ) ;
 int FUNC_5 (int *,struct lio_instr_queue*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct lio_ioq_vector*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2)
{
 struct lio_ioq_vector *VAR_3 = (struct lio_ioq_vector *)VAR_2;
 struct octeon_device *VAR_4 = VAR_3->oct_dev;
 struct lio_droq *VAR_5 = VAR_4->droq[VAR_3->droq_index];
 uint64_t VAR_6;

 VAR_6 = VAR_4->fn_list.msix_interrupt_handler(VAR_3);

 if ((VAR_6 & VAR_1) || (VAR_6 & VAR_0)) {
  struct lio_instr_queue *VAR_7 = VAR_4->instr_queue[VAR_5->q_no];
  int VAR_8, VAR_9 = 1;

  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_4->rx_budget);

  if (FUNC_0(&VAR_7->instr_pending))
   VAR_9 = FUNC_4(VAR_4, VAR_7, VAR_4->tx_budget);

  if ((VAR_4->props.ifp != ((void*)0)) && (VAR_7->br != ((void*)0))) {
   if (FUNC_6(&VAR_7->enq_lock)) {
    if (!FUNC_1(VAR_4->props.ifp, VAR_7->br))
     FUNC_5(VAR_4->props.ifp,
           VAR_7);
    FUNC_7(&VAR_7->enq_lock);
   }
  }

  if (VAR_8 || !VAR_9)
   FUNC_9(VAR_5->droq_taskqueue, &VAR_5->droq_task);
  else
   FUNC_3(VAR_5, VAR_7);
 }
}

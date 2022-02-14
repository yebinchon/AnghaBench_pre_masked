
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_8__ {int completed_cmd; } ;
struct TYPE_7__ {int head; } ;
struct TYPE_6__ {int head; int phase; struct ena_admin_acq_entry* entries; } ;
struct ena_com_admin_queue {int q_depth; TYPE_4__ stats; TYPE_3__ sq; TYPE_2__ cq; } ;
struct TYPE_5__ {int flags; } ;
struct ena_admin_acq_entry {TYPE_1__ acq_common_descriptor; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ena_com_admin_queue*,struct ena_admin_acq_entry*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ena_com_admin_queue *VAR_1)
{
 struct ena_admin_acq_entry *VAR_2 = ((void*)0);
 u16 VAR_3 = 0;
 u16 VAR_4;
 u8 VAR_5;

 VAR_4 = VAR_1->cq.head & (VAR_1->q_depth - 1);
 VAR_5 = VAR_1->cq.phase;

 VAR_2 = &VAR_1->cq.entries[VAR_4];


 while ((FUNC_0(VAR_2->acq_common_descriptor.flags) &
   VAR_0) == VAR_5) {



  FUNC_1();
  FUNC_2(VAR_1, VAR_2);

  VAR_4++;
  VAR_3++;
  if (FUNC_3(VAR_4 == VAR_1->q_depth)) {
   VAR_4 = 0;
   VAR_5 = !VAR_5;
  }

  VAR_2 = &VAR_1->cq.entries[VAR_4];
 }

 VAR_1->cq.head += VAR_3;
 VAR_1->cq.phase = VAR_5;
 VAR_1->sq.head += VAR_3;
 VAR_1->stats.completed_cmd += VAR_3;
}

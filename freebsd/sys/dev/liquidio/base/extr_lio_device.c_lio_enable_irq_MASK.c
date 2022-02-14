
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_instr_queue {int inst_cnt_reg; int lock; scalar_t__ pkt_in_done; struct octeon_device* oct_dev; } ;
struct lio_droq {int pkts_sent_reg; int lock; scalar_t__ pkt_count; int pkts_pending; struct octeon_device* oct_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int ,scalar_t__) ;
 int FUNC_5 (struct octeon_device*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct lio_droq *VAR_1, struct lio_instr_queue *VAR_2)
{
 struct octeon_device *VAR_3 = ((void*)0);
 uint64_t VAR_4;
 uint32_t VAR_5;


 if (VAR_1 != ((void*)0)) {
  VAR_3 = VAR_1->oct_dev;
  VAR_5 = FUNC_2(&VAR_1->pkts_pending);
  FUNC_6(&VAR_1->lock);
  FUNC_4(VAR_3, VAR_1->pkts_sent_reg,
    VAR_1->pkt_count - VAR_5);
  VAR_1->pkt_count = VAR_5;

  FUNC_1();
  FUNC_7(&VAR_1->lock);
 }

 if (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->oct_dev;
  FUNC_6(&VAR_2->lock);
  FUNC_4(VAR_3, VAR_2->inst_cnt_reg, VAR_2->pkt_in_done);
  VAR_2->pkt_in_done = 0;

  FUNC_1();
  FUNC_7(&VAR_2->lock);
 }
 if ((VAR_3 != ((void*)0)) && (FUNC_0(VAR_3))) {
  if (VAR_1 != ((void*)0))
   FUNC_5(VAR_3, VAR_1->pkts_sent_reg,
     VAR_0);


  else if (VAR_2 != ((void*)0)) {
   VAR_4 = FUNC_3(VAR_3, VAR_2->inst_cnt_reg);
   FUNC_5(VAR_3, VAR_2->inst_cnt_reg,
     ((VAR_4 & 0xFFFFFFFF00000000ULL) |
      VAR_0));
  }
 }
}

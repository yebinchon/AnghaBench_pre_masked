
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int status; } ;
struct lio_instr_queue {int last_db_time; scalar_t__ fill_cnt; int doorbell_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct octeon_device*,int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_3(struct octeon_device *VAR_2, struct lio_instr_queue *VAR_3)
{

 if (FUNC_1(&VAR_2->status) == VAR_0) {
  FUNC_2(VAR_2, VAR_3->doorbell_reg, VAR_3->fill_cnt);

  FUNC_0();
  VAR_3->fill_cnt = 0;
  VAR_3->last_db_time = VAR_1;
  return;
 }
}

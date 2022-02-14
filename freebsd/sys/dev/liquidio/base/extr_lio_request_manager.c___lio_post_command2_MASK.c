
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lio_iq_post_status {int index; int status; } ;
struct lio_instr_queue {int max_count; int host_write_index; int instr_pending; int fill_cnt; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lio_instr_queue*,int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 () ;

__attribute__((used)) static inline struct lio_iq_post_status
FUNC_5(struct lio_instr_queue *VAR_3, uint8_t *VAR_4)
{
 struct lio_iq_post_status VAR_5;

 VAR_5.status = VAR_1;





 if (FUNC_2(&VAR_3->instr_pending) >=
     (int32_t)(VAR_3->max_count - 1)) {
  VAR_5.status = VAR_0;
  VAR_5.index = -1;
  return (VAR_5);
 }

 if (FUNC_2(&VAR_3->instr_pending) >=
     (int32_t)(VAR_3->max_count - 2))
  VAR_5.status = VAR_2;

 FUNC_0(VAR_3, VAR_4);


 VAR_5.index = VAR_3->host_write_index;
 VAR_3->host_write_index = FUNC_3(VAR_3->host_write_index, 1,
           VAR_3->max_count);
 VAR_3->fill_cnt++;





 FUNC_4();

 FUNC_1(&VAR_3->instr_pending, 1);

 return (VAR_5);
}

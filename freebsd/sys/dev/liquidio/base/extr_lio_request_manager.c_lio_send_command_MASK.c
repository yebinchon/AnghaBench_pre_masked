
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct octeon_device {struct lio_instr_queue** instr_queue; } ;
struct lio_iq_post_status {scalar_t__ status; int index; } ;
struct lio_instr_queue {int post_lock; } ;


 int FUNC_0 (struct octeon_device*,size_t,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct lio_instr_queue*,int ,void*,size_t) ;
 struct lio_iq_post_status FUNC_2 (struct lio_instr_queue*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct octeon_device*,struct lio_instr_queue*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct octeon_device *VAR_5, uint32_t VAR_6,
   uint32_t VAR_7, void *VAR_8, void *VAR_9,
   uint32_t VAR_10, uint32_t VAR_11)
{
 struct lio_iq_post_status VAR_12;
 struct lio_instr_queue *VAR_13 = VAR_5->instr_queue[VAR_6];





 FUNC_4(&VAR_13->post_lock);

 VAR_12 = FUNC_2(VAR_13, VAR_8);

 if (VAR_12.status != VAR_0) {
  FUNC_1(VAR_13, VAR_12.index, VAR_9, VAR_11);
  FUNC_0(VAR_5, VAR_6, VAR_2, VAR_10);
  FUNC_0(VAR_5, VAR_6, VAR_4, 1);

  if (VAR_7 || (VAR_12.status == VAR_1))
   FUNC_3(VAR_5, VAR_13);
 } else {
  FUNC_0(VAR_5, VAR_6, VAR_3, 1);
 }

 FUNC_5(&VAR_13->post_lock);






 return (VAR_12.status);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_2__ {int * ifp; } ;
struct octeon_device {TYPE_1__ props; struct lio_instr_queue** instr_queue; } ;
struct lio_instr_queue {size_t last_db_time; int enq_lock; int * br; int db_timeout; int instr_pending; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (int *,struct lio_instr_queue*) ;
 int FUNC_4 (struct octeon_device*,struct lio_instr_queue*,int ) ;
 int FUNC_5 (int *,struct lio_instr_queue*) ;
 size_t FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_9(struct octeon_device *VAR_1, uint64_t VAR_2)
{
 struct lio_instr_queue *VAR_3;
 uint64_t VAR_4;

 if (VAR_1 == ((void*)0))
  return;

 VAR_3 = VAR_1->instr_queue[VAR_2];
 if (VAR_3 == ((void*)0))
  return;

 if (FUNC_0(&VAR_3->instr_pending)) {

  VAR_4 = VAR_3->last_db_time + FUNC_6(VAR_3->db_timeout);
  if (!FUNC_2(VAR_0, VAR_4))
   return;

  VAR_3->last_db_time = VAR_0;


  FUNC_4(VAR_1, VAR_3, 0);

  FUNC_3(((void*)0), VAR_3);
 }

 if (VAR_1->props.ifp != ((void*)0) && VAR_3->br != ((void*)0)) {
  if (FUNC_7(&VAR_3->enq_lock)) {
   if (!FUNC_1(VAR_1->props.ifp, VAR_3->br))
    FUNC_5(VAR_1->props.ifp, VAR_3);

   FUNC_8(&VAR_3->enq_lock);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct qfq_sched {unsigned long V; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct qfq_sched*,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qfq_sched *VAR_5, u64 VAR_6)
{
 unsigned long VAR_7 = VAR_5->V >> VAR_4;
 unsigned long VAR_8 = VAR_6 >> VAR_4;

 if (VAR_7 != VAR_8) {
  unsigned long VAR_9 = (1UL << FUNC_0(VAR_7 ^ VAR_8)) - 1;
  FUNC_1(VAR_5, VAR_9, VAR_3, VAR_1);
  FUNC_1(VAR_5, VAR_9, VAR_2, VAR_0);
 }
}

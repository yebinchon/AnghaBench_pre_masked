
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qfq_sched {unsigned long* bitmaps; int V; } ;
struct qfq_group {int S; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct qfq_group* FUNC_0 (struct qfq_sched*,unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qfq_sched*,int ) ;

__attribute__((used)) static void FUNC_3(struct qfq_sched *VAR_3, u64 VAR_4)
{
 struct qfq_group *VAR_5;
 unsigned long VAR_6;

 VAR_6 = VAR_3->bitmaps[VAR_2] | VAR_3->bitmaps[VAR_1];
 if (VAR_6) {
  if (!VAR_3->bitmaps[VAR_0]) {
   VAR_5 = FUNC_0(VAR_3, VAR_6);
   if (FUNC_1(VAR_5->S, VAR_3->V))
    VAR_3->V = VAR_5->S;
  }
  FUNC_2(VAR_3, VAR_4);
 }
}

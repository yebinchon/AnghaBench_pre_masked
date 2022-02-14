
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qfq_group {scalar_t__ S; int slot_shift; } ;
struct qfq_class {scalar_t__ inv_w; scalar_t__ S; scalar_t__ F; int qdisc; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct qfq_group*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct qfq_group*,struct qfq_class*,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct qfq_group *VAR_0, struct qfq_class *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->qdisc);

 VAR_1->S = VAR_1->F;
 if (!VAR_2)
  FUNC_1(VAR_0);
 else {
  u64 VAR_3;

  VAR_1->F = VAR_1->S + (u64)VAR_2 * VAR_1->inv_w;
  VAR_3 = FUNC_2(VAR_1->S, VAR_0->slot_shift);
  if (VAR_3 == VAR_0->S)
   return 0;

  FUNC_1(VAR_0);
  FUNC_3(VAR_0, VAR_1, VAR_3);
 }

 return 1;
}

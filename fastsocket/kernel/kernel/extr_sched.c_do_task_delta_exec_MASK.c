
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ exec_start; } ;
struct task_struct {TYPE_1__ se; } ;
struct rq {scalar_t__ clock; } ;
typedef scalar_t__ s64 ;


 scalar_t__ FUNC_0 (struct rq*,struct task_struct*) ;
 int FUNC_1 (struct rq*) ;

__attribute__((used)) static u64 FUNC_2(struct task_struct *VAR_0, struct rq *VAR_1)
{
 u64 VAR_2 = 0;

 if (FUNC_0(VAR_1, VAR_0)) {
  FUNC_1(VAR_1);
  VAR_2 = VAR_1->clock - VAR_0->se.exec_start;
  if ((s64)VAR_2 < 0)
   VAR_2 = 0;
 }

 return VAR_2;
}

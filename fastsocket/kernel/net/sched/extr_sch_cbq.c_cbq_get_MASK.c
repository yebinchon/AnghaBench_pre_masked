
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cbq_sched_data {int dummy; } ;
struct cbq_class {int refcnt; } ;
struct Qdisc {int dummy; } ;


 struct cbq_class* FUNC_0 (struct cbq_sched_data*,int ) ;
 struct cbq_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_2(struct Qdisc *VAR_0, u32 VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_1(VAR_0);
 struct cbq_class *VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3) {
  VAR_3->refcnt++;
  return (unsigned long)VAR_3;
 }
 return 0;
}

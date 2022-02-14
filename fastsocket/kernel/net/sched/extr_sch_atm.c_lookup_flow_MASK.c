
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct atm_qdisc_data {struct atm_flow_data* flows; } ;
struct atm_flow_data {scalar_t__ classid; struct atm_flow_data* next; } ;
struct Qdisc {int dummy; } ;


 struct atm_qdisc_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static inline struct atm_flow_data *FUNC_1(struct Qdisc *VAR_0, u32 VAR_1)
{
 struct atm_qdisc_data *VAR_2 = FUNC_0(VAR_0);
 struct atm_flow_data *VAR_3;

 for (VAR_3 = VAR_2->flows; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->classid == VAR_1)
   break;
 return VAR_3;
}

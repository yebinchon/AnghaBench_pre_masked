
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_ratespec {scalar_t__ rate; scalar_t__ cell_log; } ;
struct qdisc_rate_table {int refcnt; struct qdisc_rate_table* next; int data; struct tc_ratespec rate; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct qdisc_rate_table* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct tc_ratespec*,struct tc_ratespec*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 struct qdisc_rate_table* VAR_2 ;

struct qdisc_rate_table *FUNC_5(struct tc_ratespec *VAR_3, struct nlattr *VAR_4)
{
 struct qdisc_rate_table *VAR_5;

 for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
  if (FUNC_1(&VAR_5->rate, VAR_3, sizeof(struct tc_ratespec)) == 0) {
   VAR_5->refcnt++;
   return VAR_5;
  }
 }

 if (VAR_4 == ((void*)0) || VAR_3->rate == 0 || VAR_3->cell_log == 0 ||
     FUNC_4(VAR_4) != VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (VAR_5) {
  VAR_5->rate = *VAR_3;
  VAR_5->refcnt = 1;
  FUNC_2(VAR_5->data, FUNC_3(VAR_4), 1024);
  VAR_5->next = VAR_2;
  VAR_2 = VAR_5;
 }
 return VAR_5;
}

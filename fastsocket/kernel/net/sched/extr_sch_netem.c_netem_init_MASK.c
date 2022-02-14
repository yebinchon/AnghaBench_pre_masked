
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netem_sched_data {int qdisc; int watchdog; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct Qdisc*) ;
 struct netem_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int *,struct Qdisc*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_3, struct nlattr *VAR_4)
{
 struct netem_sched_data *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;

 FUNC_7(&VAR_5->watchdog, VAR_3);

 VAR_5->qdisc = FUNC_3(FUNC_5(VAR_3), VAR_3->dev_queue,
         &VAR_2,
         FUNC_0(VAR_3->handle, 1));
 if (!VAR_5->qdisc) {
  FUNC_2("netem: qdisc create failed\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_2("netem: change failed\n");
  FUNC_4(VAR_5->qdisc);
 }
 return VAR_6;
}

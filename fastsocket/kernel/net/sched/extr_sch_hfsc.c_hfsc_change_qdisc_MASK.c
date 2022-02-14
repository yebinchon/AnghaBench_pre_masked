
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_hfsc_qopt {int defcls; } ;
struct nlattr {int dummy; } ;
struct hfsc_sched {int defcls; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 struct tc_hfsc_qopt* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 struct hfsc_sched* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_5(struct Qdisc *VAR_1, struct nlattr *VAR_2)
{
 struct hfsc_sched *VAR_3 = FUNC_2(VAR_1);
 struct tc_hfsc_qopt *VAR_4;

 if (VAR_2 == ((void*)0) || FUNC_1(VAR_2) < sizeof(*VAR_4))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_2);

 FUNC_3(VAR_1);
 VAR_3->defcls = VAR_4->defcls;
 FUNC_4(VAR_1);

 return 0;
}

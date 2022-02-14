
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {scalar_t__ refcnt; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct Qdisc*,struct hfsc_class*) ;

__attribute__((used)) static void
FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct hfsc_class *VAR_2 = (struct hfsc_class *)VAR_1;

 if (--VAR_2->refcnt == 0)
  FUNC_0(VAR_0, VAR_2);
}

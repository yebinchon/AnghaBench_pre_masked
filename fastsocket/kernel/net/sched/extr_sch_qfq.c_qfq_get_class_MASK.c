
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qfq_class {int refcnt; } ;
struct Qdisc {int dummy; } ;


 struct qfq_class* FUNC_0 (struct Qdisc*,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct Qdisc *VAR_0, u32 VAR_1)
{
 struct qfq_class *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 != ((void*)0))
  VAR_2->refcnt++;

 return (unsigned long)VAR_2;
}

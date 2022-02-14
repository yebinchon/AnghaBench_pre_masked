
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfsc_class {int refcnt; } ;
struct Qdisc {int dummy; } ;


 struct hfsc_class* FUNC_0 (int ,struct Qdisc*) ;

__attribute__((used)) static unsigned long
FUNC_1(struct Qdisc *VAR_0, u32 VAR_1)
{
 struct hfsc_class *VAR_2 = FUNC_0(VAR_1, VAR_0);

 if (VAR_2 != ((void*)0))
  VAR_2->refcnt++;

 return (unsigned long)VAR_2;
}

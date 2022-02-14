
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct Qdisc {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*,struct Qdisc*,int ,int ) ;
 int FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_3(struct Qdisc *VAR_0, u32 VAR_1)
{
 FUNC_1("dsmark_get(sch %p,[qdisc %p],classid %x)\n",
  VAR_0, FUNC_2(VAR_0), VAR_1);

 return FUNC_0(VAR_1) + 1;
}

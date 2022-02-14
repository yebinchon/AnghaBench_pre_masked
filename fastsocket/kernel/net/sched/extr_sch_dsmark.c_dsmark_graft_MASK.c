
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsmark_qdisc_data {struct Qdisc* q; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; int handle; int dev_queue; } ;


 struct Qdisc VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct Qdisc*,struct dsmark_qdisc_data*,struct Qdisc*,struct Qdisc**) ;
 struct Qdisc* FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (struct Qdisc*) ;
 struct dsmark_qdisc_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*,int ) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_2, unsigned long VAR_3,
   struct Qdisc *VAR_4, struct Qdisc **VAR_5)
{
 struct dsmark_qdisc_data *VAR_6 = FUNC_3(VAR_2);

 FUNC_0("dsmark_graft(sch %p,[qdisc %p],new %p,old %p)\n",
  VAR_2, VAR_6, VAR_4, VAR_5);

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(FUNC_2(VAR_2), VAR_2->dev_queue,
     &VAR_1,
     VAR_2->handle);
  if (VAR_4 == ((void*)0))
   VAR_4 = &VAR_0;
 }

 FUNC_6(VAR_2);
 *VAR_5 = VAR_6->q;
 VAR_6->q = VAR_4;
 FUNC_5(*VAR_5, (*VAR_5)->q.qlen);
 FUNC_4(*VAR_5);
 FUNC_7(VAR_2);

 return 0;
}

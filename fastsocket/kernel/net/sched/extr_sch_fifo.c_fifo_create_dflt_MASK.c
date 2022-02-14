
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_ops {int dummy; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 struct Qdisc* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct Qdisc*,unsigned int) ;
 struct Qdisc* FUNC_3 (int ,int ,struct Qdisc_ops*,int ) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;

struct Qdisc *FUNC_6(struct Qdisc *VAR_1, struct Qdisc_ops *VAR_2,
          unsigned int VAR_3)
{
 struct Qdisc *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_3(FUNC_5(VAR_1), VAR_1->dev_queue,
         VAR_2, FUNC_1(VAR_1->handle, 1));
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  if (VAR_5 < 0) {
   FUNC_4(VAR_4);
   VAR_4 = ((void*)0);
  }
 }

 return VAR_4 ? : FUNC_0(VAR_5);
}

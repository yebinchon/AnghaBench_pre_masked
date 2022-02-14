
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct Qdisc* q; } ;
struct TYPE_7__ {TYPE_2__ leaf; } ;
struct TYPE_5__ {int classid; } ;
struct htb_class {TYPE_3__ un; TYPE_1__ common; scalar_t__ level; } ;
struct TYPE_8__ {int qlen; } ;
struct Qdisc {TYPE_4__ q; int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Qdisc* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,int ) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_3, unsigned long VAR_4, struct Qdisc *VAR_5,
       struct Qdisc **VAR_6)
{
 struct htb_class *VAR_7 = (struct htb_class *)VAR_4;

 if (VAR_7->level)
  return -VAR_0;
 if (VAR_5 == ((void*)0) &&
     (VAR_5 = FUNC_0(FUNC_1(VAR_3), VAR_3->dev_queue,
         &VAR_2,
         VAR_7->common.classid)) == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_3);
 *VAR_6 = VAR_7->un.leaf.q;
 VAR_7->un.leaf.q = VAR_5;
 if (*VAR_6 != ((void*)0)) {
  FUNC_3(*VAR_6, (*VAR_6)->q.qlen);
  FUNC_2(*VAR_6);
 }
 FUNC_5(VAR_3);
 return 0;
}

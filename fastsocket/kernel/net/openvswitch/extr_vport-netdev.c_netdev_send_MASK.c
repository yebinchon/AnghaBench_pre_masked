
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {int dummy; } ;
struct sk_buff {int len; TYPE_1__* dev; } ;
struct netdev_vport {TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; int name; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 () ;
 struct netdev_vport* FUNC_3 (struct vport*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,int ,int,int) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct vport *VAR_0, struct sk_buff *VAR_1)
{
 struct netdev_vport *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = VAR_2->dev->mtu;
 int VAR_4;

 if (FUNC_7(FUNC_4(VAR_1) > VAR_3 && !FUNC_6(VAR_1))) {
  if (FUNC_2())
   FUNC_5("%s: dropped over-mtu packet: %d > %d\n",
         VAR_2->dev->name,
         FUNC_4(VAR_1), VAR_3);
  goto drop;
 }

 VAR_1->dev = VAR_2->dev;
 VAR_4 = VAR_1->len;
 FUNC_0(VAR_1);

 return VAR_4;

drop:
 FUNC_1(VAR_1);
 return 0;
}

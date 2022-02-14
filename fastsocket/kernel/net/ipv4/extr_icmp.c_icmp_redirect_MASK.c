
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int dev; scalar_t__ data; } ;
struct iphdr {scalar_t__ protocol; int ihl; int saddr; int daddr; } ;
struct TYPE_4__ {int gateway; } ;
struct TYPE_6__ {int code; TYPE_1__ un; } ;
struct TYPE_5__ {int saddr; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_2)
{
 struct iphdr *VAR_3;

 if (VAR_2->len < sizeof(struct iphdr))
  goto out_err;




 if (!FUNC_6(VAR_2, sizeof(struct iphdr)))
  goto out;

 VAR_3 = (struct iphdr *)VAR_2->data;

 switch (FUNC_2(VAR_2)->code & 7) {
 case 129:
 case 128:



 case 131:
 case 130:
  FUNC_4(FUNC_3(VAR_2)->saddr, VAR_3->daddr,
          FUNC_2(VAR_2)->un.gateway,
          VAR_3->saddr, VAR_2->dev);
  break;
 }



 if (VAR_3->protocol == VAR_1 &&
     VAR_3->ihl >= 5 &&
     FUNC_6(VAR_2, (VAR_3->ihl<<2)+8)) {
  FUNC_5(VAR_2, FUNC_2(VAR_2)->un.gateway);
 }

out:
 return;
out_err:
 FUNC_0(FUNC_1(VAR_2->dev), VAR_0);
 goto out;
}

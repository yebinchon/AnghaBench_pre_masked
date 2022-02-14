
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_4__ {int payload_len; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,struct sk_buff*,int *,int ,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->len - sizeof(struct ipv6hdr);
 if (VAR_5 > VAR_0)
  VAR_5 = 0;
 FUNC_1(VAR_4)->payload_len = FUNC_0(VAR_5);

 return FUNC_2(VAR_2, VAR_1, VAR_4, ((void*)0), FUNC_3(VAR_4)->dev,
         VAR_3);
}

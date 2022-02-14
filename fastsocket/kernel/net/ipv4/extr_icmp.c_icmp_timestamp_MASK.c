
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct sk_buff {int len; } ;
struct icmphdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ code; int type; } ;
struct TYPE_4__ {TYPE_3__ icmph; int * times; } ;
struct icmp_bxm {int head_len; scalar_t__ data_len; scalar_t__ offset; struct sk_buff* skb; TYPE_1__ data; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct icmp_bxm*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int *,int) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_4)
{
 struct timespec VAR_5;
 struct icmp_bxm VAR_6;



 if (VAR_4->len < 4)
  goto out_err;




 FUNC_3(&VAR_5);
 VAR_6.data.times[1] = FUNC_4((VAR_5.tv_sec % 86400) * VAR_2 +
      VAR_5.tv_nsec / VAR_3);
 VAR_6.data.times[2] = VAR_6.data.times[1];
 if (FUNC_7(VAR_4, 0, &VAR_6.data.times[0], 4))
  FUNC_0();
 VAR_6.data.icmph = *FUNC_5(VAR_4);
 VAR_6.data.icmph.type = VAR_1;
 VAR_6.data.icmph.code = 0;
 VAR_6.skb = VAR_4;
 VAR_6.offset = 0;
 VAR_6.data_len = 0;
 VAR_6.head_len = sizeof(struct icmphdr) + 12;
 FUNC_6(&VAR_6, VAR_4);
out:
 return;
out_err:
 FUNC_1(FUNC_2(FUNC_8(VAR_4)->dev), VAR_0);
 goto out;
}

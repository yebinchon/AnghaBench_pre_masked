
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_zero; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sk_buff {scalar_t__ len; } ;
struct msghdr {int dummy; } ;
struct iphdr {int daddr; } ;
typedef int sin ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct msghdr*,int ,int ,int,struct sockaddr_in*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct msghdr *VAR_3, struct sk_buff *VAR_4)
{
 struct sockaddr_in VAR_5;
 struct iphdr *VAR_6 = FUNC_0(VAR_4);
 __be16 *VAR_7 = (__be16 *)FUNC_3(VAR_4);

 if (FUNC_4(VAR_4) + 4 > VAR_4->len)
  return;






 VAR_5.sin_family = VAR_0;
 VAR_5.sin_addr.s_addr = VAR_6->daddr;
 VAR_5.sin_port = VAR_7[1];
 FUNC_1(VAR_5.sin_zero, 0, sizeof(VAR_5.sin_zero));

 FUNC_2(VAR_3, VAR_2, VAR_1, sizeof(VAR_5), &VAR_5);
}

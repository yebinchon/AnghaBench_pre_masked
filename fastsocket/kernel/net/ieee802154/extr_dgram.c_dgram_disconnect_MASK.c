
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int hwaddr; int addr_type; } ;
struct dgram_sock {TYPE_1__ dst_addr; } ;


 int VAR_0 ;
 struct dgram_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, int VAR_2)
{
 struct dgram_sock *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 VAR_3->dst_addr.addr_type = VAR_0;
 FUNC_2(&VAR_3->dst_addr.hwaddr, 0xff, sizeof(VAR_3->dst_addr.hwaddr));

 FUNC_3(VAR_1);

 return 0;
}

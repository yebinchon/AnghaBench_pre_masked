
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int pan_id; int hwaddr; int addr_type; } ;
struct dgram_sock {int want_ack; TYPE_1__ dst_addr; } ;


 int VAR_0 ;
 struct dgram_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_1)
{
 struct dgram_sock *VAR_2 = FUNC_0(VAR_1);

 VAR_2->dst_addr.addr_type = VAR_0;
 VAR_2->dst_addr.pan_id = 0xffff;
 VAR_2->want_ack = 1;
 FUNC_1(&VAR_2->dst_addr.hwaddr, 0xff, sizeof(VAR_2->dst_addr.hwaddr));
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tcphdr {int dummy; } ;
struct TYPE_5__ {scalar_t__ proto; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_2__ ip; TYPE_1__ eth; } ;
struct sw_flow {int tcp_flags; int lock; int byte_count; int packet_count; int used; TYPE_3__ key; } ;
struct sk_buff {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct sw_flow *VAR_6, struct sk_buff *VAR_7)
{
 u8 VAR_8 = 0;

 if ((VAR_6->key.eth.type == FUNC_0(VAR_0) ||
      VAR_6->key.eth.type == FUNC_0(VAR_1)) &&
     VAR_6->key.ip.proto == VAR_2 &&
     FUNC_1(VAR_7->len >= FUNC_2(VAR_7) + sizeof(struct tcphdr))) {
  u8 *VAR_9 = (u8 *)FUNC_5(VAR_7);
  VAR_8 = *(VAR_9 + VAR_3) & VAR_4;
 }

 FUNC_3(&VAR_6->lock);
 VAR_6->used = VAR_5;
 VAR_6->packet_count++;
 VAR_6->byte_count += VAR_7->len;
 VAR_6->tcp_flags |= VAR_8;
 FUNC_4(&VAR_6->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef unsigned int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct sk_buff {unsigned int protocol; TYPE_2__* sk; int priority; } ;
struct netdev_qos_info {TYPE_1__* tc_to_txq; scalar_t__ num_tc; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {struct netdev_qos_info qos_data; } ;
struct TYPE_5__ {unsigned int sk_hash; } ;
struct TYPE_4__ {unsigned int offset; unsigned int count; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 TYPE_3__* FUNC_1 (struct net_device const*) ;
 size_t FUNC_2 (struct net_device const*,int ) ;
 unsigned int FUNC_3 (struct sk_buff const*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;
 scalar_t__ FUNC_5 (int) ;

u16 FUNC_6(const struct net_device *VAR_1, const struct sk_buff *VAR_2,
    unsigned int VAR_3)
{
 struct netdev_qos_info *VAR_4 = &FUNC_1(VAR_1)->qos_data;
 u32 VAR_5;
 u16 VAR_6 = 0;
 u16 VAR_7 = VAR_3;

 if (FUNC_4(VAR_2)) {
  VAR_5 = FUNC_3(VAR_2);
  while (FUNC_5(VAR_5 >= VAR_3))
   VAR_5 -= VAR_3;
  return VAR_5;
 }

 if (VAR_4->num_tc) {
  u8 VAR_8 = FUNC_2(VAR_1, VAR_2->priority);
  VAR_6 = VAR_4->tc_to_txq[VAR_8].offset;
  VAR_7 = VAR_4->tc_to_txq[VAR_8].count;
 }

 if (VAR_2->sk && VAR_2->sk->sk_hash)
  VAR_5 = VAR_2->sk->sk_hash;
 else
  VAR_5 = VAR_2->protocol;

 VAR_5 = FUNC_0(VAR_5, VAR_0);

 return (u16) (((u64) VAR_5 * VAR_7) >> 32) + VAR_6;
}

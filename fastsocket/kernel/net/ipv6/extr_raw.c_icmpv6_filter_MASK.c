
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int* data; } ;
struct raw6_sock {TYPE_1__ filter; } ;
struct icmp6hdr {int icmp6_type; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (struct sk_buff*,int) ;
 struct raw6_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static __inline__ int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct icmp6hdr *VAR_2;
 struct raw6_sock *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_1, sizeof(struct icmp6hdr))) {
  __u32 *VAR_4 = &VAR_3->filter.data[0];
  int VAR_5;

  VAR_2 = (struct icmp6hdr *) VAR_1->data;
  VAR_5 = VAR_2->icmp6_type;

  return (VAR_4[VAR_5 >> 5] & (1 << (VAR_5 & 31))) != 0;
 }
 return 0;
}

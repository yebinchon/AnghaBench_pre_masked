
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {TYPE_1__* sk_prot; } ;
struct ipv6_pinfo {int dummy; } ;
struct TYPE_2__ {int obj_size; } ;



__attribute__((used)) static __inline__ struct ipv6_pinfo *FUNC_0(struct sock *VAR_0)
{
 const int VAR_1 = VAR_0->sk_prot->obj_size - sizeof(struct ipv6_pinfo);

 return (struct ipv6_pinfo *)(((u8 *)VAR_0) + VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct rtable {int rt_src; } ;
struct dst_entry {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(union sctp_addr *VAR_1, struct dst_entry *VAR_2,
         __be16 VAR_3)
{
 struct rtable *VAR_4 = (struct rtable *)VAR_2;
 VAR_1->v4.sin_family = VAR_0;
 VAR_1->v4.sin_port = VAR_3;
 VAR_1->v4.sin_addr.s_addr = VAR_4->rt_src;
}

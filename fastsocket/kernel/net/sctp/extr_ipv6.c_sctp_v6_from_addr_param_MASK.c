
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
union sctp_addr_param {TYPE_1__ v6; } ;
struct TYPE_4__ {int sin6_scope_id; int sin6_addr; scalar_t__ sin6_flowinfo; int sin6_port; int sin6_family; } ;
union sctp_addr {TYPE_2__ v6; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(union sctp_addr *VAR_1,
        union sctp_addr_param *VAR_2,
        __be16 VAR_3, int VAR_4)
{
 VAR_1->v6.sin6_family = VAR_0;
 VAR_1->v6.sin6_port = VAR_3;
 VAR_1->v6.sin6_flowinfo = 0;
 FUNC_0(&VAR_1->v6.sin6_addr, &VAR_2->v6.addr);
 VAR_1->v6.sin6_scope_id = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int length; int type; } ;
struct TYPE_8__ {TYPE_2__ addr; TYPE_1__ param_hdr; } ;
union sctp_addr_param {TYPE_3__ v4; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_4__ sin_addr; } ;
union sctp_addr {TYPE_5__ v4; } ;
typedef int sctp_ipv4addr_param_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const union sctp_addr *VAR_1,
     union sctp_addr_param *VAR_2)
{
 int VAR_3 = sizeof(sctp_ipv4addr_param_t);

 VAR_2->v4.param_hdr.type = VAR_0;
 VAR_2->v4.param_hdr.length = FUNC_0(VAR_3);
 VAR_2->v4.addr.s_addr = VAR_1->v4.sin_addr.s_addr;

 return VAR_3;
}

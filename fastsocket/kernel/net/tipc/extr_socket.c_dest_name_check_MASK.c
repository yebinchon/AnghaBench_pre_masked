
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tipc_cfg_msg_hdr {int tcm_type; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_4__ name; } ;
struct TYPE_6__ {TYPE_3__ name; } ;
struct sockaddr_tipc {TYPE_2__ addr; } ;
struct msghdr {TYPE_1__* msg_iov; } ;
typedef int hdr ;
struct TYPE_5__ {int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tipc_cfg_msg_hdr*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sockaddr_tipc *VAR_6, struct msghdr *VAR_7)
{
 struct tipc_cfg_msg_hdr VAR_8;

 if (FUNC_2(VAR_6->addr.name.name.type >= VAR_4))
  return 0;
 if (FUNC_2(VAR_6->addr.name.name.type == VAR_5))
  return 0;
 if (FUNC_2(VAR_6->addr.name.name.type != VAR_3))
  return -VAR_1;

 if (FUNC_1(&VAR_8, VAR_7->msg_iov[0].iov_base, sizeof(VAR_8)))
  return -VAR_2;
 if ((FUNC_3(VAR_8.tcm_type) & 0xC000) && (!FUNC_0(VAR_0)))
  return -VAR_1;

 return 0;
}

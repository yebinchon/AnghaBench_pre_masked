
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int txt ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct TYPE_6__ {scalar_t__ ss_family; } ;
struct respip_addr_info {int net; int addrlen; TYPE_3__ addr; } ;
struct local_rrset {TYPE_2__* rrset; } ;
struct comm_reply {int addrlen; TYPE_3__ addr; } ;
typedef int srcip ;
typedef int respip ;
struct TYPE_4__ {int * dname; } ;
struct TYPE_5__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (int ,char*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,char*,int,char*,unsigned int) ;

void
FUNC_4(struct respip_addr_info* VAR_1, uint8_t* VAR_2,
 uint16_t VAR_3, uint16_t VAR_4, struct local_rrset* VAR_5,
 struct comm_reply* VAR_6)
{
 char VAR_7[128], VAR_8[128], VAR_9[512];
 unsigned VAR_10;

 if(VAR_5)
  VAR_2 = VAR_5->rrset->rk.dname;
 VAR_10 = (unsigned)((VAR_6->addr.ss_family == VAR_0) ?
  FUNC_2(((struct sockaddr_in*)&VAR_6->addr)->sin_port) :
  FUNC_2(((struct sockaddr_in6*)&VAR_6->addr)->sin6_port));
 FUNC_0(&VAR_6->addr, VAR_6->addrlen, VAR_7, sizeof(VAR_7));
 FUNC_0(&VAR_1->addr, VAR_1->addrlen,
  VAR_8, sizeof(VAR_8));
 FUNC_3(VAR_9, sizeof(VAR_9), "%s/%d inform %s@%u", VAR_8,
  VAR_1->net, VAR_7, VAR_10);
 FUNC_1(0, VAR_9, VAR_2, VAR_3, VAR_4);
}

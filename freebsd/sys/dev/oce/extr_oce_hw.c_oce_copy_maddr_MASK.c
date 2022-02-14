
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct TYPE_3__ {scalar_t__ num_mac; int * mac; } ;
struct TYPE_4__ {TYPE_1__ req; } ;
struct mbx_set_common_iface_multicast {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct mbx_set_common_iface_multicast *VAR_5 = VAR_2;

 if (VAR_5->params.req.num_mac == VAR_1)
  return (0);

 FUNC_1(FUNC_0(VAR_3), &VAR_5->params.req.mac[VAR_5->params.req.num_mac++],
     VAR_0);

 return (1);
}

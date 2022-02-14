
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int * wi_mcast; } ;
struct wi_mcast_ctx {int mcnt; TYPE_1__ mlist; } ;
struct sockaddr_dl {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct wi_mcast_ctx *VAR_3 = VAR_0;

 if (VAR_3->mcnt >= 16)
  return (0);
 FUNC_0(&VAR_3->mlist.wi_mcast[VAR_3->mcnt++], FUNC_1(VAR_1));

 return (1);
}

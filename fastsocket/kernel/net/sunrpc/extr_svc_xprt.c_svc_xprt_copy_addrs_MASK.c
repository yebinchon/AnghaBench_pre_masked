
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {int xpt_local; int xpt_remotelen; int xpt_remote; } ;
struct TYPE_2__ {int addr6; int addr; } ;
struct svc_rqst {TYPE_1__ rq_daddr; int rq_addrlen; int rq_addr; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (int *,int *,int ) ;

void FUNC_1(struct svc_rqst *VAR_0, struct svc_xprt *VAR_1)
{
 struct sockaddr *VAR_2;

 FUNC_0(&VAR_0->rq_addr, &VAR_1->xpt_remote, VAR_1->xpt_remotelen);
 VAR_0->rq_addrlen = VAR_1->xpt_remotelen;





 VAR_2 = (struct sockaddr *)&VAR_1->xpt_local;
 switch (VAR_2->sa_family) {
 case 129:
  VAR_0->rq_daddr.addr = ((struct sockaddr_in *)VAR_2)->sin_addr;
  break;
 case 128:
  VAR_0->rq_daddr.addr6 = ((struct sockaddr_in6 *)VAR_2)->sin6_addr;
  break;
 }
}

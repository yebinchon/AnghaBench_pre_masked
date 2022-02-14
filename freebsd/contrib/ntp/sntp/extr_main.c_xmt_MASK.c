
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* spkt; int sock; } ;
typedef TYPE_1__ xmt_ctx ;
typedef int u_long ;
typedef int u_int ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct pkt {int dummy; } ;
struct dns_ctx {int name; int key; int key_id; } ;
typedef int sockaddr_u ;
struct TYPE_5__ {scalar_t__ stime; int x_pkt; int addr; struct dns_ctx* dctx; } ;
typedef TYPE_2__ sent_pkt ;
typedef int SOCKET ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (struct pkt*,struct timeval*,int ,int ) ;
 scalar_t__ FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (int *,struct pkt*,int ) ;
 int FUNC_6 (int,size_t) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int *,struct pkt*,size_t) ;
 int FUNC_9 (int *) ;

void
FUNC_10(
 xmt_ctx * VAR_2
 )
{
 SOCKET VAR_3 = VAR_2->sock;
 struct dns_ctx *VAR_4 = VAR_2->spkt->dctx;
 sent_pkt * VAR_5 = VAR_2->spkt;
 sockaddr_u * VAR_6 = &VAR_5->addr;
 struct timeval VAR_7;
 struct pkt VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (0 != FUNC_4(&VAR_7, ((void*)0))) {
  FUNC_7(VAR_1,
   "xmt: gettimeofday() failed: %m");
  FUNC_2(1);
 }
 VAR_7.tv_sec += VAR_0;

 VAR_9 = FUNC_3(&VAR_8, &VAR_7, VAR_4->key_id,
          VAR_4->key);

 VAR_10 = FUNC_8(VAR_3, VAR_6, &VAR_8, VAR_9);
 if (VAR_10) {

  FUNC_5(&VAR_5->x_pkt, &VAR_8, FUNC_6(sizeof(VAR_5->x_pkt),
         VAR_9));
  VAR_5->stime = VAR_7.tv_sec - VAR_0;

  FUNC_0(2, ("xmt: %lx.%6.6u %s %s\n", (u_long)VAR_7.tv_sec,
     (u_int)VAR_7.tv_usec, VAR_4->name, FUNC_9(VAR_6)));
 } else {
  FUNC_1(VAR_4->name, VAR_6);
 }

 return;
}

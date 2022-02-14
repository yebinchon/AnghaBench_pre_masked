
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rs_svc_msg {int cmd; int status; TYPE_2__* rs; } ;
struct rs_svc {size_t cnt; int * sock; TYPE_1__* contexts; } ;
struct TYPE_5__ {int opts; int udp_sock; } ;
struct TYPE_4__ {int revents; int events; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,struct rs_svc_msg*,int) ;
 int FUNC_1 (struct rs_svc*,TYPE_2__*) ;
 int FUNC_2 (struct rs_svc*,TYPE_2__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,struct rs_svc_msg*,int) ;

__attribute__((used)) static void FUNC_4(struct rs_svc *VAR_3)
{
 struct rs_svc_msg VAR_4;

 FUNC_0(VAR_3->sock[1], &VAR_4, sizeof VAR_4);
 switch (VAR_4.cmd) {
 case 130:
  VAR_4.status = FUNC_1(VAR_3, VAR_4.rs);
  if (!VAR_4.status) {
   VAR_4.rs->opts |= VAR_1;
   VAR_2 = VAR_3->contexts;
   VAR_2[VAR_3->cnt].fd = VAR_4.rs->udp_sock;
   VAR_2[VAR_3->cnt].events = VAR_0;
   VAR_2[VAR_3->cnt].revents = 0;
  }
  break;
 case 128:
  VAR_4.status = FUNC_2(VAR_3, VAR_4.rs);
  if (!VAR_4.status)
   VAR_4.rs->opts &= ~VAR_1;
  break;
 case 129:
  VAR_4.status = 0;
  break;
 default:
  break;
 }

 FUNC_3(VAR_3->sock[1], &VAR_4, sizeof VAR_4);
}

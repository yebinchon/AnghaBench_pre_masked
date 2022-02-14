
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rs_svc_msg {int cmd; int status; TYPE_1__* rs; } ;
struct rs_svc {size_t cnt; int * sock; scalar_t__* contexts; } ;
struct TYPE_4__ {scalar_t__ keepalive_time; int opts; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,struct rs_svc_msg*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rs_svc*,TYPE_1__*) ;
 int FUNC_3 (struct rs_svc*,TYPE_1__*) ;
 int FUNC_4 (struct rs_svc*,TYPE_1__*) ;
 scalar_t__* VAR_2 ;
 int FUNC_5 (int ,struct rs_svc_msg*,int) ;

__attribute__((used)) static void FUNC_6(struct rs_svc *VAR_3)
{
 struct rs_svc_msg VAR_4;
 int VAR_5;

 FUNC_0(VAR_3->sock[1], &VAR_4, sizeof VAR_4);
 switch (VAR_4.cmd) {
 case 131:
  VAR_4.status = FUNC_2(VAR_3, VAR_4.rs);
  if (!VAR_4.status) {
   VAR_4.rs->opts |= VAR_1;
   VAR_2 = VAR_3->contexts;
   VAR_2[VAR_3->cnt] = FUNC_1() +
           VAR_4.rs->keepalive_time;
  }
  break;
 case 128:
  VAR_4.status = FUNC_4(VAR_3, VAR_4.rs);
  if (!VAR_4.status)
   VAR_4.rs->opts &= ~VAR_1;
  break;
 case 130:
  VAR_5 = FUNC_3(VAR_3, VAR_4.rs);
  if (VAR_5 >= 0) {
   VAR_2[VAR_5] = FUNC_1() + VAR_4.rs->keepalive_time;
   VAR_4.status = 0;
  } else {
   VAR_4.status = VAR_0;
  }
  break;
 case 129:
  VAR_4.status = 0;
  break;
 default:
  break;
 }
 FUNC_5(VAR_3->sock[1], &VAR_4, sizeof VAR_4);
}

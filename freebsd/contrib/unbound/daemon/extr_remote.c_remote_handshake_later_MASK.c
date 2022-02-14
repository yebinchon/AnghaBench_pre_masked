
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_state {scalar_t__ shake_state; TYPE_2__* c; } ;
struct daemon_remote {int dummy; } ;
struct comm_point {int dummy; } ;
struct TYPE_3__ {int addrlen; int addr; } ;
struct TYPE_4__ {TYPE_1__ repinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct daemon_remote*,struct rc_state*) ;
 int FUNC_1 (struct comm_point*,int,int) ;
 int FUNC_2 (int,char*,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct daemon_remote* VAR_4, struct rc_state* VAR_5,
 struct comm_point* VAR_6, int VAR_7, int VAR_8)
{
 if(VAR_8 == VAR_0) {
  if(VAR_5->shake_state == VAR_2) {

   return 0;
  }
  VAR_5->shake_state = VAR_2;
  FUNC_1(VAR_6, 1, 0);
  return 0;
 } else if(VAR_8 == VAR_1) {
  if(VAR_5->shake_state == VAR_3) {

   return 0;
  }
  VAR_5->shake_state = VAR_3;
  FUNC_1(VAR_6, 0, 1);
  return 0;
 } else {
  if(VAR_7 == 0)
   FUNC_4("remote control connection closed prematurely");
  FUNC_2(1, "failed connection from",
   &VAR_5->c->repinfo.addr, VAR_5->c->repinfo.addrlen);
  FUNC_3("remote control failed ssl");
  FUNC_0(VAR_4, VAR_5);
 }
 return 0;
}

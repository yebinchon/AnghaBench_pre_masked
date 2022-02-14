
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_5__ {int self; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssh*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct ssh*,char*,int ,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_2 (struct ssh*,int ,int ,int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static Channel *
FUNC_7(struct ssh *VAR_5)
{
 Channel *VAR_6;

 FUNC_3("input_session_request");
 FUNC_4();

 if (VAR_2) {
  FUNC_5("Possible attack: attempt to open a session "
      "after additional sessions disabled");
 }







 VAR_6 = FUNC_1(VAR_5, "session", VAR_1,
     -1, -1, -1, 0, VAR_0,
     0, "server-session", 1);
 if (FUNC_6(VAR_4, VAR_6->self) != 1) {
  FUNC_3("session open failed, free channel %d", VAR_6->self);
  FUNC_0(VAR_5, VAR_6);
  return ((void*)0);
 }
 FUNC_2(VAR_5, VAR_6->self, VAR_3, 0);
 return VAR_6;
}

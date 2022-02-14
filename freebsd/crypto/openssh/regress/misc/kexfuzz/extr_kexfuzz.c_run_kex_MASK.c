
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* kex; } ;
struct TYPE_2__ {int done; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ssh*,struct ssh*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ssh *VAR_1, struct ssh *VAR_2)
{
 int VAR_3 = 0;

 while (!VAR_2->kex->done || !VAR_1->kex->done) {
  if ((VAR_3 = FUNC_2(VAR_2, VAR_1)) != 0) {
   FUNC_1("do_send_and_receive S2C: %s", FUNC_4(VAR_3));
   break;
  }
  if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) != 0) {
   FUNC_1("do_send_and_receive C2S: %s", FUNC_4(VAR_3));
   break;
  }
 }
 if (VAR_0)
  FUNC_3("done: %s\n", FUNC_4(VAR_3));
 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_2->kex->done, 1);
 FUNC_0(VAR_1->kex->done, 1);
}

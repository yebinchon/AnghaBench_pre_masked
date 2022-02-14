
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int valid; int * pw; } ;
struct TYPE_5__ {int chanid; int self; int * pw; TYPE_2__* authctxt; } ;
typedef TYPE_1__ Session ;
typedef TYPE_2__ Authctxt ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* FUNC_3 () ;

int
FUNC_4(Authctxt *VAR_0, int VAR_1)
{
 Session *VAR_2 = FUNC_3();
 FUNC_0("session_open: channel %d", VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_1("no more sessions");
  return 0;
 }
 VAR_2->authctxt = VAR_0;
 VAR_2->pw = VAR_0->pw;
 if (VAR_2->pw == ((void*)0) || !VAR_0->valid)
  FUNC_2("no user for session %d", VAR_2->self);
 FUNC_0("session_open: session %d: link with channel %d", VAR_2->self, VAR_1);
 VAR_2->chanid = VAR_1;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* authctxt; } ;
struct TYPE_2__ {char* user; int * kbdintctxt; } ;
typedef TYPE_1__ Authctxt ;


 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (char*,char*,char*) ;
 int * FUNC_2 (char*) ;

int
FUNC_3(struct ssh *VAR_0, char *VAR_1)
{
 Authctxt *VAR_2 = VAR_0->authctxt;
 FUNC_1("auth2_challenge: user=%s devs=%s",
     VAR_2->user ? VAR_2->user : "<nouser>",
     VAR_1 ? VAR_1 : "<no devs>");

 if (VAR_2->user == ((void*)0) || !VAR_1)
  return 0;
 if (VAR_2->kbdintctxt == ((void*)0))
  VAR_2->kbdintctxt = FUNC_2(VAR_1);
 return FUNC_0(VAR_0);
}

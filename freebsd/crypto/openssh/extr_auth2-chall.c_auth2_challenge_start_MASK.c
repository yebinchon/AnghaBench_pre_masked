
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ssh {TYPE_3__* authctxt; } ;
struct TYPE_9__ {int postponed; TYPE_2__* kbdintctxt; } ;
struct TYPE_8__ {char* devices; TYPE_1__* device; int * ctxt; } ;
struct TYPE_7__ {int * (* init_ctx ) (TYPE_3__*) ;int name; } ;
typedef TYPE_2__ KbdintAuthctxt ;
typedef TYPE_3__ Authctxt ;


 int VAR_0 ;
 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*,int ,int *) ;
 int * FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_7(struct ssh *VAR_2)
{
 Authctxt *VAR_3 = VAR_2->authctxt;
 KbdintAuthctxt *VAR_4 = VAR_3->kbdintctxt;

 FUNC_2("auth2_challenge_start: devices %s",
     VAR_4->devices ? VAR_4->devices : "<empty>");

 if (FUNC_3(VAR_3, VAR_4) == 0) {
  FUNC_0(VAR_2);
  return 0;
 }
 FUNC_1("auth2_challenge_start: trying authentication method '%s'",
     VAR_4->device->name);

 if ((VAR_4->ctxt = VAR_4->device->init_ctx(VAR_3)) == ((void*)0)) {
  FUNC_0(VAR_2);
  return 0;
 }
 if (FUNC_4(VAR_2) == 0) {
  FUNC_0(VAR_2);
  return 0;
 }
 FUNC_5(VAR_2, VAR_0,
     &VAR_1);

 VAR_3->postponed = 1;
 return 0;
}

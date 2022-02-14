
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_8__ {char* methoddata; char* authlist; TYPE_1__* method; int host; int server_user; } ;
struct TYPE_7__ {scalar_t__ (* userauth ) (TYPE_2__*) ;int * enabled; int name; int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_1__ Authmethod ;
typedef TYPE_2__ Authctxt ;


 int VAR_0 ;
 int VAR_1 ;
 struct ssh* VAR_2 ;
 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ssh*,int ,int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

void
FUNC_7(Authctxt *VAR_3, char *VAR_4)
{
 struct ssh *VAR_5 = VAR_2;

 if (VAR_3->method != ((void*)0) && VAR_3->method->cleanup != ((void*)0))
  VAR_3->method->cleanup(VAR_3);

 FUNC_3(VAR_3->methoddata);
 VAR_3->methoddata = ((void*)0);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = VAR_3->authlist;
 } else {
  FUNC_3(VAR_3->authlist);
  VAR_3->authlist = VAR_4;
 }
 for (;;) {
  Authmethod *VAR_6 = FUNC_0(VAR_4);
  if (VAR_6 == ((void*)0))
   FUNC_2("%s@%s: Permission denied (%s).",
       VAR_3->server_user, VAR_3->host, VAR_4);
  VAR_3->method = VAR_6;


  FUNC_4(VAR_5, VAR_1,
      VAR_0, ((void*)0));


  if (VAR_6->userauth(VAR_3) != 0) {
   FUNC_1("we sent a %s packet, wait for reply", VAR_6->name);
   break;
  } else {
   FUNC_1("we did not send a packet, disable method");
   VAR_6->enabled = ((void*)0);
  }
 }
}

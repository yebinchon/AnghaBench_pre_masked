
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_4__ {int * auth_data; int * auth_proto; int screen; int single_connection; int self; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (struct ssh*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct ssh *VAR_0, Session *VAR_1)
{
 int VAR_2;

 if (VAR_1->auth_proto != ((void*)0) || VAR_1->auth_data != ((void*)0)) {
  FUNC_0("session_x11_req: session %d: "
      "x11 forwarding already active", VAR_1->self);
  return 0;
 }
 VAR_1->single_connection = FUNC_3();
 VAR_1->auth_proto = FUNC_5(((void*)0));
 VAR_1->auth_data = FUNC_5(((void*)0));
 VAR_1->screen = FUNC_4();
 FUNC_2();

 if (FUNC_7(VAR_1->auth_proto) &&
     FUNC_7(VAR_1->auth_data))
  VAR_2 = FUNC_6(VAR_0, VAR_1);
 else {
  VAR_2 = 0;
  FUNC_0("Invalid X11 forwarding data");
 }
 if (!VAR_2) {
  FUNC_1(VAR_1->auth_proto);
  FUNC_1(VAR_1->auth_data);
  VAR_1->auth_proto = ((void*)0);
  VAR_1->auth_data = ((void*)0);
 }
 return VAR_2;
}

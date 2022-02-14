
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct basic_cb_args {int eb; int ev; int callcount; } ;
typedef int evutil_socket_t ;
typedef int buf ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 char VAR_3[256];
 int VAR_4;
 struct basic_cb_args *VAR_5 = VAR_2;

 VAR_4 = FUNC_2(VAR_0, VAR_3, sizeof(VAR_3));

 if (VAR_4 < 0) {
  FUNC_4("read (callback)");
 } else {
  switch (VAR_5->callcount++) {
  case 0:
   if (VAR_4 > 0)
    return;

   FUNC_3("EOF before data read");
   break;

  case 1:
   if (VAR_4 > 0)
    FUNC_3("not all data read on first cycle");
   break;

  default:
   FUNC_3("too many cycles");
  }
 }

 FUNC_1(VAR_5->ev);
 FUNC_0(VAR_5->eb, ((void*)0));
}

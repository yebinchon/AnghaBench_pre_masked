
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int evutil_socket_t ;
typedef scalar_t__ ev_ssize_t ;
typedef int buf ;


 int FUNC_0 (struct event*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct event*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 struct event* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 char VAR_5[256];
 struct event *VAR_6 = VAR_4;
 ev_ssize_t VAR_7;

 VAR_0 = VAR_6;

 VAR_7 = FUNC_3(VAR_2, VAR_5, sizeof(VAR_5));

 if (VAR_7 < 0) {
  FUNC_4("read");
  FUNC_1(FUNC_2(VAR_6));
  return;
 } else {
  FUNC_0(VAR_6, ((void*)0));
  ++VAR_1;
 }
}

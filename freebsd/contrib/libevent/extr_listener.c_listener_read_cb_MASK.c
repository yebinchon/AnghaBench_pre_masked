
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct evconnlistener {int refcnt; void* user_data; int (* errorcb ) (struct evconnlistener*,void*) ;int (* cb ) (struct evconnlistener*,scalar_t__,struct sockaddr*,int,void*) ;int accept4_flags; } ;
typedef int ss ;
typedef scalar_t__ evutil_socket_t ;
typedef int (* evconnlistener_errorcb ) (struct evconnlistener*,void*) ;
typedef int (* evconnlistener_cb ) (struct evconnlistener*,scalar_t__,struct sockaddr*,int,void*) ;
typedef scalar_t__ ev_socklen_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct evconnlistener*) ;
 int FUNC_3 (struct evconnlistener*) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,struct sockaddr*,scalar_t__*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct evconnlistener*) ;

__attribute__((used)) static void
FUNC_9(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct evconnlistener *VAR_3 = VAR_2;
 int VAR_4;
 evconnlistener_cb VAR_5;
 evconnlistener_errorcb VAR_6;
 void *VAR_7;
 FUNC_2(VAR_3);
 while (1) {
  struct sockaddr_storage VAR_8;
  ev_socklen_t VAR_9 = sizeof(VAR_8);
  evutil_socket_t VAR_10 = FUNC_5(VAR_0, (struct sockaddr*)&VAR_8, &VAR_9, VAR_3->accept4_flags);
  if (VAR_10 < 0)
   break;
  if (VAR_9 == 0) {


   FUNC_6(VAR_10);
   continue;
  }

  if (VAR_3->cb == ((void*)0)) {
   FUNC_6(VAR_10);
   FUNC_3(VAR_3);
   return;
  }
  ++VAR_3->refcnt;
  VAR_5 = VAR_3->cb;
  VAR_7 = VAR_3->user_data;
  FUNC_3(VAR_3);
  VAR_5(VAR_3, VAR_10, (struct sockaddr*)&VAR_8, (int)VAR_9,
      VAR_7);
  FUNC_2(VAR_3);
  if (VAR_3->refcnt == 1) {
   int VAR_11 = FUNC_8(VAR_3);
   FUNC_0(VAR_11);

   FUNC_6(VAR_10);
   return;
  }
  --VAR_3->refcnt;
 }
 VAR_4 = FUNC_7(VAR_0);
 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_3);
  return;
 }
 if (VAR_3->errorcb != ((void*)0)) {
  ++VAR_3->refcnt;
  VAR_6 = VAR_3->errorcb;
  VAR_7 = VAR_3->user_data;
  FUNC_3(VAR_3);
  VAR_6(VAR_3, VAR_7);
  FUNC_2(VAR_3);
  FUNC_8(VAR_3);
 } else {
  FUNC_4(VAR_0, "Error from accept() call");
  FUNC_3(VAR_3);
 }
}

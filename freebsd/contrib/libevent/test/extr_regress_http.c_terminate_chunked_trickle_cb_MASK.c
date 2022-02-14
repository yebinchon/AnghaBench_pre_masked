
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct terminate_state {struct terminate_state* base; int oneshot; int req; } ;
struct evbuffer {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct terminate_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct evbuffer*,char*,struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*) ;
 struct evbuffer* FUNC_3 () ;
 int FUNC_4 (struct terminate_state*,int *) ;
 int FUNC_5 (struct terminate_state*,int,int ,void (*) (int ,short,void*),void*,struct timeval*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,struct evbuffer*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_9(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct terminate_state *VAR_5 = VAR_4;
 struct evbuffer *VAR_6;

 if (!VAR_5->req) {
  return;
 }

 if (FUNC_7(VAR_5->req) == ((void*)0)) {
  VAR_1 = 1;
  FUNC_6(VAR_5->req);
  FUNC_4(VAR_5->base,((void*)0));
  return;
 }

 VAR_6 = FUNC_3();
 FUNC_1(VAR_6, "%p", VAR_6);
 FUNC_8(VAR_5->req, VAR_6);
 FUNC_2(VAR_6);

 if (!VAR_5->oneshot) {
  struct timeval VAR_7;
  VAR_7.tv_sec = 0;
  VAR_7.tv_usec = 3000;
  FUNC_0(VAR_5);
  FUNC_0(VAR_5->base);
  FUNC_5(VAR_5->base, -1, VAR_0, FUNC_9, VAR_4, &VAR_7);
 }
}

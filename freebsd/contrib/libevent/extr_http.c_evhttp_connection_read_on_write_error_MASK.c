
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int kind; } ;
struct evhttp_connection {int flags; int bufev; } ;
struct evbuffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct evbuffer* FUNC_0 (int ) ;
 int FUNC_1 (struct evbuffer*,int ) ;
 int FUNC_2 (struct evbuffer*,int) ;
 int FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*,int) ;
 int FUNC_5 (struct evhttp_connection*,int ) ;
 int FUNC_6 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_7(struct evhttp_connection *VAR_3,
    struct evhttp_request *VAR_4)
{
 struct evbuffer *VAR_5;


 if (VAR_3->flags & VAR_0) {
  VAR_3->flags &= ~VAR_0;
  FUNC_5(VAR_3, VAR_2);
  return;
 }

 VAR_4->kind = VAR_1;

 VAR_5 = FUNC_0(VAR_3->bufev);
 FUNC_4(VAR_5, 1);
 FUNC_1(VAR_5, FUNC_3(VAR_5));
 FUNC_2(VAR_5, 1);

 FUNC_6(VAR_3);
 VAR_3->flags |= VAR_0;
}

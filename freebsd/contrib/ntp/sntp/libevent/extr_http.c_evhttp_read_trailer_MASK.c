
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int bufev; } ;
struct evbuffer {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct evbuffer* FUNC_2 (int ) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (struct evhttp_connection*,int ) ;
 int FUNC_5 (struct evhttp_request*,struct evbuffer*) ;

__attribute__((used)) static void
FUNC_6(struct evhttp_connection *VAR_2, struct evhttp_request *VAR_3)
{
 struct evbuffer *VAR_4 = FUNC_2(VAR_2->bufev);

 switch (FUNC_5(VAR_3, VAR_4)) {
 case 131:
 case 130:
  FUNC_4(VAR_2, VAR_0);
  break;
 case 132:
  FUNC_0(VAR_2->bufev, VAR_1);
  FUNC_3(VAR_2);
  break;
 case 129:
 case 128:
 default:
  FUNC_1(VAR_2->bufev, VAR_1);
  break;
 }
}

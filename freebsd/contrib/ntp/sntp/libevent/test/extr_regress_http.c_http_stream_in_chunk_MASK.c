
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evbuffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct evbuffer*,int ) ;
 int FUNC_1 (struct evhttp_request*) ;
 scalar_t__ FUNC_2 (struct evhttp_request*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct evhttp_request *VAR_2, void *VAR_3)
{
 struct evbuffer *VAR_4 = VAR_3;

 if (FUNC_2(VAR_2) != VAR_0) {
  FUNC_4(VAR_1, "FAILED\n");
  FUNC_3(1);
 }

 FUNC_0(VAR_4, FUNC_1(VAR_2));
}

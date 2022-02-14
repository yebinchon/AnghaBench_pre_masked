
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (struct evhttp*) ;
 int FUNC_5 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_6 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_7 (int ,int ) ;
 int VAR_1 ;
 struct evhttp* FUNC_8 (int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_3)
{
 struct basic_test_data *VAR_4 = VAR_3;
 ev_uint16_t VAR_5 = 0;
 struct evhttp_connection *VAR_6 = ((void*)0);
 struct evhttp_request *VAR_7 = ((void*)0);
 struct evhttp *VAR_8 = FUNC_8(&VAR_5, VAR_4->base, 0);

 VAR_2 = 0;

 VAR_6 = FUNC_2(VAR_4->base, ((void*)0), "127.0.0.1", VAR_5);
 FUNC_10(VAR_6);






 VAR_7 = FUNC_7(VAR_1, VAR_4->base);


 FUNC_1(FUNC_6(VAR_7), "X-Negative", "makeitso");


 if (FUNC_5(VAR_6, VAR_7, VAR_0, "/test") == -1) {
  FUNC_9("Couldn't make request");
 }

 FUNC_0(VAR_4->base);

 end:
 if (VAR_6)
  FUNC_3(VAR_6);
 if (VAR_8)
  FUNC_4(VAR_8);
}

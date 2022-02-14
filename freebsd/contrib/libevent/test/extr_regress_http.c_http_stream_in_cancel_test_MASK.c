
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
 struct evhttp_connection* FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp*) ;
 int FUNC_4 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 struct evhttp_request* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct evhttp_request*,int ) ;
 struct evhttp* FUNC_7 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_4)
{
 struct basic_test_data *VAR_5 = VAR_4;
 struct evhttp_connection *VAR_6;
 struct evhttp_request *VAR_7 = ((void*)0);
 ev_uint16_t VAR_8 = 0;
 struct evhttp *VAR_9 = FUNC_7(&VAR_8, VAR_5->base, 0);

 VAR_6 = FUNC_1(VAR_5->base, ((void*)0), "127.0.0.1", VAR_8);
 FUNC_9(VAR_6);

 VAR_7 = FUNC_5(VAR_2, VAR_5->base);
 FUNC_6(VAR_7, VAR_1);


 if (FUNC_4(VAR_6, VAR_7, VAR_0, "/chunked") == -1) {
  FUNC_8("Couldn't make request");
 }

 FUNC_0(VAR_5->base);

 VAR_3 = 1;
 end:
 FUNC_2(VAR_6);
 FUNC_3(VAR_9);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct evhttp_connection* FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 struct evhttp_request* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct evhttp_request*,int ) ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_5)
{
 struct basic_test_data *VAR_6 = VAR_5;
 struct evhttp_connection *VAR_7;
 struct evhttp_request *VAR_8 = ((void*)0);
 ev_uint16_t VAR_9 = 0;

 VAR_1 = FUNC_7(&VAR_9, VAR_6->base, 0);

 VAR_7 = FUNC_1(VAR_6->base, ((void*)0), "127.0.0.1", VAR_9);
 FUNC_9(VAR_7);

 VAR_8 = FUNC_5(VAR_3, VAR_6->base);
 FUNC_6(VAR_8, VAR_2);


 if (FUNC_4(VAR_7, VAR_8, VAR_0, "/chunked") == -1) {
  FUNC_8("Couldn't make request");
 }

 FUNC_0(VAR_6->base);

 VAR_4 = 1;
 end:
 FUNC_2(VAR_7);
 FUNC_3(VAR_1);

}

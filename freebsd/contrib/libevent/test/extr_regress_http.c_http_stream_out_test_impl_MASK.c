
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bufferevent* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_3 (int ,int *,struct bufferevent*,char*,int ) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp*) ;
 int FUNC_6 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_7 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_8 (int ,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct evhttp* FUNC_9 (int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_5, int VAR_6)
{
 struct basic_test_data *VAR_7 = VAR_5;
 ev_uint16_t VAR_8 = 0;
 struct evhttp_connection *VAR_9 = ((void*)0);
 struct evhttp_request *VAR_10 = ((void*)0);
 struct bufferevent *VAR_11;
 struct evhttp *VAR_12 = FUNC_9(&VAR_8, VAR_7->base, VAR_6 ? VAR_1 : 0);

 VAR_4 = 0;
 VAR_2 = VAR_7->base;

 VAR_11 = FUNC_0(VAR_7->base, -1, VAR_6);
 VAR_9 = FUNC_3(
  VAR_7->base, ((void*)0), VAR_11, "127.0.0.1", VAR_8);
 FUNC_11(VAR_9);






 VAR_10 = FUNC_8(VAR_3,
     (void *)"This is funnybut not hilarious.bwv 1052");


 FUNC_2(FUNC_7(VAR_10), "Host", "somehost");


 if (FUNC_6(VAR_9, VAR_10, VAR_0, "/streamed")
     == -1) {
  FUNC_10("Couldn't make request");
 }

 FUNC_1(VAR_7->base);

 end:
 if (VAR_9)
  FUNC_4(VAR_9);
 if (VAR_12)
  FUNC_5(VAR_12);
}

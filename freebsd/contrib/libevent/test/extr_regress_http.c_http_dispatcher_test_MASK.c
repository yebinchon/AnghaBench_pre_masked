
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
typedef struct evhttp_request evhttp_connection ;
struct evhttp {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 struct evhttp_request* FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_request*,char*) ;
 int FUNC_5 (struct evhttp*) ;
 int FUNC_6 (struct evhttp_request*,struct evhttp_request*,int ,char*) ;
 int FUNC_7 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_8 (int ,int ) ;
 int VAR_1 ;
 struct evhttp* FUNC_9 (int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct evhttp_request*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_3)
{
 struct basic_test_data *VAR_4 = VAR_3;
 ev_uint16_t VAR_5 = 0;
 struct evhttp_connection *VAR_6 = ((void*)0);
 struct evhttp_request *VAR_7 = ((void*)0);
 struct evhttp *VAR_8 = FUNC_9(&VAR_5, VAR_4->base, 0);

 VAR_2 = 0;

 VAR_6 = FUNC_2(VAR_4->base, ((void*)0), "127.0.0.1", VAR_5);
 FUNC_11(VAR_6);


 FUNC_4(VAR_6, "127.0.0.1");






 VAR_7 = FUNC_8(VAR_1, VAR_4->base);
 FUNC_11(VAR_7);


 FUNC_1(FUNC_7(VAR_7), "Host", "somehost");

 if (FUNC_6(VAR_6, VAR_7, VAR_0, "/?arg=val") == -1) {
  FUNC_10("Couldn't make request");
 }

 FUNC_0(VAR_4->base);

 end:
 if (VAR_6)
  FUNC_3(VAR_6);
 if (VAR_8)
  FUNC_5(VAR_8);
}

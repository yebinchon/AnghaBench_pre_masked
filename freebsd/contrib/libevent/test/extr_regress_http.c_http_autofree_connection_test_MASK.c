
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int connections; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*) ;
 int FUNC_6 (struct evhttp*) ;
 int FUNC_7 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_8 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_9 (int ,int ) ;
 int VAR_1 ;
 struct evhttp* FUNC_10 (int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_3)
{
 struct basic_test_data *VAR_4 = VAR_3;
 ev_uint16_t VAR_5 = 0;
 struct evhttp_connection *VAR_6 = ((void*)0);
 struct evhttp_request *VAR_7[2] = { ((void*)0) };
 struct evhttp *VAR_8 = FUNC_10(&VAR_5, VAR_4->base, 0);

 VAR_2 = 0;

 VAR_6 = FUNC_3(VAR_4->base, ((void*)0), "127.0.0.1", VAR_5);
 FUNC_12(VAR_6);





 VAR_7[0] = FUNC_9(VAR_1, VAR_4->base);
 VAR_7[1] = FUNC_9(VAR_1, VAR_4->base);


 FUNC_2(FUNC_8(VAR_7[0]), "Host", "somehost");
 FUNC_2(FUNC_8(VAR_7[0]), "Connection", "close");
 FUNC_2(FUNC_8(VAR_7[0]), "Empty", "itis");
 FUNC_2(FUNC_8(VAR_7[1]), "Host", "somehost");
 FUNC_2(FUNC_8(VAR_7[1]), "Connection", "close");
 FUNC_2(FUNC_8(VAR_7[1]), "Empty", "itis");


 if (FUNC_7(VAR_6, VAR_7[0], VAR_0, "/test") == -1) {
  FUNC_11("couldn't make request");
 }
 if (FUNC_7(VAR_6, VAR_7[1], VAR_0, "/test") == -1) {
  FUNC_11("couldn't make request");
 }






 FUNC_5(VAR_6);
 VAR_6 = ((void*)0);

 FUNC_1(VAR_4->base);


 FUNC_12(FUNC_0(&VAR_8->connections) == ((void*)0));

 end:
 if (VAR_6)
  FUNC_4(VAR_6);
 if (VAR_8)
  FUNC_6(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int connections; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int VAR_1 ;
 struct evhttp_connection* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*,struct timeval const*) ;
 int FUNC_6 (struct evhttp*) ;
 int FUNC_7 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_8 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_9 (int ,struct evhttp_connection*) ;
 int FUNC_10 (struct evhttp*,struct timeval const*) ;
 struct evhttp* FUNC_11 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_14(struct basic_test_data *VAR_4, int VAR_5)
{
 ev_uint16_t VAR_6 = 0;
 struct evhttp_connection *VAR_7 = ((void*)0);
 struct evhttp_request *VAR_8 = ((void*)0);
 const struct timeval VAR_9 = { 0, 100000 };
 struct evhttp *VAR_10 = FUNC_11(&VAR_6, VAR_4->base, 0);

 VAR_3 = 0;


 FUNC_10(VAR_10, &VAR_9);

 VAR_7 = FUNC_3(VAR_4->base, ((void*)0),
     "127.0.0.1", VAR_6);
 FUNC_13(VAR_7);
 FUNC_5(VAR_7, &VAR_9);


 FUNC_13(VAR_7);
 VAR_2 = VAR_7;






 VAR_8 = FUNC_9(VAR_1, VAR_7);


 FUNC_2(FUNC_8(VAR_8), "Host", "somehost");


 if (FUNC_7(VAR_7,
     VAR_8, VAR_0, VAR_5 ? "/largedelay" : "/test") == -1) {
  FUNC_12("couldn't make request");
 }

 FUNC_1(VAR_4->base);


 FUNC_13(FUNC_0(&VAR_10->connections) == ((void*)0));

 end:
 if (VAR_7)
  FUNC_4(VAR_7);
 if (VAR_10)
  FUNC_6(VAR_10);
}

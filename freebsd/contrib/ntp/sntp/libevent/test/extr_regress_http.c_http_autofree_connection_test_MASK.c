
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;
struct TYPE_4__ {int connections; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_8 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_9 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_10 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_4)
{
 struct basic_test_data *VAR_5 = VAR_4;
 ev_uint16_t VAR_6 = 0;
 struct evhttp_connection *VAR_7 = ((void*)0);
 struct evhttp_request *VAR_8[2] = { ((void*)0) };

 VAR_3 = 0;
 VAR_1 = FUNC_10(&VAR_6, VAR_5->base, 0);

 VAR_7 = FUNC_3(VAR_5->base, ((void*)0), "127.0.0.1", VAR_6);
 FUNC_12(VAR_7);





 VAR_8[0] = FUNC_9(VAR_2, VAR_5->base);
 VAR_8[1] = FUNC_9(VAR_2, VAR_5->base);


 FUNC_2(FUNC_8(VAR_8[0]), "Host", "somehost");
 FUNC_2(FUNC_8(VAR_8[0]), "Connection", "close");
 FUNC_2(FUNC_8(VAR_8[0]), "Empty", "itis");
 FUNC_2(FUNC_8(VAR_8[1]), "Host", "somehost");
 FUNC_2(FUNC_8(VAR_8[1]), "Connection", "close");
 FUNC_2(FUNC_8(VAR_8[1]), "Empty", "itis");


 if (FUNC_7(VAR_7, VAR_8[0], VAR_0, "/test") == -1) {
  FUNC_11("couldn't make request");
 }
 if (FUNC_7(VAR_7, VAR_8[1], VAR_0, "/test") == -1) {
  FUNC_11("couldn't make request");
 }






 FUNC_5(VAR_7);
 VAR_7 = ((void*)0);

 FUNC_1(VAR_5->base);


 FUNC_12(FUNC_0(&VAR_1->connections) == ((void*)0));

 end:
 if (VAR_7)
  FUNC_4(VAR_7);
 if (VAR_1)
  FUNC_6(VAR_1);
}

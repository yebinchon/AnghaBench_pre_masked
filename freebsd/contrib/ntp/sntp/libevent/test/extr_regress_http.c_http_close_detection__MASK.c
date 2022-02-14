
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int member_1; int member_0; } ;
struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;
struct TYPE_5__ {int connections; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int VAR_1 ;
 struct evhttp_connection* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_connection*) ;
 int FUNC_5 (struct evhttp_connection*,struct timeval const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_8 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_9 (int ,struct evhttp_connection*) ;
 int FUNC_10 (TYPE_1__*,struct timeval const*) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* FUNC_11 (int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_14(struct basic_test_data *VAR_5, int VAR_6)
{
 ev_uint16_t VAR_7 = 0;
 struct evhttp_connection *VAR_8 = ((void*)0);
 struct evhttp_request *VAR_9 = ((void*)0);
 const struct timeval VAR_10 = { 0, 100000 };

 VAR_4 = 0;
 VAR_3 = FUNC_11(&VAR_7, VAR_5->base, 0);


 FUNC_10(VAR_3, &VAR_10);

 VAR_8 = FUNC_3(VAR_5->base, ((void*)0),
     "127.0.0.1", VAR_7);
 FUNC_13(VAR_8);
 FUNC_5(VAR_8, &VAR_10);


 FUNC_13(VAR_8);
 VAR_2 = VAR_8;






 VAR_9 = FUNC_9(VAR_1, VAR_8);


 FUNC_2(FUNC_8(VAR_9), "Host", "somehost");


 if (FUNC_7(VAR_8,
     VAR_9, VAR_0, VAR_6 ? "/largedelay" : "/test") == -1) {
  FUNC_12("couldn't make request");
 }

 FUNC_1(VAR_5->base);


 FUNC_13(FUNC_0(&VAR_3->connections) == ((void*)0));

 end:
 if (VAR_8)
  FUNC_4(VAR_8);
 if (VAR_3)
  FUNC_6(VAR_3);
}

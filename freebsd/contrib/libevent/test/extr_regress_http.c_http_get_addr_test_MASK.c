
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct evhttp_connection* FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*,int (*) (struct evhttp_connection*,int *),void*) ;
 int FUNC_4 (struct evhttp*) ;
 int FUNC_5 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 struct evhttp_request* FUNC_6 (int ,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct evhttp_connection*,int *) ;
 struct evhttp* FUNC_8 (int *,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_5)
{
 struct basic_test_data *VAR_6 = VAR_5;
 ev_uint16_t VAR_7 = 0;
 struct evhttp_connection *VAR_8 = ((void*)0);
 struct evhttp_request *VAR_9 = ((void*)0);
 struct evhttp *VAR_10 = FUNC_8(&VAR_7, VAR_6->base, 0);

 VAR_4 = 0;
 VAR_2 = VAR_6->base;

 VAR_8 = FUNC_1(VAR_6->base, ((void*)0), "127.0.0.1", VAR_7);
 FUNC_10(VAR_8);
 FUNC_3(VAR_8, FUNC_7, VAR_5);






 VAR_9 = FUNC_6(VAR_3, (void *)VAR_0);


 if (FUNC_5(VAR_8, VAR_9, VAR_1, "/test") == -1) {
  FUNC_9("Couldn't make request");
 }

 FUNC_0(VAR_6->base);

 FUNC_7(VAR_8, ((void*)0));

 end:
 if (VAR_8)
  FUNC_2(VAR_8);
 if (VAR_10)
  FUNC_4(VAR_10);
}

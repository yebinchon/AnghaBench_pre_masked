
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct evhttp_connection* FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (struct evhttp_connection*) ;
 int FUNC_3 (struct evhttp_connection*,int (*) (struct evhttp_connection*,int *),void*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 struct evhttp_request* FUNC_6 (int ,void*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct evhttp_connection*,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_6)
{
 struct basic_test_data *VAR_7 = VAR_6;
 ev_uint16_t VAR_8 = 0;
 struct evhttp_connection *VAR_9 = ((void*)0);
 struct evhttp_request *VAR_10 = ((void*)0);

 VAR_5 = 0;
 VAR_2 = VAR_7->base;

 VAR_3 = FUNC_8(&VAR_8, VAR_7->base, 0);

 VAR_9 = FUNC_1(VAR_7->base, ((void*)0), "127.0.0.1", VAR_8);
 FUNC_10(VAR_9);
 FUNC_3(VAR_9, FUNC_7, VAR_6);






 VAR_10 = FUNC_6(VAR_4, (void *)VAR_0);


 if (FUNC_5(VAR_9, VAR_10, VAR_1, "/test") == -1) {
  FUNC_9("Couldn't make request");
 }

 FUNC_0(VAR_7->base);

 FUNC_7(VAR_9, ((void*)0));

 end:
 if (VAR_9)
  FUNC_2(VAR_9);
 if (VAR_3)
  FUNC_4(VAR_3);
}

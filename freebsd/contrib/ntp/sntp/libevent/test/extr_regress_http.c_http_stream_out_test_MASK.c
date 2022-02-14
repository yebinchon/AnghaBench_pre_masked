
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
 int FUNC_1 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (struct evhttp_connection*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_6 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_7 (int ,void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
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

 VAR_4 = 0;
 VAR_1 = VAR_6->base;

 VAR_2 = FUNC_8(&VAR_7, VAR_6->base, 0);

 VAR_8 = FUNC_2(VAR_6->base, ((void*)0), "127.0.0.1", VAR_7);
 FUNC_10(VAR_8);






 VAR_9 = FUNC_7(VAR_3,
     (void *)"This is funnybut not hilarious.bwv 1052");


 FUNC_1(FUNC_6(VAR_9), "Host", "somehost");


 if (FUNC_5(VAR_8, VAR_9, VAR_0, "/streamed")
     == -1) {
  FUNC_9("Couldn't make request");
 }

 FUNC_0(VAR_6->base);

 end:
 if (VAR_8)
  FUNC_3(VAR_8);
 if (VAR_2)
  FUNC_4(VAR_2);
}

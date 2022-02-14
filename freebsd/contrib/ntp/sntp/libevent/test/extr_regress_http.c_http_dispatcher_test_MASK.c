
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
typedef struct evhttp_request evhttp_connection ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 struct evhttp_request* FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (struct evhttp_request*) ;
 int FUNC_4 (struct evhttp_request*,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct evhttp_request*,struct evhttp_request*,int ,char*) ;
 int FUNC_7 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_8 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct evhttp_request*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_4)
{
 struct basic_test_data *VAR_5 = VAR_4;
 ev_uint16_t VAR_6 = 0;
 struct evhttp_connection *VAR_7 = ((void*)0);
 struct evhttp_request *VAR_8 = ((void*)0);

 VAR_3 = 0;

 VAR_1 = FUNC_9(&VAR_6, VAR_5->base, 0);

 VAR_7 = FUNC_2(VAR_5->base, ((void*)0), "127.0.0.1", VAR_6);
 FUNC_11(VAR_7);


 FUNC_4(VAR_7, "127.0.0.1");






 VAR_8 = FUNC_8(VAR_2, VAR_5->base);
 FUNC_11(VAR_8);


 FUNC_1(FUNC_7(VAR_8), "Host", "somehost");

 if (FUNC_6(VAR_7, VAR_8, VAR_0, "/?arg=val") == -1) {
  FUNC_10("Couldn't make request");
 }

 FUNC_0(VAR_5->base);

 end:
 if (VAR_7)
  FUNC_3(VAR_7);
 if (VAR_1)
  FUNC_5(VAR_1);
}

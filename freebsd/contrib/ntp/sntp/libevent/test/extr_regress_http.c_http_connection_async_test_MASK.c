
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
typedef struct evhttp_connection evdns_base ;
struct basic_test_data {void* base; } ;
typedef int ev_uint16_t ;
typedef int address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evhttp_connection*,int ) ;
 int FUNC_1 (struct evhttp_connection*,char*) ;
 struct evhttp_connection* FUNC_2 (void*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_5 (void*,struct evhttp_connection*,char*,int ) ;
 int FUNC_6 (struct evhttp_connection*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_9 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_10 (int ,void*) ;
 int FUNC_11 (char*,int,char*,int ) ;
 int FUNC_12 (int) ;
 void* VAR_2 ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_14 (int *,void*,int ) ;
 int FUNC_15 () ;
 struct evhttp_connection* FUNC_16 (void*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct evhttp_connection* VAR_8 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct evhttp_connection*) ;

__attribute__((used)) static void
FUNC_19(void *VAR_9)
{
 struct basic_test_data *VAR_10 = VAR_9;
 ev_uint16_t VAR_11 = 0;
 struct evhttp_connection *VAR_12 = ((void*)0);
 struct evhttp_request *VAR_13 = ((void*)0);
 struct evdns_base *VAR_14 = ((void*)0);
 ev_uint16_t VAR_15 = 0;
 char VAR_16[64];

 VAR_2 = VAR_10->base;
 FUNC_18(FUNC_16(VAR_10->base, &VAR_15, VAR_6));

 VAR_14 = FUNC_2(VAR_10->base, 0 );
 FUNC_18(VAR_14);



 FUNC_11(VAR_16, sizeof(VAR_16), "127.0.0.1:%d", VAR_15);
 FUNC_1(VAR_14, VAR_16);

 VAR_8 = 0;

 VAR_3 = FUNC_14(&VAR_11, VAR_10->base, 0);

 VAR_12 = FUNC_5(VAR_10->base, VAR_14, "127.0.0.1", VAR_11);
 FUNC_18(VAR_12);






 VAR_13 = FUNC_10(VAR_4, (void*) VAR_0);


 FUNC_4(FUNC_9(VAR_13), "Host", "somehost");


 if (FUNC_8(VAR_12, VAR_13, VAR_1, "/test") == -1) {
  FUNC_13(VAR_7, "FAILED\n");
  FUNC_12(1);
 }

 FUNC_3(VAR_10->base);

 FUNC_18(VAR_8);


 VAR_8 = 0;

 VAR_13 = FUNC_10(VAR_4, (void*) VAR_0);


 FUNC_4(FUNC_9(VAR_13), "Host", "somehost");





 FUNC_4(FUNC_9(VAR_13), "Connection", "close");


 if (FUNC_8(VAR_12, VAR_13, VAR_1, "/test") == -1) {
  FUNC_17("couldn't make request");
 }

 FUNC_3(VAR_10->base);


 VAR_8 = 0;

 VAR_13 = FUNC_10(VAR_5, VAR_10->base);


 FUNC_4(FUNC_9(VAR_13), "Empty", "itis");


 if (FUNC_8(VAR_12, VAR_13, VAR_1, "/test") == -1) {
  FUNC_17("Couldn't make request");
 }

 FUNC_3(VAR_10->base);

 end:
 if (VAR_12)
  FUNC_6(VAR_12);
 if (VAR_3)
  FUNC_7(VAR_3);
 if (VAR_14)
  FUNC_0(VAR_14, 0);
 FUNC_15();
}

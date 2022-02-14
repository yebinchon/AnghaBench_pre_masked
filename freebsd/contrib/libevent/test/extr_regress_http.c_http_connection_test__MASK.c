
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct evhttp {int dummy; } ;
struct evdns_base {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {void* base; } ;
typedef int ev_uint16_t ;
typedef int SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_2 (void*,int,int *,int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*,char*) ;
 struct evhttp_connection* FUNC_5 (void*,struct evdns_base*,struct bufferevent*,char const*,int ) ;
 struct evhttp_connection* FUNC_6 (void*,struct evdns_base*,char const*,int ) ;
 int FUNC_7 (struct evhttp_connection*) ;
 void* FUNC_8 (struct evhttp_connection*) ;
 int * FUNC_9 (struct evhttp_connection*) ;
 int FUNC_10 (struct evhttp_connection*,int) ;
 int FUNC_11 (struct evhttp*) ;
 int FUNC_12 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_13 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_14 (int ,void*) ;
 int FUNC_15 (int) ;
 void* VAR_6 ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 () ;
 int VAR_7 ;
 int VAR_8 ;
 struct evhttp* FUNC_18 (int *,void*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;

__attribute__((used)) static void
FUNC_22(struct basic_test_data *VAR_11, int VAR_12,
 const char *VAR_13, struct evdns_base *VAR_14, int VAR_15, int VAR_16,
 int VAR_17)
{
 ev_uint16_t VAR_18 = 0;
 struct evhttp_connection *VAR_19 = ((void*)0);
 struct evhttp_request *VAR_20 = ((void*)0);
 struct evhttp *VAR_21;

 int VAR_22 = 0;
 if (VAR_15)
  VAR_22 |= VAR_4;
 if (VAR_17)
  VAR_22 |= VAR_5;

 VAR_21 = FUNC_18(&VAR_18, VAR_11->base, VAR_22);

 VAR_10 = 0;
 if (!VAR_21 && VAR_15) {
  FUNC_21();
 }
 FUNC_20(VAR_21);

 if (VAR_17) {
  FUNC_21();

 } else {
  VAR_19 = FUNC_6(VAR_11->base, VAR_14, VAR_13, VAR_18);
 }
 FUNC_20(VAR_19);
 FUNC_10(VAR_19, VAR_16);

 FUNC_20(FUNC_8(VAR_19) == VAR_11->base);

 VAR_6 = VAR_11->base;

 FUNC_20(FUNC_9(VAR_19) == ((void*)0));





 VAR_20 = FUNC_14(VAR_7, (void*) VAR_0);


 FUNC_4(FUNC_13(VAR_20), "Host", "somehost");


 if (FUNC_12(VAR_19, VAR_20, VAR_3, "/test") == -1) {
  FUNC_16(VAR_9, "FAILED\n");
  FUNC_15(1);
 }

 FUNC_3(VAR_11->base);

 FUNC_20(VAR_10);


 VAR_10 = 0;

 VAR_20 = FUNC_14(VAR_7, (void*) VAR_0);


 FUNC_4(FUNC_13(VAR_20), "Host", "somehost");





 if (!VAR_12)
  FUNC_4(FUNC_13(VAR_20), "Connection", "close");


 if (FUNC_12(VAR_19, VAR_20, VAR_3, "/test") == -1) {
  FUNC_19("couldn't make request");
 }

 FUNC_3(VAR_11->base);


 VAR_10 = 0;

 VAR_20 = FUNC_14(VAR_8, VAR_11->base);


 FUNC_4(FUNC_13(VAR_20), "Empty", "itis");


 if (FUNC_12(VAR_19, VAR_20, VAR_3, "/test") == -1) {
  FUNC_19("Couldn't make request");
 }

 FUNC_3(VAR_11->base);

 end:
 if (VAR_19)
  FUNC_7(VAR_19);
 if (VAR_21)
  FUNC_11(VAR_21);
}

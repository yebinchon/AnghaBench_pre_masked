
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
typedef struct evhttp_request evhttp_connection ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_request* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct evhttp_request*,struct evhttp_request*,int ,char*) ;
 int FUNC_8 (struct evhttp_request*) ;
 int FUNC_9 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_10 (int ,int ) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (char*,char,int) ;
 int VAR_5 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct evhttp_request*) ;

__attribute__((used)) static void
FUNC_17(void *VAR_6)
{
 struct basic_test_data *VAR_7 = VAR_6;
 ev_uint16_t VAR_8 = 0;
 struct evhttp_connection *VAR_9 = ((void*)0);
 struct evhttp_request *VAR_10 = ((void*)0);
 char VAR_11[8192];

 VAR_5 = 0;

 VAR_2 = FUNC_13(&VAR_8, VAR_7->base, 0);

 VAR_9 = FUNC_3(VAR_7->base, ((void*)0), "127.0.0.1", VAR_8);
 FUNC_16(VAR_9);


 FUNC_5(VAR_9, "127.0.0.1");






 VAR_10 = FUNC_10(VAR_3, VAR_7->base);
 FUNC_16(VAR_10);

 FUNC_14(VAR_11, 'a', 8192);
 VAR_11[8191] = '\0';

 FUNC_12(VAR_2, 8191);
 FUNC_2(FUNC_9(VAR_10), "Host", "somehost");
 FUNC_2(FUNC_9(VAR_10), "Longheader", VAR_11);

 if (FUNC_7(VAR_9, VAR_10, VAR_0, "/?arg=val") == -1) {
  FUNC_15("Couldn't make request");
 }
 FUNC_1(VAR_7->base);

 VAR_10 = FUNC_10(VAR_3, VAR_7->base);
 FUNC_16(VAR_10);
 FUNC_2(FUNC_9(VAR_10), "Host", "somehost");


 if (FUNC_7(VAR_9, VAR_10, VAR_0, VAR_11) == -1) {
  FUNC_15("Couldn't make request");
 }
 FUNC_1(VAR_7->base);

 FUNC_11(VAR_2, 8190);
 VAR_10 = FUNC_10(VAR_3, VAR_7->base);
 FUNC_2(FUNC_9(VAR_10), "Host", "somehost");
 FUNC_0(FUNC_8(VAR_10), "%s", VAR_11);
 if (FUNC_7(VAR_9, VAR_10, VAR_1, "/") == -1) {
  FUNC_15("Couldn't make request");
 }
 FUNC_1(VAR_7->base);

 VAR_10 = FUNC_10(VAR_4, VAR_7->base);
 FUNC_2(FUNC_9(VAR_10), "Host", "somehost");
 FUNC_2(FUNC_9(VAR_10), "Expect", "100-continue");
 FUNC_0(FUNC_8(VAR_10), "%s", VAR_11);
 if (FUNC_7(VAR_9, VAR_10, VAR_1, "/") == -1) {
  FUNC_15("Couldn't make request");
 }
 FUNC_1(VAR_7->base);

 VAR_5 = 1;
 end:
 if (VAR_9)
  FUNC_4(VAR_9);
 if (VAR_2)
  FUNC_6(VAR_2);
}

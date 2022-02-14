
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
typedef struct evhttp_request evhttp_connection ;
struct evhttp {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 struct evhttp_request* FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct evhttp_request*) ;
 int FUNC_5 (struct evhttp_request*,int ) ;
 int FUNC_6 (struct evhttp_request*,char*) ;
 int FUNC_7 (struct evhttp*) ;
 int FUNC_8 (struct evhttp_request*,struct evhttp_request*,int ,char*) ;
 int FUNC_9 (struct evhttp_request*) ;
 int FUNC_10 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_11 (void (*) (struct evhttp_request*,void*),int ) ;
 int FUNC_12 (struct evhttp*,size_t const) ;
 int FUNC_13 (struct evhttp*,size_t const) ;
 int FUNC_14 (char*) ;
 void FUNC_15 (struct evhttp_request*,void*) ;
 void FUNC_16 (struct evhttp_request*,void*) ;
 void FUNC_17 (struct evhttp_request*,void*) ;
 void FUNC_18 (struct evhttp_request*,void*) ;
 void FUNC_19 (struct evhttp_request*,void*) ;
 struct evhttp* FUNC_20 (int *,int ,int ) ;
 char* FUNC_21 (size_t const) ;
 int FUNC_22 (char*,char,size_t const) ;
 int VAR_3 ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int) ;

__attribute__((used)) static void
FUNC_25(void *VAR_4, int VAR_5)
{
 struct basic_test_data *VAR_6 = VAR_4;
 ev_uint16_t VAR_7 = 0;
 struct evhttp_connection *VAR_8 = ((void*)0);
 struct evhttp_request *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 const size_t VAR_11 = 1<<20;
 const size_t VAR_12 = (1<<20) * 3;
 void (*VAR_13)(struct evhttp_request *, void *);
 struct evhttp *VAR_14 = FUNC_20(&VAR_7, VAR_6->base, 0);

 VAR_3 = 0;
 VAR_13 = FUNC_18;

 if (VAR_5)
  VAR_13 = FUNC_15;


 FUNC_24(VAR_11 < VAR_12);

 VAR_8 = FUNC_3(VAR_6->base, ((void*)0), "127.0.0.1", VAR_7);
 FUNC_24(VAR_8);

 if (VAR_5)
  FUNC_24(!FUNC_5(VAR_8, VAR_0));


 FUNC_6(VAR_8, "127.0.0.1");






 VAR_9 = FUNC_11(FUNC_15, VAR_6->base);
 FUNC_24(VAR_9);

 VAR_10 = FUNC_21(VAR_12);
 FUNC_22(VAR_10, 'a', VAR_12);
 VAR_10[VAR_12 - 1] = '\0';

 FUNC_13(VAR_14, VAR_12 - 1);
 FUNC_2(FUNC_10(VAR_9), "Host", "somehost");
 FUNC_2(FUNC_10(VAR_9), "Longheader", VAR_10);

 if (FUNC_8(VAR_8, VAR_9, VAR_1, "/?arg=val") == -1) {
  FUNC_23("Couldn't make request");
 }
 FUNC_1(VAR_6->base);

 VAR_9 = FUNC_11(FUNC_15, VAR_6->base);
 FUNC_24(VAR_9);
 FUNC_2(FUNC_10(VAR_9), "Host", "somehost");


 if (FUNC_8(VAR_8, VAR_9, VAR_1, VAR_10) == -1) {
  FUNC_23("Couldn't make request");
 }
 FUNC_1(VAR_6->base);


 if (VAR_5)
  VAR_13 = FUNC_19;

 FUNC_12(VAR_14, VAR_12 - 2);
 VAR_9 = FUNC_11(VAR_13, VAR_6->base);
 FUNC_2(FUNC_10(VAR_9), "Host", "somehost");
 FUNC_0(FUNC_9(VAR_9), "%s", VAR_10);
 if (FUNC_8(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_23("Couldn't make request");
 }
 FUNC_1(VAR_6->base);

 VAR_9 = FUNC_11(FUNC_19, VAR_6->base);
 FUNC_2(FUNC_10(VAR_9), "Host", "somehost");
 FUNC_2(FUNC_10(VAR_9), "Expect", "100-continue");
 FUNC_0(FUNC_9(VAR_9), "%s", VAR_10);
 if (FUNC_8(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_23("Couldn't make request");
 }
 FUNC_1(VAR_6->base);

 VAR_9 = FUNC_11(FUNC_16, VAR_6->base);
 FUNC_2(FUNC_10(VAR_9), "Host", "somehost");
 FUNC_2(FUNC_10(VAR_9), "Expect", "100-continue");
 VAR_10[VAR_11] = '\0';
 FUNC_0(FUNC_9(VAR_9), "%s", VAR_10);
 if (FUNC_8(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_23("Couldn't make request");
 }
 FUNC_1(VAR_6->base);


 if (VAR_5)
  VAR_13 = FUNC_17;

 VAR_9 = FUNC_11(VAR_13, VAR_6->base);
 FUNC_2(FUNC_10(VAR_9), "Host", "somehost");
 FUNC_2(FUNC_10(VAR_9), "Expect", "101-continue");
 FUNC_0(FUNC_9(VAR_9), "%s", VAR_10);
 if (FUNC_8(VAR_8, VAR_9, VAR_2, "/") == -1) {
  FUNC_23("Couldn't make request");
 }
 FUNC_1(VAR_6->base);

 VAR_3 = 1;
 end:
 if (VAR_8)
  FUNC_4(VAR_8);
 if (VAR_14)
  FUNC_7(VAR_14);
 if (VAR_10)
  FUNC_14(VAR_10);
}

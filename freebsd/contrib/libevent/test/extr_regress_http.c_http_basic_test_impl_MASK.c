
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct evhttp {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int evutil_socket_t ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*,int ,int ,int ,int ) ;
 int FUNC_2 (struct bufferevent*,char const*,int ) ;
 struct bufferevent* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int ,struct bufferevent*,struct timeval*) ;
 int FUNC_6 (struct evhttp*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct timeval*) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct evhttp*,int *,int) ;
 int VAR_3 ;
 int FUNC_12 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct evhttp* FUNC_13 (int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (char const*) ;
 int VAR_8 ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(void *VAR_9, int VAR_10)
{
 struct basic_test_data *VAR_11 = VAR_9;
 struct timeval VAR_12;
 struct bufferevent *VAR_13 = ((void*)0);
 evutil_socket_t VAR_14;
 const char *VAR_15;
 ev_uint16_t VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = VAR_10 ? VAR_1 : 0;
 struct evhttp *VAR_19 = FUNC_13(&VAR_16, VAR_11->base, VAR_18);

 VAR_2 = VAR_11->base;
 VAR_8 = 0;


 if (FUNC_11(VAR_19, &VAR_17, VAR_18) == -1) {
  FUNC_10(VAR_7, "FAILED (bind)\n");
  FUNC_9(1);
 }

 VAR_14 = FUNC_12("127.0.0.1", VAR_16);


 VAR_13 = FUNC_3(VAR_11->base, VAR_14, VAR_10);
 FUNC_1(VAR_13, VAR_5, VAR_6,
     VAR_4, VAR_11->base);


 VAR_15 =
     "GET /test HTTP/1.1\r\n"
     "Host: some";

 FUNC_2(VAR_13, VAR_15, FUNC_14(VAR_15));
 FUNC_8(&VAR_12);
 VAR_12.tv_usec = 100000;
 FUNC_5(VAR_11->base,
     -1, VAR_0, VAR_3, VAR_13, &VAR_12);

 FUNC_4(VAR_11->base);

 FUNC_15(VAR_8 == 3);


 FUNC_0(VAR_13);
 FUNC_7(VAR_14);

 VAR_14 = FUNC_12("127.0.0.1", VAR_17);


 VAR_13 = FUNC_3(VAR_11->base, VAR_14, VAR_10);
 FUNC_1(VAR_13, VAR_5, VAR_6,
     VAR_4, VAR_11->base);

 VAR_15 =
     "GET /test HTTP/1.1\r\n"
     "Host: somehost\r\n"
     "Connection: close\r\n"
     "\r\n";

 FUNC_2(VAR_13, VAR_15, FUNC_14(VAR_15));

 FUNC_4(VAR_11->base);

 FUNC_15(VAR_8 == 5);


 FUNC_0(VAR_13);
 FUNC_7(VAR_14);

 VAR_14 = FUNC_12("127.0.0.1", VAR_17);


 VAR_13 = FUNC_3(VAR_11->base, VAR_14, VAR_10);
 FUNC_1(VAR_13, VAR_5, VAR_6,
     VAR_4, VAR_11->base);

 VAR_15 =
     "GET http://somehost.net/test HTTP/1.1\r\n"
     "Host: somehost\r\n"
     "Connection: close\r\n"
     "\r\n";

 FUNC_2(VAR_13, VAR_15, FUNC_14(VAR_15));

 FUNC_4(VAR_11->base);

 FUNC_15(VAR_8 == 7);

 FUNC_6(VAR_19);
 end:
 if (VAR_13)
  FUNC_0(VAR_13);
}

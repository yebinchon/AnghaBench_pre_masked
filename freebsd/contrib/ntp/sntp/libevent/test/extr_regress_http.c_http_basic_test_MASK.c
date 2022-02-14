
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int evutil_socket_t ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*,int ,int ,int ,int ) ;
 struct bufferevent* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct bufferevent*,char const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ,int ,struct bufferevent*,struct timeval*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct timeval*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*) ;
 int VAR_1 ;
 int FUNC_11 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_12 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (char const*) ;
 int VAR_7 ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(void *VAR_8)
{
 struct basic_test_data *VAR_9 = VAR_8;
 struct timeval VAR_10;
 struct bufferevent *VAR_11 = ((void*)0);
 evutil_socket_t VAR_12;
 const char *VAR_13;
 ev_uint16_t VAR_14 = 0, VAR_15 = 0;

 VAR_7 = 0;

 VAR_1 = FUNC_13(&VAR_14, VAR_9->base, 0);


 if (FUNC_11(VAR_1, &VAR_15, 0) == -1) {
  FUNC_10(VAR_6, "FAILED (bind)\n");
  FUNC_9(1);
 }

 VAR_12 = FUNC_12("127.0.0.1", VAR_14);


 VAR_11 = FUNC_2(VAR_9->base, VAR_12, 0);
 FUNC_1(VAR_11, VAR_4, VAR_5,
     VAR_3, VAR_9->base);


 VAR_13 =
     "GET /test HTTP/1.1\r\n"
     "Host: some";

 FUNC_3(VAR_11, VAR_13, FUNC_14(VAR_13));
 FUNC_8(&VAR_10);
 VAR_10.tv_usec = 10000;
 FUNC_5(VAR_9->base,
     -1, VAR_0, VAR_2, VAR_11, &VAR_10);

 FUNC_4(VAR_9->base);

 FUNC_15(VAR_7 == 3);


 FUNC_0(VAR_11);
 FUNC_7(VAR_12);

 VAR_12 = FUNC_12("127.0.0.1", VAR_15);


 VAR_11 = FUNC_2(VAR_9->base, VAR_12, 0);
 FUNC_1(VAR_11, VAR_4, VAR_5,
     VAR_3, VAR_9->base);

 VAR_13 =
     "GET /test HTTP/1.1\r\n"
     "Host: somehost\r\n"
     "Connection: close\r\n"
     "\r\n";

 FUNC_3(VAR_11, VAR_13, FUNC_14(VAR_13));

 FUNC_4(VAR_9->base);

 FUNC_15(VAR_7 == 5);


 FUNC_0(VAR_11);
 FUNC_7(VAR_12);

 VAR_12 = FUNC_12("127.0.0.1", VAR_15);


 VAR_11 = FUNC_2(VAR_9->base, VAR_12, 0);
 FUNC_1(VAR_11, VAR_4, VAR_5,
     VAR_3, VAR_9->base);

 VAR_13 =
     "GET http://somehost.net/test HTTP/1.1\r\n"
     "Host: somehost\r\n"
     "Connection: close\r\n"
     "\r\n";

 FUNC_3(VAR_11, VAR_13, FUNC_14(VAR_13));

 FUNC_4(VAR_9->base);

 FUNC_15(VAR_7 == 7);

 FUNC_6(VAR_1);
 end:
 if (VAR_11)
  FUNC_0(VAR_11);
}

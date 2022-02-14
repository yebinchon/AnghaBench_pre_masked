
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct evhttp {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*,int *,int *,int *,int ) ;
 int FUNC_3 (struct bufferevent*,char const*,int ) ;
 struct bufferevent* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int ,struct bufferevent*,struct timeval*) ;
 int FUNC_7 (struct evhttp*) ;
 int FUNC_8 (struct timeval*) ;
 int VAR_3 ;
 int FUNC_9 (char*,int ) ;
 struct evhttp* FUNC_10 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_11 (char const*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_12(void *VAR_6, int VAR_7)
{
 struct basic_test_data *VAR_8 = VAR_6;
 ev_uint16_t VAR_9 = 0;
 struct bufferevent *VAR_10 = ((void*)0);
 struct timeval VAR_11;
 int VAR_12;
 const char *VAR_13;
 struct evhttp *VAR_14 = FUNC_10(&VAR_9, VAR_8->base, VAR_7 ? VAR_2 : 0);

 VAR_5 = 0;
 VAR_3 = VAR_8->base;

 VAR_12 = FUNC_9("127.0.0.1", VAR_9);
 VAR_10 = FUNC_4(VAR_8->base, VAR_12, 0);
 FUNC_2(VAR_10, ((void*)0), ((void*)0), ((void*)0), VAR_8->base);
 FUNC_0(VAR_10, VAR_0);

 VAR_13 =
     "GET /large HTTP/1.1\r\n"
     "Host: somehost\r\n"
     "\r\n";

 FUNC_3(VAR_10, VAR_13, FUNC_11(VAR_13));
 FUNC_8(&VAR_11);
 VAR_11.tv_usec = 10000;
 FUNC_6(VAR_8->base, -1, VAR_1, VAR_4, VAR_10, &VAR_11);

 FUNC_5(VAR_8->base);

 if (VAR_10)
  FUNC_1(VAR_10);
 if (VAR_14)
  FUNC_7(VAR_14);
}

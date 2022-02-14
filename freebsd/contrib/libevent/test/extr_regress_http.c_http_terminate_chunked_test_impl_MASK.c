
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int terminate_state ;
struct timeval {int tv_usec; } ;
struct terminate_state {scalar_t__ gotclosecb; int oneshot; struct bufferevent* bev; scalar_t__ fd; int base; } ;
struct evhttp {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*,int ,int ,int ,int ) ;
 struct bufferevent* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct bufferevent*,char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ,struct terminate_state*,struct timeval*) ;
 int FUNC_5 (struct evhttp*,char*) ;
 int FUNC_6 (struct evhttp*) ;
 scalar_t__ FUNC_7 (struct evhttp*,char*,int ,struct terminate_state*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct timeval*) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int VAR_1 ;
 struct evhttp* FUNC_11 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_12 (struct terminate_state*,int ,int) ;
 int FUNC_13 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(void *VAR_7, int VAR_8)
{
 struct basic_test_data *VAR_9 = VAR_7;
 struct bufferevent *VAR_10 = ((void*)0);
 struct timeval VAR_11;
 const char *VAR_12;
 ev_uint16_t VAR_13 = 0;
 evutil_socket_t VAR_14 = -1;
 struct terminate_state VAR_15;
 struct evhttp *VAR_16 = FUNC_11(&VAR_13, VAR_9->base, 0);

 VAR_6 = 0;

 FUNC_5(VAR_16, "/test");
 FUNC_14(FUNC_7(VAR_16, "/test",
  VAR_3, &VAR_15) == 0);

 VAR_14 = FUNC_10("127.0.0.1", VAR_13);


 VAR_10 = FUNC_1(VAR_9->base, VAR_14, 0);
 FUNC_0(VAR_10, VAR_5, VAR_2,
     VAR_1, VAR_9->base);

 FUNC_12(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.base = VAR_9->base;
 VAR_15.fd = VAR_14;
 VAR_15.bev = VAR_10;
 VAR_15.gotclosecb = 0;
 VAR_15.oneshot = VAR_8;


 VAR_12 =
     "GET /test HTTP/1.1\r\n"
     "Host: some\r\n\r\n";

 FUNC_2(VAR_10, VAR_12, FUNC_13(VAR_12));
 FUNC_9(&VAR_11);
 VAR_11.tv_usec = 10000;
 FUNC_4(VAR_9->base, -1, VAR_0, VAR_4, &VAR_15,
     &VAR_11);

 FUNC_3(VAR_9->base);

 if (VAR_15.gotclosecb == 0)
  VAR_6 = 0;

 end:
 if (VAR_14 >= 0)
  FUNC_8(VAR_14);
 if (VAR_16)
  FUNC_6(VAR_16);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct event_base {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct event_base*,int,int ,int ,struct evhttp_connection*,struct timeval*) ;
 struct event_base* FUNC_1 (struct evhttp_connection*) ;
 scalar_t__ FUNC_2 (struct evhttp_request*) ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct evhttp_request *VAR_3, void *VAR_4)
{
 struct evhttp_connection *VAR_5 = VAR_4;
 struct event_base *VAR_6 = FUNC_1(VAR_5);
 struct timeval VAR_7;

 if (VAR_3 != ((void*)0) && FUNC_2(VAR_3) != VAR_1) {
  FUNC_4("Failed");
 }

 FUNC_3(&VAR_7);
 VAR_7.tv_sec = 0;
 VAR_7.tv_usec = 600000;


 FUNC_0(VAR_6, -1, VAR_0, VAR_2, VAR_5, &VAR_7);
 end:
 ;
}

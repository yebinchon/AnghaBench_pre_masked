
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct evhttp_request {int cb_arg; int (* cb ) (struct evhttp_request*,int ) ;int * evcon; } ;
struct evcon_requestq {int dummy; } ;
struct evhttp_connection {scalar_t__ retry_max; scalar_t__ retry_cnt; struct evcon_requestq requests; int retry_ev; int base; struct timeval initial_retry_timeout; } ;


 struct evhttp_request* FUNC_0 (struct evcon_requestq*) ;
 int FUNC_1 (struct evcon_requestq*) ;
 int FUNC_2 (struct evcon_requestq*,struct evhttp_request*,int ) ;
 int FUNC_3 (struct evcon_requestq*,struct evhttp_request*,int ) ;
 int FUNC_4 (int *,struct timeval*) ;
 int FUNC_5 (struct evhttp_connection*) ;
 int VAR_0 ;
 int FUNC_6 (struct evhttp_request*) ;
 int FUNC_7 (int *,int ,int ,struct evhttp_connection*) ;
 int VAR_1 ;
 int FUNC_8 (struct evhttp_request*,int ) ;

__attribute__((used)) static void
FUNC_9(struct evhttp_connection *VAR_2)
{
 struct evcon_requestq VAR_3;

 FUNC_5(VAR_2);
 if (VAR_2->retry_max < 0 || VAR_2->retry_cnt < VAR_2->retry_max) {
  struct timeval VAR_4 = VAR_2->initial_retry_timeout;
  int VAR_5;
  FUNC_7(&VAR_2->retry_ev, VAR_2->base, VAR_0, VAR_2);

  for (VAR_5=0; VAR_5 < VAR_2->retry_cnt; ++VAR_5) {
   VAR_4.tv_usec *= 2;
   if (VAR_4.tv_usec > 1000000) {
    VAR_4.tv_usec -= 1000000;
    VAR_4.tv_sec += 1;
   }
   VAR_4.tv_sec *= 2;
   if (VAR_4.tv_sec > 3600) {
    VAR_4.tv_sec = 3600;
    VAR_4.tv_usec = 0;
   }
  }
  FUNC_4(&VAR_2->retry_ev, &VAR_4);
  VAR_2->retry_cnt++;
  return;
 }







 FUNC_1(&VAR_3);
 while (FUNC_0(&VAR_2->requests) != ((void*)0)) {
  struct evhttp_request *VAR_6 = FUNC_0(&VAR_2->requests);
  FUNC_3(&VAR_2->requests, VAR_6, VAR_1);
  FUNC_2(&VAR_3, VAR_6, VAR_1);
 }


 while (FUNC_0(&VAR_3) != ((void*)0)) {
  struct evhttp_request *VAR_7 = FUNC_0(&VAR_3);
  FUNC_3(&VAR_3, VAR_7, VAR_1);
  VAR_7->evcon = ((void*)0);


  VAR_7->cb(VAR_7, VAR_7->cb_arg);
  FUNC_6(VAR_7);
 }
}

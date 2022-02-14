
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct gaic_request_status {int cancel_event; int request; struct evdns_base* dns_base; struct event_base* base; int magic; } ;
struct event_base {int dummy; } ;
struct evdns_base {int dummy; } ;


 int VAR_0 ;
 struct gaic_request_status* FUNC_0 (int,int) ;
 int FUNC_1 (struct evdns_base*,char*,char*,int *,int ,struct gaic_request_status*) ;
 int FUNC_2 (int *,struct timeval*) ;
 int FUNC_3 (int *,struct event_base*,int,int ,int ,struct gaic_request_status*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct gaic_request_status*) ;

__attribute__((used)) static void
FUNC_5(struct event_base *VAR_4, struct evdns_base *VAR_5)
{
 struct gaic_request_status *VAR_6 = FUNC_0(1, sizeof(*VAR_6));
 FUNC_4(VAR_6);
 struct timeval VAR_7 = { 0, 10000 };
 VAR_6->magic = VAR_0;
 VAR_6->base = VAR_4;
 VAR_6->dns_base = VAR_5;
 FUNC_3(&VAR_6->cancel_event, VAR_4, -1, 0, VAR_1,
     VAR_6);
 VAR_6->request = FUNC_1(VAR_5,
     "foobar.bazquux.example.com", "80", ((void*)0), VAR_2,
     VAR_6);
 FUNC_2(&VAR_6->cancel_event, &VAR_7);
 ++VAR_3;
}

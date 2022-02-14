
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct evdns_request {int * current_req; } ;
struct evdns_base {int dummy; } ;
typedef int evdns_callback_type ;


 int VAR_0 ;
 int FUNC_0 (struct evdns_base*) ;
 int VAR_1 ;
 int FUNC_1 (struct evdns_base*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char const*) ;
 struct evdns_request* FUNC_3 (int,int) ;
 int FUNC_4 (struct evdns_request*) ;
 struct request* FUNC_5 (struct evdns_base*,struct evdns_request*,int ,char const*,int,int ,void*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct evdns_base*,struct evdns_request*,int ,char const*,int,int ,void*) ;

struct evdns_request *
FUNC_8(struct evdns_base *VAR_3,
    const char *VAR_4, int VAR_5,
    evdns_callback_type VAR_6, void *VAR_7)
{
 struct evdns_request *VAR_8;
 struct request *VAR_9;
 FUNC_2(VAR_1, "Resolve requested for %s", VAR_4);
 VAR_8 = FUNC_3(1, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_3);
 if (VAR_5 & VAR_0) {
  VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_2, VAR_4, VAR_5,
      VAR_6, VAR_7);
  if (VAR_9)
   FUNC_6(VAR_9);
 } else {
  FUNC_7(VAR_3, VAR_8, VAR_2, VAR_4, VAR_5,
      VAR_6, VAR_7);
 }
 if (VAR_8->current_req == ((void*)0)) {
  FUNC_4(VAR_8);
  VAR_8 = ((void*)0);
 }
 FUNC_1(VAR_3);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int trans_id; } ;
struct evdns_base {int n_req_heads; int global_max_requests_inflight; struct request** req_heads; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct request*,struct request**) ;
 int FUNC_3 (struct request*,struct request**) ;
 struct request** FUNC_4 (int,int) ;
 int FUNC_5 (struct request**) ;

__attribute__((used)) static int
FUNC_6(struct evdns_base *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->n_req_heads, VAR_3;
 struct request **VAR_4 = VAR_0->req_heads, **VAR_5, *VAR_6;
 int VAR_7;

 FUNC_0(VAR_0);
 if (VAR_1 < 1)
  VAR_1 = 1;
 VAR_3 = (VAR_1+4) / 5;
 FUNC_1(VAR_3 > 0);
 VAR_5 = FUNC_4(VAR_3, sizeof(struct request*));
 if (!VAR_5)
  return (-1);
 if (VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
   while (VAR_4[VAR_7]) {
    VAR_6 = VAR_4[VAR_7];
    FUNC_3(VAR_6, &VAR_4[VAR_7]);
    FUNC_2(VAR_6, &VAR_5[VAR_6->trans_id % VAR_3]);
   }
  }
  FUNC_5(VAR_4);
 }
 VAR_0->req_heads = VAR_5;
 VAR_0->n_req_heads = VAR_3;
 VAR_0->global_max_requests_inflight = VAR_1;
 return (0);
}

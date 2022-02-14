
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct request {struct request* next; int trans_id; } ;
struct evdns_base {int dummy; } ;


 int FUNC_0 (struct evdns_base*) ;
 struct request* FUNC_1 (struct evdns_base*,int ) ;

__attribute__((used)) static struct request *
FUNC_2(struct evdns_base *VAR_0, u16 VAR_1) {
 struct request *VAR_2 = FUNC_1(VAR_0, VAR_1);
 struct request *const VAR_3 = VAR_2;

 FUNC_0(VAR_0);

 if (VAR_2) {
  do {
   if (VAR_2->trans_id == VAR_1) return VAR_2;
   VAR_2 = VAR_2->next;
  } while (VAR_2 != VAR_3);
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int trans_id ;
struct evdns_base {int dummy; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (int*,int) ;
 int * FUNC_2 (struct evdns_base*,int) ;

__attribute__((used)) static u16
FUNC_3(struct evdns_base *VAR_0) {
 FUNC_0(VAR_0);
 for (;;) {
  u16 VAR_1;
  FUNC_1(&VAR_1, sizeof(VAR_1));

  if (VAR_1 == 0xffff) continue;

  if (FUNC_2(VAR_0, VAR_1) == ((void*)0))
   return VAR_1;
 }
}

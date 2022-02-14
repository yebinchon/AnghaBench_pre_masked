
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_base {int dummy; } ;
typedef int hostname ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (struct evdns_base*,char*) ;
 int FUNC_3 (struct evdns_base*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void
FUNC_5(struct evdns_base *VAR_1) {
 char VAR_2[VAR_0 + 1], *VAR_3;

 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 if (FUNC_1(VAR_2, sizeof(VAR_2))) return;
 VAR_3 = FUNC_4(VAR_2, '.');
 if (!VAR_3) return;
 FUNC_2(VAR_1, VAR_3);
}

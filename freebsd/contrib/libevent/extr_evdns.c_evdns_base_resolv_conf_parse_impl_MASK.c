
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdns_base {TYPE_1__* global_search_state; int server_head; } ;
struct TYPE_2__ {scalar_t__ num_domains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct evdns_base*,char*) ;
 int FUNC_1 (struct evdns_base*,char*) ;
 char* FUNC_2 () ;
 int FUNC_3 (struct evdns_base*,int) ;
 int FUNC_4 (char const* const,char**,size_t*,int ) ;
 int FUNC_5 (int ,char*,char const* const) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct evdns_base*,char*,int) ;
 int FUNC_8 (struct evdns_base*) ;
 char* FUNC_9 (char*,char) ;

__attribute__((used)) static int
FUNC_10(struct evdns_base *VAR_4, int VAR_5, const char *const VAR_6) {
 size_t VAR_7;
 char *VAR_8;
 char *VAR_9;
 int VAR_10 = 0;

 FUNC_5(VAR_3, "Parsing resolv.conf file %s", VAR_6);

 if (VAR_5 & VAR_0) {
  char *VAR_11 = FUNC_2();
  FUNC_0(VAR_4, VAR_11);
  if (VAR_11)
   FUNC_6(VAR_11);
 }

 if ((VAR_10 = FUNC_4(VAR_6, &VAR_8, &VAR_7, 0)) < 0) {
  if (VAR_10 == -1) {

   FUNC_3(VAR_4, VAR_5);
   return 1;
  } else {
   return 2;
  }
 }

 VAR_9 = VAR_8;
 for (;;) {
  char *const VAR_12 = FUNC_9(VAR_9, '\n');
  if (!VAR_12) {
   FUNC_7(VAR_4, VAR_9, VAR_5);
   break;
  } else {
   *VAR_12 = 0;
   FUNC_7(VAR_4, VAR_9, VAR_5);
   VAR_9 = VAR_12 + 1;
  }
 }

 if (!VAR_4->server_head && (VAR_5 & VAR_1)) {

  FUNC_1(VAR_4, "127.0.0.1");
  VAR_10 = 6;
 }
 if (VAR_5 & VAR_2 && (!VAR_4->global_search_state || VAR_4->global_search_state->num_domains == 0)) {
  FUNC_8(VAR_4);
 }

 FUNC_6(VAR_8);
 return VAR_10;
}

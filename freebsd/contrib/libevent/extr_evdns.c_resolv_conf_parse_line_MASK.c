
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdns_base {int dummy; } ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct evdns_base*,char const* const) ;
 int FUNC_2 (struct evdns_base*,char const*,char const*,int) ;
 int FUNC_3 (struct evdns_base*,char const*) ;
 int FUNC_4 (struct evdns_base*) ;
 int FUNC_5 (struct evdns_base*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char* const,char*) ;
 char* FUNC_8 (char* const,char const* const,char**) ;

__attribute__((used)) static void
FUNC_9(struct evdns_base *VAR_3, char *const VAR_4, int VAR_5) {
 char *VAR_6;
 static const char *const VAR_7 = " \t";



 char *const VAR_8 = FUNC_8(VAR_4, VAR_7, &VAR_6);
 FUNC_0(VAR_3);
 if (!VAR_8) return;

 if (!FUNC_7(VAR_8, "nameserver") && (VAR_5 & VAR_0)) {
  const char *const VAR_9 = FUNC_8(((void*)0), VAR_7, &VAR_6);

  if (VAR_9)
   FUNC_1(VAR_3, VAR_9);
 } else if (!FUNC_7(VAR_8, "domain") && (VAR_5 & VAR_1)) {
  const char *const VAR_10 = FUNC_8(((void*)0), VAR_7, &VAR_6);
  if (VAR_10) {
   FUNC_4(VAR_3);
   FUNC_3(VAR_3, VAR_10);
  }
 } else if (!FUNC_7(VAR_8, "search") && (VAR_5 & VAR_1)) {
  const char *VAR_11;
  FUNC_4(VAR_3);

  while ((VAR_11 = FUNC_8(((void*)0), VAR_7, &VAR_6))) {
   FUNC_3(VAR_3, VAR_11);
  }
  FUNC_5(VAR_3);
 } else if (!FUNC_7(VAR_8, "options")) {
  const char *VAR_12;
  while ((VAR_12 = FUNC_8(((void*)0), VAR_7, &VAR_6))) {
   const char *VAR_13 = FUNC_6(VAR_12, ':');
   FUNC_2(VAR_3, VAR_12, VAR_13 ? VAR_13+1 : "", VAR_5);
  }
 }

}

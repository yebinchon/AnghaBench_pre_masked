
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct evdns_base {int dummy; } ;
typedef int ss ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (struct evdns_base*,struct sockaddr*,int) ;
 scalar_t__ FUNC_3 (char const*,struct sockaddr*,int*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (struct sockaddr*) ;
 int FUNC_6 (struct sockaddr*,int) ;

int
FUNC_7(struct evdns_base *VAR_1, const char *VAR_2) {
 struct sockaddr_storage VAR_3;
 struct sockaddr *VAR_4;
 int VAR_5 = sizeof(VAR_3);
 int VAR_6;
 if (FUNC_3(VAR_2, (struct sockaddr *)&VAR_3,
  &VAR_5)) {
  FUNC_4(VAR_0, "Unable to parse nameserver address %s",
   VAR_2);
  return 4;
 }
 VAR_4 = (struct sockaddr *) &VAR_3;
 if (FUNC_5(VAR_4) == 0)
  FUNC_6(VAR_4, 53);

 FUNC_0(VAR_1);
 VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
 FUNC_1(VAR_1);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int dummy; } ;
struct local_zone {int lock; } ;
struct config_file {int unblock_lan_zones; scalar_t__ local_zones_disable_default; } ;


 int VAR_0 ;
 int FUNC_0 (struct local_zones*,struct config_file*,char const*) ;
 char** VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct local_zone*,char*) ;
 struct local_zone* FUNC_4 (struct local_zones*,char*,char*,int ) ;
 int FUNC_5 (struct local_zones*,char*) ;
 int FUNC_6 (struct config_file*,char*) ;

int FUNC_7(struct local_zones* VAR_2, struct config_file* VAR_3)
{
 struct local_zone* VAR_4;
 const char** VAR_5;


 if(VAR_3->local_zones_disable_default)
  return 1;






 if(!FUNC_5(VAR_2, "localhost.") &&
  !FUNC_6(VAR_3, "localhost.")) {
  if(!(VAR_4=FUNC_4(VAR_2, "localhost.", "redirect",
   VAR_0)) ||
     !FUNC_3(VAR_4,
   "localhost. 10800 IN NS localhost.") ||
     !FUNC_3(VAR_4,
   "localhost. 10800 IN SOA localhost. nobody.invalid. "
   "1 3600 1200 604800 10800") ||
     !FUNC_3(VAR_4,
   "localhost. 10800 IN A 127.0.0.1") ||
     !FUNC_3(VAR_4,
   "localhost. 10800 IN AAAA ::1")) {
   FUNC_2("out of memory adding default zone");
   if(VAR_4) { FUNC_1(&VAR_4->lock); }
   return 0;
  }
  FUNC_1(&VAR_4->lock);
 }

 if(!FUNC_5(VAR_2, "127.in-addr.arpa.") &&
  !FUNC_6(VAR_3, "127.in-addr.arpa.")) {
  if(!(VAR_4=FUNC_4(VAR_2, "127.in-addr.arpa.", "static",
   VAR_0)) ||
     !FUNC_3(VAR_4,
   "127.in-addr.arpa. 10800 IN NS localhost.") ||
     !FUNC_3(VAR_4,
   "127.in-addr.arpa. 10800 IN SOA localhost. "
   "nobody.invalid. 1 3600 1200 604800 10800") ||
     !FUNC_3(VAR_4,
   "1.0.0.127.in-addr.arpa. 10800 IN PTR localhost.")) {
   FUNC_2("out of memory adding default zone");
   if(VAR_4) { FUNC_1(&VAR_4->lock); }
   return 0;
  }
  FUNC_1(&VAR_4->lock);
 }

 if(!FUNC_5(VAR_2, "1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa.") &&
  !FUNC_6(VAR_3, "1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa.")) {
  if(!(VAR_4=FUNC_4(VAR_2, "1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa.", "static",
   VAR_0)) ||
     !FUNC_3(VAR_4,
   "1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa. 10800 IN NS localhost.") ||
     !FUNC_3(VAR_4,
   "1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa. 10800 IN SOA localhost. "
   "nobody.invalid. 1 3600 1200 604800 10800") ||
     !FUNC_3(VAR_4,
   "1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa. 10800 IN PTR localhost.")) {
   FUNC_2("out of memory adding default zone");
   if(VAR_4) { FUNC_1(&VAR_4->lock); }
   return 0;
  }
  FUNC_1(&VAR_4->lock);
 }

 if(!FUNC_0(VAR_2, VAR_3, "onion.")) {
  FUNC_2("out of memory adding default zone");
  return 0;
 }

 if(!FUNC_0(VAR_2, VAR_3, "test.")) {
  FUNC_2("out of memory adding default zone");
  return 0;
 }

 if(!FUNC_0(VAR_2, VAR_3, "invalid.")) {
  FUNC_2("out of memory adding default zone");
  return 0;
 }

 if(!VAR_3->unblock_lan_zones) {
  for(VAR_5 = VAR_1; *VAR_5; VAR_5++) {
   if(!FUNC_0(VAR_2, VAR_3, *VAR_5)) {
    FUNC_2("out of memory adding default zone");
    return 0;
   }
  }
 }
 return 1;
}

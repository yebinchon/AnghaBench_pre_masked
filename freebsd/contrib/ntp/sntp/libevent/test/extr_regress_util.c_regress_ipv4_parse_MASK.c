
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int written ;
struct ipv4_entry {scalar_t__ status; scalar_t__ res; scalar_t__ addr; } ;
struct in_addr {int s_addr; } ;


 int AF_INET ;
 scalar_t__ BAD ;
 scalar_t__ CANONICAL ;
 int TT_FAIL (char*) ;
 char* evutil_inet_ntop (int ,struct in_addr*,char*,int) ;
 int evutil_inet_pton (int ,scalar_t__,struct in_addr*) ;
 struct ipv4_entry* ipv4_entries ;
 scalar_t__ ntohl (int ) ;
 scalar_t__ strcmp (char*,scalar_t__) ;

__attribute__((used)) static void
regress_ipv4_parse(void *ptr)
{
 int i;
 for (i = 0; ipv4_entries[i].addr; ++i) {
  char written[128];
  struct ipv4_entry *ent = &ipv4_entries[i];
  struct in_addr in;
  int r;
  r = evutil_inet_pton(AF_INET, ent->addr, &in);
  if (r == 0) {
   if (ent->status != BAD) {
    TT_FAIL(("%s did not parse, but it's a good address!",
     ent->addr));
   }
   continue;
  }
  if (ent->status == BAD) {
   TT_FAIL(("%s parsed, but we expected an error", ent->addr));
   continue;
  }
  if (ntohl(in.s_addr) != ent->res) {
   TT_FAIL(("%s parsed to %lx, but we expected %lx", ent->addr,
    (unsigned long)ntohl(in.s_addr),
    (unsigned long)ent->res));
   continue;
  }
  if (ent->status == CANONICAL) {
   const char *w = evutil_inet_ntop(AF_INET, &in, written,
            sizeof(written));
   if (!w) {
    TT_FAIL(("Tried to write out %s; got NULL.", ent->addr));
    continue;
   }
   if (strcmp(written, ent->addr)) {
    TT_FAIL(("Tried to write out %s; got %s",
     ent->addr, written));
    continue;
   }
  }

 }

}

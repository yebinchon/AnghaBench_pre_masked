
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trust_anchor {TYPE_1__* autr; int dclass; int namelen; int name; } ;
struct autr_ta {scalar_t__ s; scalar_t__ last_change; scalar_t__ pending_count; int rr_len; int rr; int dname_len; struct autr_ta* next; } ;
struct TYPE_2__ {struct autr_ta* keys; scalar_t__ retry_time; scalar_t__ query_interval; scalar_t__ query_failed; scalar_t__ next_probe_time; scalar_t__ last_success; scalar_t__ last_queried; scalar_t__ revoked; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (scalar_t__*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int *,char*,int ,int ,int ) ;
 char* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(FILE* VAR_4, char* VAR_5, struct trust_anchor* VAR_6)
{
 char VAR_7[32];
 struct autr_ta* VAR_8;
 char* VAR_9;


 if(FUNC_1(VAR_4, "; autotrust trust anchor file\n") < 0) {
  FUNC_3("could not write to %s: %s", VAR_5, FUNC_7(VAR_3));
  return 0;
 }
 if(VAR_6->autr->revoked) {
  if(FUNC_1(VAR_4, ";;REVOKED\n") < 0 ||
     FUNC_1(VAR_4, "; The zone has all keys revoked, and is\n"
   "; considered as if it has no trust anchors.\n"
   "; the remainder of the file is the last probe.\n"
   "; to restart the trust anchor, overwrite this file.\n"
   "; with one containing valid DNSKEYs or DSes.\n") < 0) {
     FUNC_3("could not write to %s: %s", VAR_5, FUNC_7(VAR_3));
     return 0;
  }
 }
 if(!FUNC_4(VAR_4, VAR_5, VAR_6->name, VAR_6->namelen, VAR_6->dclass)) {
  return 0;
 }
 if(FUNC_1(VAR_4, ";;last_queried: %u ;;%s",
  (unsigned int)VAR_6->autr->last_queried,
  FUNC_0(&(VAR_6->autr->last_queried), VAR_7)) < 0 ||
    FUNC_1(VAR_4, ";;last_success: %u ;;%s",
  (unsigned int)VAR_6->autr->last_success,
  FUNC_0(&(VAR_6->autr->last_success), VAR_7)) < 0 ||
    FUNC_1(VAR_4, ";;next_probe_time: %u ;;%s",
  (unsigned int)VAR_6->autr->next_probe_time,
  FUNC_0(&(VAR_6->autr->next_probe_time), VAR_7)) < 0 ||
    FUNC_1(VAR_4, ";;query_failed: %d\n", (int)VAR_6->autr->query_failed)<0
    || FUNC_1(VAR_4, ";;query_interval: %d\n",
    (int)VAR_6->autr->query_interval) < 0 ||
    FUNC_1(VAR_4, ";;retry_time: %d\n", (int)VAR_6->autr->retry_time) < 0) {
  FUNC_3("could not write to %s: %s", VAR_5, FUNC_7(VAR_3));
  return 0;
 }


 for(VAR_8=VAR_6->autr->keys; VAR_8; VAR_8=VAR_8->next) {

  if(VAR_8->s == VAR_1)
   continue;
  if(VAR_8->s == VAR_0)
   continue;

  if(FUNC_6(VAR_8->rr, VAR_8->rr_len, VAR_8->dname_len)
   != VAR_2)
   continue;
  VAR_9 = FUNC_5(VAR_8->rr, VAR_8->rr_len);
  if(!VAR_9 || !VAR_9[0]) {
   FUNC_2(VAR_9);
   FUNC_3("malloc failure writing %s", VAR_5);
   return 0;
  }
  VAR_9[FUNC_8(VAR_9)-1] = 0;
  if(FUNC_1(VAR_4, "%s ;;state=%d [%s] ;;count=%d "
   ";;lastchange=%u ;;%s", VAR_9, (int)VAR_8->s,
   FUNC_9(VAR_8->s), (int)VAR_8->pending_count,
   (unsigned int)VAR_8->last_change,
   FUNC_0(&(VAR_8->last_change), VAR_7)) < 0) {
     FUNC_3("could not write to %s: %s", VAR_5, FUNC_7(VAR_3));
     FUNC_2(VAR_9);
     return 0;
  }
  FUNC_2(VAR_9);
 }
 return 1;
}

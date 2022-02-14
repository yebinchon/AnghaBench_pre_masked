
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int qclass; } ;
struct module_qstate {int region; scalar_t__ blacklist; TYPE_3__* env; TYPE_2__ qinfo; } ;
struct TYPE_5__ {size_t qname_len; int * qname; } ;
struct iter_qstate {struct delegpt* dp; TYPE_1__ qchase; scalar_t__ auth_zone_avoid; } ;
struct delegpt {int auth_dp; int namelabs; int namelen; int name; } ;
struct auth_zone {int lock; int namelabs; int namelen; scalar_t__ fallback_enabled; int name; scalar_t__ for_upstream; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {TYPE_4__* auth_zones; } ;


 scalar_t__ VAR_0 ;
 struct auth_zone* FUNC_0 (TYPE_4__*,int *,size_t,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct module_qstate*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__,char*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_11(struct module_qstate* VAR_2, struct iter_qstate* VAR_3,
 uint8_t* VAR_4, size_t VAR_5)
{
 struct auth_zone* VAR_6;
 if(VAR_3->auth_zone_avoid)
  return 1;
 if(!VAR_4) {
  VAR_4 = VAR_3->qchase.qname;
  VAR_5 = VAR_3->qchase.qname_len;
 }
 FUNC_4(&VAR_2->env->auth_zones->lock);
 VAR_6 = FUNC_0(VAR_2->env->auth_zones, VAR_4, VAR_5,
  VAR_2->qinfo.qclass);
 if(!VAR_6) {
  FUNC_5(&VAR_2->env->auth_zones->lock);
  return 1;
 }
 FUNC_4(&VAR_6->lock);
 FUNC_5(&VAR_2->env->auth_zones->lock);
 if(VAR_6->for_upstream) {
  if(VAR_3->dp && FUNC_7(VAR_6->name, VAR_3->dp->name) == 0
   && VAR_3->dp->auth_dp && VAR_2->blacklist &&
   VAR_6->fallback_enabled) {


   if(VAR_1>=VAR_0) {
    char VAR_7[255+1];
    FUNC_1(VAR_6->name, VAR_7);
    FUNC_10(VAR_0, "auth_zone %s "
      "fallback because cache blacklisted",
      VAR_7);
   }
   FUNC_5(&VAR_6->lock);
   VAR_3->dp = ((void*)0);
   return 1;
  }
  if(VAR_3->dp==((void*)0) || FUNC_2(VAR_6->name, VAR_3->dp->name)) {
   struct delegpt* VAR_8;
   if(VAR_2->blacklist && VAR_6->fallback_enabled) {



    if(VAR_1>=VAR_0) {
     char VAR_9[255+1];
     FUNC_1(VAR_6->name, VAR_9);
     FUNC_10(VAR_0, "auth_zone %s "
       "fallback because cache blacklisted",
       VAR_9);
    }
    FUNC_5(&VAR_6->lock);
    return 1;
   }
   VAR_8 = (struct delegpt*)FUNC_9(
    VAR_2->region, sizeof(*VAR_8));
   if(!VAR_8) {
    FUNC_6("alloc failure");
    if(VAR_6->fallback_enabled) {
     FUNC_5(&VAR_6->lock);
     return 1;
    }
    FUNC_5(&VAR_6->lock);
    FUNC_3(VAR_2, "malloc failure");
    return 0;
   }
   VAR_8->name = FUNC_8(VAR_2->region,
    VAR_6->name, VAR_6->namelen);
   if(!VAR_8->name) {
    FUNC_6("alloc failure");
    if(VAR_6->fallback_enabled) {
     FUNC_5(&VAR_6->lock);
     return 1;
    }
    FUNC_5(&VAR_6->lock);
    FUNC_3(VAR_2, "malloc failure");
    return 0;
   }
   VAR_8->namelen = VAR_6->namelen;
   VAR_8->namelabs = VAR_6->namelabs;
   VAR_8->auth_dp = 1;
   VAR_3->dp = VAR_8;
  }
 }

 FUNC_5(&VAR_6->lock);
 return 1;
}

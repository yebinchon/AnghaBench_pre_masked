
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct reply_info {scalar_t__ serve_expired_ttl; int qdcount; int security; scalar_t__ ttl; int prefetch_ttl; scalar_t__ flags; } ;
struct TYPE_9__ {int lock; scalar_t__ data; } ;
struct msgreply_entry {TYPE_2__ entry; } ;
struct TYPE_11__ {int qclass; int qtype; int qname_len; int qname; } ;
struct module_qstate {scalar_t__ prefetch_leeway; int query_flags; TYPE_5__ qinfo; TYPE_3__* env; int no_cache_store; } ;
typedef int err ;
struct TYPE_10__ {scalar_t__* now; TYPE_1__* cfg; } ;
struct TYPE_8__ {scalar_t__ serve_expired_ttl; scalar_t__ serve_expired_ttl_reset; scalar_t__ serve_expired; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*,scalar_t__,int ) ;
 int FUNC_4 (struct module_qstate*,int,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*,struct reply_info*,int ,int ,int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct reply_info*,int ,int) ;
 struct msgreply_entry* FUNC_8 (TYPE_3__*,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct module_qstate* VAR_7, int VAR_8, int VAR_9)
{
 if(!VAR_7->no_cache_store) {

  struct reply_info VAR_10;
  if(VAR_7->prefetch_leeway > VAR_4) {
   FUNC_9(VAR_5, "error response for prefetch in cache");

   if(FUNC_3(VAR_7->env, &VAR_7->qinfo,
    VAR_4, VAR_7->query_flags))
    return FUNC_4(VAR_7, VAR_8, VAR_9);

  }
  if(VAR_7->env->cfg->serve_expired) {


   struct msgreply_entry* VAR_11;
   if((VAR_11=FUNC_8(VAR_7->env,
    VAR_7->qinfo.qname, VAR_7->qinfo.qname_len,
    VAR_7->qinfo.qtype, VAR_7->qinfo.qclass,
    VAR_7->query_flags, 0,
    VAR_7->env->cfg->serve_expired_ttl_reset))
    != ((void*)0)) {
    if(VAR_7->env->cfg->serve_expired_ttl_reset) {
     struct reply_info* VAR_12 =
      (struct reply_info*)VAR_11->entry.data;
     if(VAR_12 && *VAR_7->env->now +
      VAR_7->env->cfg->serve_expired_ttl >
      VAR_12->serve_expired_ttl) {
      VAR_12->serve_expired_ttl =
       *VAR_7->env->now +
       VAR_7->env->cfg->serve_expired_ttl;
     }
    }
    FUNC_6(&VAR_11->entry.lock);
    return FUNC_4(VAR_7, VAR_8, VAR_9);
   }



  } else {


   struct msgreply_entry* VAR_13;
   if((VAR_13=FUNC_8(VAR_7->env,
    VAR_7->qinfo.qname, VAR_7->qinfo.qname_len,
    VAR_7->qinfo.qtype, VAR_7->qinfo.qclass,
    VAR_7->query_flags, *VAR_7->env->now, 0))
    != ((void*)0)) {
    struct reply_info* VAR_14 = (struct reply_info*)
     VAR_13->entry.data;
    if(FUNC_0(VAR_14->flags) ==
     VAR_2 ||
     FUNC_0(VAR_14->flags) ==
     VAR_3) {


     FUNC_6(&VAR_13->entry.lock);
     return FUNC_4(VAR_7, VAR_8, VAR_9);
    }
    FUNC_6(&VAR_13->entry.lock);
   }

  }
  FUNC_7(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.flags = (uint16_t)(VAR_0 | VAR_1);
  FUNC_1(VAR_10.flags, VAR_9);
  VAR_10.qdcount = 1;
  VAR_10.ttl = VAR_4;
  VAR_10.prefetch_ttl = FUNC_2(VAR_10.ttl);
  VAR_10.serve_expired_ttl = VAR_4;

  VAR_10.security = VAR_6;
  FUNC_9(VAR_5, "store error response in message cache");
  FUNC_5(VAR_7->env, &VAR_7->qinfo, &VAR_10, 0, 0, 0, ((void*)0),
   VAR_7->query_flags);
 }
 return FUNC_4(VAR_7, VAR_8, VAR_9);
}

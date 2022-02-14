
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u_int ;
struct svc_dg_data {scalar_t__ su_xid; scalar_t__ su_cache; } ;
struct TYPE_10__ {scalar_t__ cb_proc; scalar_t__ cb_vers; scalar_t__ cb_prog; } ;
struct rpc_msg {TYPE_2__ rm_call; } ;
struct netconfig {int dummy; } ;
struct cl_cache {int uc_proc; int uc_vers; int uc_prog; TYPE_3__** uc_entries; } ;
typedef TYPE_3__* cache_ptr ;
struct TYPE_13__ {scalar_t__ len; int buf; } ;
struct TYPE_12__ {TYPE_5__ xp_rtaddr; int xp_netid; } ;
struct TYPE_9__ {scalar_t__ len; int buf; } ;
struct TYPE_11__ {scalar_t__ cache_xid; scalar_t__ cache_proc; scalar_t__ cache_vers; scalar_t__ cache_prog; char* cache_reply; size_t cache_replylen; TYPE_1__ cache_addr; struct TYPE_11__* cache_next; } ;
typedef TYPE_4__ SVCXPRT ;


 size_t FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct netconfig*) ;
 struct netconfig* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,char*) ;
 struct svc_dg_data* FUNC_8 (TYPE_4__*) ;
 char* FUNC_9 (struct netconfig*,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_10(SVCXPRT *VAR_1, struct rpc_msg *VAR_2, char **VAR_3, size_t *VAR_4)
{
 u_int VAR_5;
 cache_ptr VAR_6;
 struct svc_dg_data *VAR_7 = FUNC_8(VAR_1);
 struct cl_cache *VAR_8 = (struct cl_cache *) VAR_7->su_cache;





 FUNC_5(&VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_7->su_xid);
 for (VAR_6 = VAR_8->uc_entries[VAR_5]; VAR_6 != ((void*)0); VAR_6 = VAR_6->cache_next) {
  if (VAR_6->cache_xid == VAR_7->su_xid &&
   VAR_6->cache_proc == VAR_2->rm_call.cb_proc &&
   VAR_6->cache_vers == VAR_2->rm_call.cb_vers &&
   VAR_6->cache_prog == VAR_2->rm_call.cb_prog &&
   VAR_6->cache_addr.len == VAR_1->xp_rtaddr.len &&
   (FUNC_4(VAR_6->cache_addr.buf, VAR_1->xp_rtaddr.buf,
    VAR_1->xp_rtaddr.len) == 0)) {
   *VAR_3 = VAR_6->cache_reply;
   *VAR_4 = VAR_6->cache_replylen;
   FUNC_6(&VAR_0);
   return (1);
  }
 }




 VAR_8->uc_proc = VAR_2->rm_call.cb_proc;
 VAR_8->uc_vers = VAR_2->rm_call.cb_vers;
 VAR_8->uc_prog = VAR_2->rm_call.cb_prog;
 FUNC_6(&VAR_0);
 return (0);
}

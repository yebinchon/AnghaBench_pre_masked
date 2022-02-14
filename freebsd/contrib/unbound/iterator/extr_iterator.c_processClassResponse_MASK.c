
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ub_packed_rrset_key {int dummy; } ;
struct TYPE_6__ {int qclass; } ;
struct module_qstate {scalar_t__ return_rcode; int region; TYPE_3__ qinfo; struct dns_msg* return_msg; scalar_t__* minfo; } ;
struct iter_qstate {scalar_t__ num_current_queries; void* state; struct dns_msg* response; } ;
struct TYPE_4__ {int qclass; } ;
struct dns_msg {TYPE_2__* rep; TYPE_1__ qinfo; } ;
typedef int dest ;
struct TYPE_5__ {size_t rrset_count; int an_numrrsets; int ns_numrrsets; int ar_numrrsets; scalar_t__ security; scalar_t__ qdcount; scalar_t__ ttl; scalar_t__ prefetch_ttl; scalar_t__ serve_expired_ttl; struct ub_packed_rrset_key** rrsets; int flags; scalar_t__ authoritative; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct dns_msg* FUNC_0 (struct dns_msg*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,TYPE_3__*) ;
 int FUNC_3 (struct ub_packed_rrset_key**,struct ub_packed_rrset_key**,int) ;
 struct ub_packed_rrset_key** FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct module_qstate* VAR_4, int VAR_5,
 struct module_qstate* VAR_6)
{
 struct iter_qstate* VAR_7 = (struct iter_qstate*)VAR_6->minfo[VAR_5];
 struct dns_msg* VAR_8 = VAR_4->return_msg;
 FUNC_2(VAR_3, "processClassResponse", &VAR_4->qinfo);
 FUNC_2(VAR_3, "processClassResponse super", &VAR_6->qinfo);
 if(VAR_4->return_rcode != VAR_1) {

  VAR_7->response = ((void*)0);
  VAR_7->state = VAR_0;
  return;
 }

 if(!VAR_7->response) {

  VAR_7->response = FUNC_0(VAR_8, VAR_6->region);
  if(!VAR_7->response) {
   FUNC_1("malloc failed for qclass ANY response");
   VAR_7->state = VAR_0;
   return;
  }
  VAR_7->response->qinfo.qclass = VAR_6->qinfo.qclass;

  VAR_7->response->rep->authoritative = 0;
 } else {
  struct dns_msg* VAR_9 = VAR_7->response;



  if(VAR_8->rep->rrset_count != 0) {
   size_t VAR_10 = VAR_8->rep->rrset_count+VAR_9->rep->rrset_count;
   struct ub_packed_rrset_key** VAR_11, **VAR_12;

   VAR_9->rep->flags = VAR_8->rep->flags;

   if(VAR_8->rep->rrset_count > VAR_2 ||
    VAR_9->rep->rrset_count > VAR_2) {
    FUNC_1("malloc failed (too many rrsets) in collect ANY");
    VAR_7->state = VAR_0;
    return;
   }
   VAR_11 = FUNC_4(VAR_6->region, sizeof(VAR_11[0])*VAR_10);
   if(!VAR_11) {
    FUNC_1("malloc failed in collect ANY");
    VAR_7->state = VAR_0;
    return;
   }
   VAR_12 = VAR_11;

   FUNC_3(VAR_11, VAR_9->rep->rrsets, VAR_9->rep->an_numrrsets
    * sizeof(VAR_11[0]));
   VAR_11 += VAR_9->rep->an_numrrsets;
   FUNC_3(VAR_11, VAR_8->rep->rrsets, VAR_8->rep->an_numrrsets
    * sizeof(VAR_11[0]));
   VAR_11 += VAR_8->rep->an_numrrsets;

   FUNC_3(VAR_11, VAR_9->rep->rrsets+VAR_9->rep->an_numrrsets,
    VAR_9->rep->ns_numrrsets * sizeof(VAR_11[0]));
   VAR_11 += VAR_9->rep->ns_numrrsets;
   FUNC_3(VAR_11, VAR_8->rep->rrsets+VAR_8->rep->an_numrrsets,
    VAR_8->rep->ns_numrrsets * sizeof(VAR_11[0]));
   VAR_11 += VAR_8->rep->ns_numrrsets;

   FUNC_3(VAR_11, VAR_9->rep->rrsets+VAR_9->rep->an_numrrsets+
    VAR_9->rep->ns_numrrsets,
    VAR_9->rep->ar_numrrsets * sizeof(VAR_11[0]));
   VAR_11 += VAR_9->rep->ar_numrrsets;
   FUNC_3(VAR_11, VAR_8->rep->rrsets+VAR_8->rep->an_numrrsets+
    VAR_8->rep->ns_numrrsets,
    VAR_8->rep->ar_numrrsets * sizeof(VAR_11[0]));

   VAR_9->rep->rrsets = VAR_12;
   VAR_9->rep->an_numrrsets += VAR_8->rep->an_numrrsets;
   VAR_9->rep->ns_numrrsets += VAR_8->rep->ns_numrrsets;
   VAR_9->rep->ar_numrrsets += VAR_8->rep->ar_numrrsets;
   VAR_9->rep->rrset_count = VAR_10;
  }
  if(VAR_8->rep->security < VAR_9->rep->security)
   VAR_9->rep->security = VAR_8->rep->security;
  if(VAR_8->rep->qdcount != 0)
   VAR_9->rep->qdcount = VAR_8->rep->qdcount;
  if(VAR_8->rep->ttl < VAR_9->rep->ttl)
   VAR_9->rep->ttl = VAR_8->rep->ttl;
  if(VAR_8->rep->prefetch_ttl < VAR_9->rep->prefetch_ttl)
   VAR_9->rep->prefetch_ttl = VAR_8->rep->prefetch_ttl;
  if(VAR_8->rep->serve_expired_ttl < VAR_9->rep->serve_expired_ttl)
   VAR_9->rep->serve_expired_ttl = VAR_8->rep->serve_expired_ttl;
 }

 VAR_7->num_current_queries --;
 if(VAR_7->num_current_queries == 0)
  VAR_7->state = VAR_0;
}

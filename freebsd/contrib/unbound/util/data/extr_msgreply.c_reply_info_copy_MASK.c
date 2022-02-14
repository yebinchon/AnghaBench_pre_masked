
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_info {int security; int rrset_count; int ar_numrrsets; int ns_numrrsets; int an_numrrsets; int serve_expired_ttl; int prefetch_ttl; int ttl; int qdcount; int flags; } ;
struct regional {int dummy; } ;
struct alloc_cache {int dummy; } ;


 struct reply_info* FUNC_0 (struct regional*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct reply_info*,struct reply_info*,struct regional*) ;
 int FUNC_2 (struct reply_info*,struct alloc_cache*,struct regional*) ;
 int FUNC_3 (struct reply_info*,struct alloc_cache*) ;

struct reply_info*
FUNC_4(struct reply_info* VAR_0, struct alloc_cache* VAR_1,
 struct regional* VAR_2)
{
 struct reply_info* VAR_3;
 VAR_3 = FUNC_0(VAR_2, VAR_0->flags, VAR_0->qdcount,
  VAR_0->ttl, VAR_0->prefetch_ttl, VAR_0->serve_expired_ttl,
  VAR_0->an_numrrsets, VAR_0->ns_numrrsets, VAR_0->ar_numrrsets,
  VAR_0->rrset_count, VAR_0->security);
 if(!VAR_3)
  return ((void*)0);

 if(!FUNC_2(VAR_3, VAR_1, VAR_2)) {
  if(!VAR_2)
   FUNC_3(VAR_3, VAR_1);
  return ((void*)0);
 }
 if(!FUNC_1(VAR_3, VAR_0, VAR_2)) {
  if(!VAR_2)
   FUNC_3(VAR_3, VAR_1);
  return ((void*)0);
 }
 return VAR_3;
}

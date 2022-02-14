
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rrset_parse {struct rrset_parse* rrset_all_next; } ;
struct reply_info {scalar_t__ ttl; size_t rrset_count; scalar_t__ serve_expired_ttl; int prefetch_ttl; TYPE_2__** rrsets; int security; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ ttl; } ;
struct msg_parse {struct rrset_parse* rrset_first; } ;
typedef int sldns_buffer ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct reply_info*) ;
 int FUNC_2 (int *,struct msg_parse*,struct rrset_parse*,struct regional*,TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(sldns_buffer* VAR_4, struct msg_parse* VAR_5,
 struct reply_info* VAR_6, struct regional* VAR_7)
{
 size_t VAR_8;
 struct rrset_parse *VAR_9 = VAR_5->rrset_first;
 struct packed_rrset_data* VAR_10;
 FUNC_1(VAR_6);
 VAR_6->ttl = VAR_0;
 VAR_6->security = VAR_3;
 if(VAR_6->rrset_count == 0)
  VAR_6->ttl = VAR_1;

 for(VAR_8=0; VAR_8<VAR_6->rrset_count; VAR_8++) {
  if(!FUNC_2(VAR_4, VAR_5, VAR_9, VAR_7,
   VAR_6->rrsets[VAR_8]))
   return 0;
  VAR_10 = (struct packed_rrset_data*)VAR_6->rrsets[VAR_8]->entry.data;
  if(VAR_10->ttl < VAR_6->ttl)
   VAR_6->ttl = VAR_10->ttl;

  VAR_9 = VAR_9->rrset_all_next;
 }
 VAR_6->prefetch_ttl = FUNC_0(VAR_6->ttl);
 VAR_6->serve_expired_ttl = VAR_6->ttl + VAR_2;
 return 1;
}

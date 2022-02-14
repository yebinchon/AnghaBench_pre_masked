
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct rrset_parse {size_t rr_count; size_t rrsig_count; int section; struct rr_parse* rrsig_first; int type; struct rr_parse* rr_first; } ;
struct rr_parse {size_t size; struct rr_parse* next; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; size_t* rr_len; int * rr_ttl; int ** rr_data; int security; int trust; int ttl; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct packed_rrset_data*,int *,struct rr_parse*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(sldns_buffer* VAR_4, struct rrset_parse* VAR_5,
 struct packed_rrset_data* VAR_6)
{
 size_t VAR_7;
 struct rr_parse* VAR_8 = VAR_5->rr_first;
 uint8_t* VAR_9;
 size_t VAR_10 = VAR_5->rr_count + VAR_5->rrsig_count;
 VAR_6->ttl = VAR_1;
 VAR_6->count = VAR_5->rr_count;
 VAR_6->rrsig_count = VAR_5->rrsig_count;
 VAR_6->trust = VAR_2;
 VAR_6->security = VAR_3;

 VAR_6->rr_len = (size_t*)((uint8_t*)VAR_6 +
  sizeof(struct packed_rrset_data));
 VAR_6->rr_data = (uint8_t**)&(VAR_6->rr_len[VAR_10]);
 VAR_6->rr_ttl = (time_t*)&(VAR_6->rr_data[VAR_10]);
 VAR_9 = (uint8_t*)&(VAR_6->rr_ttl[VAR_10]);
 for(VAR_7=0; VAR_7<VAR_6->count; VAR_7++) {
  VAR_6->rr_len[VAR_7] = VAR_8->size;
  VAR_6->rr_data[VAR_7] = VAR_9;
  VAR_9 += VAR_8->size;
  if(!FUNC_0(VAR_4, VAR_6, VAR_6->rr_data[VAR_7], VAR_8,
   &VAR_6->rr_ttl[VAR_7], VAR_5->type, VAR_5->section))
   return 0;
  VAR_8 = VAR_8->next;
 }

 VAR_8 = VAR_5->rrsig_first;
 for(VAR_7=VAR_6->count; VAR_7<VAR_10; VAR_7++) {
  VAR_6->rr_len[VAR_7] = VAR_8->size;
  VAR_6->rr_data[VAR_7] = VAR_9;
  VAR_9 += VAR_8->size;
  if(!FUNC_0(VAR_4, VAR_6, VAR_6->rr_data[VAR_7], VAR_8,
   &VAR_6->rr_ttl[VAR_7], VAR_0, VAR_5->section))
   return 0;
  VAR_8 = VAR_8->next;
 }
 return 1;
}

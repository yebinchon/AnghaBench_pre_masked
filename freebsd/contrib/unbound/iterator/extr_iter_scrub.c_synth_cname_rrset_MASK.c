
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rrset_parse {size_t dname_len; int rr_count; int size; int outside_packet; int * ttl_data; struct rrset_parse* rr_first; struct rrset_parse* rrset_all_next; int rrset_class; int type; int * dname; int hash; int section; struct rrset_parse* rr_last; } ;
struct rr_parse {size_t dname_len; int rr_count; int size; int outside_packet; int * ttl_data; struct rr_parse* rr_first; struct rr_parse* rrset_all_next; int rrset_class; int type; int * dname; int hash; int section; struct rr_parse* rr_last; } ;
struct regional {int dummy; } ;
struct msg_parse {int an_rrsets; int rrset_count; struct rrset_parse* rrset_last; struct rrset_parse* rrset_first; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (struct rrset_parse*,int ,int) ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct regional*,int) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static struct rrset_parse*
FUNC_7(uint8_t** VAR_1, size_t* VAR_2, uint8_t* VAR_3,
 size_t VAR_4, struct regional* VAR_5, struct msg_parse* VAR_6,
 struct rrset_parse* VAR_7, struct rrset_parse* VAR_8,
 struct rrset_parse* VAR_9, sldns_buffer* VAR_10)
{
 struct rrset_parse* VAR_11 = (struct rrset_parse*)FUNC_4(VAR_5,
  sizeof(struct rrset_parse));
 if(!VAR_11)
  return ((void*)0);
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->rr_first = (struct rr_parse*)FUNC_4(VAR_5,
  sizeof(struct rr_parse));
 if(!VAR_11->rr_first)
  return ((void*)0);
 VAR_11->rr_last = VAR_11->rr_first;

 VAR_11->dname = (uint8_t*)FUNC_4(VAR_5, *VAR_2);
 if(!VAR_11->dname)
  return ((void*)0);
 FUNC_0(VAR_10, VAR_11->dname, *VAR_1);
 VAR_11->dname_len = *VAR_2;
 VAR_11->type = VAR_0;
 VAR_11->section = VAR_7->section;
 VAR_11->rrset_class = VAR_7->rrset_class;
 VAR_11->rr_count = 1;
 VAR_11->size = sizeof(uint16_t) + VAR_4;
 VAR_11->hash=FUNC_3(VAR_10, VAR_11->dname, VAR_11->type, VAR_11->rrset_class, 0);

 FUNC_2(VAR_11->rr_first, 0, sizeof(struct rr_parse));
 VAR_11->rr_first->outside_packet = 1;
 VAR_11->rr_first->ttl_data = (uint8_t*)FUNC_4(VAR_5,
  sizeof(uint32_t)+sizeof(uint16_t)+VAR_4);
 if(!VAR_11->rr_first->ttl_data)
  return ((void*)0);
 FUNC_6(VAR_11->rr_first->ttl_data, 0);
 FUNC_5(VAR_11->rr_first->ttl_data+4, VAR_4);
 FUNC_1(VAR_11->rr_first->ttl_data+6, VAR_3, VAR_4);
 VAR_11->rr_first->size = sizeof(uint16_t)+VAR_4;


 VAR_11->rrset_all_next = VAR_9;
 if(VAR_8)
  VAR_8->rrset_all_next = VAR_11;
 else VAR_6->rrset_first = VAR_11;
 if(VAR_9 == ((void*)0))
  VAR_6->rrset_last = VAR_11;
 VAR_6->rrset_count ++;
 VAR_6->an_rrsets++;


 *VAR_1 = VAR_11->rr_first->ttl_data + sizeof(uint32_t)+sizeof(uint16_t);
 *VAR_2 = VAR_4;
 return VAR_11;
}

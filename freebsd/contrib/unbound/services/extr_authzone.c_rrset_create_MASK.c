
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
typedef void* time_t ;
struct packed_rrset_data {size_t* rr_len; int count; int ** rr_data; void** rr_ttl; int trust; void* ttl; } ;
struct auth_rrset {scalar_t__ type; struct auth_rrset* next; struct packed_rrset_data* data; } ;
struct auth_data {struct auth_rrset* rrsets; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct auth_rrset*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,size_t) ;
 int VAR_0 ;

__attribute__((used)) static struct auth_rrset*
FUNC_4(struct auth_data* VAR_1, uint16_t VAR_2, uint32_t VAR_3,
 uint8_t* VAR_4, size_t VAR_5)
{
 struct auth_rrset* VAR_6 = (struct auth_rrset*)FUNC_0(1,
  sizeof(*VAR_6));
 struct auth_rrset* VAR_7, *VAR_8;
 struct packed_rrset_data* VAR_9;
 if(!VAR_6) {
  FUNC_2("out of memory");
  return ((void*)0);
 }
 VAR_6->type = VAR_2;


 VAR_9 = (struct packed_rrset_data*)FUNC_0(1,
  sizeof(struct packed_rrset_data) + sizeof(size_t) +
  sizeof(uint8_t*) + sizeof(time_t) + VAR_5);
 if(!VAR_9) {
  FUNC_1(VAR_6);
  FUNC_2("out of memory");
  return ((void*)0);
 }
 VAR_6->data = VAR_9;
 VAR_9->ttl = VAR_3;
 VAR_9->trust = VAR_0;
 VAR_9->rr_len = (size_t*)((uint8_t*)VAR_9 + sizeof(struct packed_rrset_data));
 VAR_9->rr_data = (uint8_t**)&(VAR_9->rr_len[1]);
 VAR_9->rr_ttl = (time_t*)&(VAR_9->rr_data[1]);
 VAR_9->rr_data[0] = (uint8_t*)&(VAR_9->rr_ttl[1]);


 VAR_9->rr_len[0] = VAR_5;
 VAR_9->rr_ttl[0] = VAR_3;
 FUNC_3(VAR_9->rr_data[0], VAR_4, VAR_5);
 VAR_9->count++;



 VAR_8 = ((void*)0);
 VAR_7 = VAR_1->rrsets;
 while(VAR_7 && VAR_7->type<=VAR_2) {
  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
 }

 VAR_6->next = VAR_7;
 if(VAR_8) VAR_8->next = VAR_6;
 else VAR_1->rrsets = VAR_6;
 return VAR_6;
}

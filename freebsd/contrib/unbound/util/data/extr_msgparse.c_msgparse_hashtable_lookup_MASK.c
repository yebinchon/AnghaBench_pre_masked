
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rrset_parse {struct rrset_parse* rrset_bucket_next; } ;
struct msg_parse {struct rrset_parse** hashtable; } ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rrset_parse*,int *,int,int ,int *,size_t,int ,int ) ;

struct rrset_parse*
FUNC_1(struct msg_parse* VAR_1, sldns_buffer* VAR_2,
 hashvalue_type VAR_3, uint32_t VAR_4, uint8_t* VAR_5,
 size_t VAR_6, uint16_t VAR_7, uint16_t VAR_8)
{
 struct rrset_parse* VAR_9 = VAR_1->hashtable[VAR_3 & (VAR_0-1)];
 while(VAR_9) {
  if(FUNC_0(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8))
   return VAR_9;
  VAR_9 = VAR_9->rrset_bucket_next;
 }
 return ((void*)0);
}

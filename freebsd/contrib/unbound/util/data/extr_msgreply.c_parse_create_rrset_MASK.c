
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int time_t ;
struct rrset_parse {int rr_count; int rrsig_count; int size; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int dummy; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (struct packed_rrset_data*) ;
 struct packed_rrset_data* FUNC_1 (size_t) ;
 int FUNC_2 (int *,struct rrset_parse*,struct packed_rrset_data*) ;
 struct packed_rrset_data* FUNC_3 (struct regional*,size_t) ;

__attribute__((used)) static int
FUNC_4(sldns_buffer* VAR_1, struct rrset_parse* VAR_2,
 struct packed_rrset_data** VAR_3, struct regional* VAR_4)
{

 size_t VAR_5;
 if(VAR_2->rr_count > VAR_0 || VAR_2->rrsig_count > VAR_0 ||
  VAR_2->size > VAR_0)
  return 0;
 VAR_5 = sizeof(struct packed_rrset_data) +
  (VAR_2->rr_count + VAR_2->rrsig_count) *
  (sizeof(size_t)+sizeof(uint8_t*)+sizeof(time_t)) +
  VAR_2->size;
 if(VAR_4)
  *VAR_3 = FUNC_3(VAR_4, VAR_5);
 else *VAR_3 = FUNC_1(VAR_5);
 if(!*VAR_3)
  return 0;

 if(!FUNC_2(VAR_1, VAR_2, *VAR_3)) {
  if(!VAR_4) FUNC_0(*VAR_3);
  return 0;
 }
 return 1;
}

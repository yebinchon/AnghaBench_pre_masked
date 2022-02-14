
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * time_t ;
struct regional {int dummy; } ;
struct packed_rrset_data {size_t* rr_len; int count; int ** rr_data; int ** rr_ttl; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (size_t*,size_t*,int) ;
 void* FUNC_3 (struct regional*,int) ;
 int * FUNC_4 (struct regional*,int *,size_t) ;

int
FUNC_5(struct regional* VAR_1, struct packed_rrset_data* VAR_2,
 uint8_t* VAR_3, size_t VAR_4, time_t VAR_5, const char* VAR_6)
{
 size_t* VAR_7 = VAR_2->rr_len;
 time_t* VAR_8 = VAR_2->rr_ttl;
 uint8_t** VAR_9 = VAR_2->rr_data;


 if(VAR_2->count > VAR_0) {
  FUNC_1("RRset '%s' has more than %d records, record ignored",
   VAR_6, VAR_0);
  return 1;
 }
 VAR_2->count++;
 VAR_2->rr_len = FUNC_3(VAR_1, sizeof(*VAR_2->rr_len)*VAR_2->count);
 VAR_2->rr_ttl = FUNC_3(VAR_1, sizeof(*VAR_2->rr_ttl)*VAR_2->count);
 VAR_2->rr_data = FUNC_3(VAR_1, sizeof(*VAR_2->rr_data)*VAR_2->count);
 if(!VAR_2->rr_len || !VAR_2->rr_ttl || !VAR_2->rr_data) {
  FUNC_0("out of memory");
  return 0;
 }
 if(VAR_2->count > 1) {
  FUNC_2(VAR_2->rr_len+1, VAR_7,
   sizeof(*VAR_2->rr_len)*(VAR_2->count-1));
  FUNC_2(VAR_2->rr_ttl+1, VAR_8,
   sizeof(*VAR_2->rr_ttl)*(VAR_2->count-1));
  FUNC_2(VAR_2->rr_data+1, VAR_9,
   sizeof(*VAR_2->rr_data)*(VAR_2->count-1));
 }
 VAR_2->rr_len[0] = VAR_4;
 VAR_2->rr_ttl[0] = VAR_5;
 VAR_2->rr_data[0] = FUNC_4(VAR_1, VAR_3, VAR_4);
 if(!VAR_2->rr_data[0]) {
  FUNC_0("out of memory");
  return 0;
 }
 return 1;
}

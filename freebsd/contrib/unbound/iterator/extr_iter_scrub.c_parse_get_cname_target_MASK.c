
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rrset_parse {int rr_count; int size; TYPE_1__* rr_first; TYPE_1__* rr_last; struct rr_parse* rrsig_first; } ;
struct rr_parse {scalar_t__ size; struct rr_parse* next; } ;
struct TYPE_2__ {int size; int * ttl_data; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct rrset_parse* VAR_1, uint8_t** VAR_2,
 size_t* VAR_3)
{
 if(VAR_1->rr_count != 1) {
  struct rr_parse* VAR_4;
  FUNC_0(VAR_0, "Found CNAME rrset with "
   "size > 1: %u", (unsigned)VAR_1->rr_count);

  VAR_1->rr_count = 1;
  VAR_1->size = VAR_1->rr_first->size;
  for(VAR_4=VAR_1->rrsig_first; VAR_4; VAR_4=VAR_4->next)
   VAR_1->size += VAR_4->size;
  VAR_1->rr_last = VAR_1->rr_first;
  VAR_1->rr_first->next = ((void*)0);
 }
 if(VAR_1->rr_first->size < sizeof(uint16_t)+1)
  return 0;
 *VAR_2 = VAR_1->rr_first->ttl_data + sizeof(uint32_t)
  + sizeof(uint16_t);
 *VAR_3 = VAR_1->rr_first->size - sizeof(uint16_t);
 return 1;
}

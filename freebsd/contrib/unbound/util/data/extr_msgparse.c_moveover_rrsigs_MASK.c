
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrset_parse {int size; struct rr_parse* rrsig_last; struct rr_parse* rrsig_first; int rrsig_count; int rr_count; struct rr_parse* rr_last; struct rr_parse* rr_first; int type; } ;
struct rr_parse {scalar_t__ size; struct rr_parse* next; int ttl_data; scalar_t__ outside_packet; } ;
struct regional {int dummy; } ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct regional*,int) ;

__attribute__((used)) static int
FUNC_2(sldns_buffer* VAR_0, struct regional* VAR_1,
 struct rrset_parse* VAR_2, struct rrset_parse* VAR_3, int VAR_4)
{
 struct rr_parse* VAR_5 = VAR_2->rr_first;
 struct rr_parse* VAR_6 = ((void*)0);
 struct rr_parse* VAR_7;
 struct rr_parse* VAR_8;
 while(VAR_5) {
  VAR_8 = VAR_5->next;
  if(FUNC_0(VAR_0, VAR_5->ttl_data,
   VAR_3->type)) {
   if(VAR_4) {

    VAR_7 = (struct rr_parse*)FUNC_1(
     VAR_1, sizeof(struct rr_parse));
    if(!VAR_7) return 0;
    VAR_7->outside_packet = 0;
    VAR_7->ttl_data = VAR_5->ttl_data;
    VAR_7->size = VAR_5->size;

   } else {

    if(VAR_6) VAR_6->next = VAR_5->next;
    else VAR_2->rr_first = VAR_5->next;
    if(VAR_2->rr_last == VAR_5)
     VAR_2->rr_last = VAR_6;
    VAR_2->rr_count--;
    VAR_2->size -= VAR_5->size;
    VAR_7 = VAR_5;

   }

   VAR_3->rrsig_count++;
   VAR_7->next = 0;
   if(VAR_3->rrsig_last)
    VAR_3->rrsig_last->next = VAR_7;
   else VAR_3->rrsig_first = VAR_7;
   VAR_3->rrsig_last = VAR_7;
   VAR_3->size += VAR_7->size;
  } else {
   VAR_6 = VAR_5;
  }
  VAR_5 = VAR_8;
 }
 return 1;
}

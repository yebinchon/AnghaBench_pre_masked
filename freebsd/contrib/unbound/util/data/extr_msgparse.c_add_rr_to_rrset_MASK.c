
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct rrset_parse {scalar_t__ section; scalar_t__ type; int size; int rr_count; struct rr_parse* rr_last; struct rr_parse* rr_first; int rrsig_count; struct rr_parse* rrsig_last; struct rr_parse* rrsig_first; } ;
struct rr_parse {scalar_t__ size; struct rr_parse* next; int ttl_data; scalar_t__ outside_packet; } ;
struct regional {int dummy; } ;
struct msg_parse {scalar_t__ qtype; } ;
typedef scalar_t__ sldns_pkt_section ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__,struct rr_parse*) ;
 scalar_t__ FUNC_1 (struct regional*,int) ;
 scalar_t__ FUNC_2 (int *,struct rrset_parse*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct rrset_parse* VAR_4, sldns_buffer* VAR_5,
 struct msg_parse* VAR_6, struct regional* VAR_7,
 sldns_pkt_section VAR_8, uint16_t VAR_9)
{
 struct rr_parse* VAR_10;

 if(VAR_4->section != VAR_8 && VAR_9 != VAR_3 &&
  VAR_4->type != VAR_3) {
  if(!FUNC_3(VAR_5))
   return VAR_0;
  return 0;
 }

 if( (VAR_6->qtype == VAR_3 ||
      VAR_6->qtype == VAR_2)
     && FUNC_2(VAR_5, VAR_4, FUNC_4(VAR_5))) {
  if(!FUNC_3(VAR_5))
   return VAR_0;
  return 0;
 }


 if(!(VAR_10 = (struct rr_parse*)FUNC_1(VAR_7, sizeof(*VAR_10))))
  return VAR_1;
 VAR_10->outside_packet = 0;
 VAR_10->ttl_data = FUNC_4(VAR_5);
 VAR_10->next = 0;
 if(VAR_9 == VAR_3 && VAR_4->type != VAR_3) {
  if(VAR_4->rrsig_last)
   VAR_4->rrsig_last->next = VAR_10;
  else VAR_4->rrsig_first = VAR_10;
  VAR_4->rrsig_last = VAR_10;
  VAR_4->rrsig_count++;
 } else {
  if(VAR_4->rr_last)
   VAR_4->rr_last->next = VAR_10;
  else VAR_4->rr_first = VAR_10;
  VAR_4->rr_last = VAR_10;
  VAR_4->rr_count++;
 }


 if(!FUNC_0(VAR_5, VAR_9, VAR_10))
  return VAR_0;
 VAR_4->size += VAR_10->size;

 return 0;
}

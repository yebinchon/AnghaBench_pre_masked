
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct rrset_parse {scalar_t__ type; int hash; TYPE_1__* rr_last; scalar_t__ rr_first; TYPE_1__* rrsig_last; scalar_t__ rrsig_first; scalar_t__ rr_count; int rrsig_count; int flags; struct rrset_parse* rrset_bucket_next; int rrset_class; int dname_len; int dname; } ;
struct regional {int dummy; } ;
struct msg_parse {scalar_t__ qtype; struct rrset_parse** hashtable; int ar_rrsets; int ns_rrsets; int an_rrsets; } ;
typedef int const sldns_pkt_section ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;
struct TYPE_2__ {scalar_t__ next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct msg_parse*,struct rrset_parse*,int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct regional*,struct rrset_parse*,struct rrset_parse*,int) ;
 int FUNC_3 (struct msg_parse*,struct rrset_parse*) ;
 struct rrset_parse* FUNC_4 (struct msg_parse*,int ,int ,scalar_t__,int ,int,int ,int const,struct regional*) ;
 int FUNC_5 (int *,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static struct rrset_parse*
FUNC_6(struct rrset_parse* VAR_3, struct msg_parse* VAR_4,
 sldns_buffer* VAR_5, uint16_t VAR_6, uint32_t VAR_7,
 int VAR_8, sldns_pkt_section VAR_9, struct regional* VAR_10)
{
 struct rrset_parse* VAR_11 = VAR_3;
 hashvalue_type VAR_12 = FUNC_5(VAR_5, VAR_3->dname, VAR_6,
  VAR_3->rrset_class, VAR_7);
 FUNC_1( VAR_3->type == VAR_1 );
 FUNC_1( VAR_6 != VAR_1 );
 if(VAR_8) {

  VAR_11 = FUNC_4(VAR_4, VAR_3->dname, VAR_3->dname_len,
   VAR_6, VAR_3->rrset_class, VAR_12, VAR_7,
   VAR_9, VAR_10);
  if(!VAR_11)
   return ((void*)0);
  switch(VAR_9) {
   case 129: VAR_4->an_rrsets++; break;
   case 128: VAR_4->ns_rrsets++; break;
   case 130: VAR_4->ar_rrsets++; break;
   default: FUNC_1(0);
  }
  if(!FUNC_2(VAR_5, VAR_10, VAR_3, VAR_11,
   VAR_4->qtype == VAR_1 ||
   (VAR_4->qtype == VAR_0 &&
   VAR_9 != 129) ))
   return ((void*)0);
  return VAR_11;
 }

 FUNC_3(VAR_4, VAR_11);

 VAR_11->rrset_bucket_next = VAR_4->hashtable[VAR_12&(VAR_2-1)];
 VAR_4->hashtable[VAR_12&(VAR_2-1)] = VAR_11;
 VAR_11->hash = VAR_12;

 FUNC_0(VAR_4, VAR_11, VAR_9);
 VAR_11->type = VAR_6;
 VAR_11->flags = VAR_7;
 VAR_11->rrsig_count += VAR_11->rr_count;
 VAR_11->rr_count = 0;

 if(VAR_11->rrsig_last)
  VAR_11->rrsig_last->next = VAR_11->rr_first;
 else VAR_11->rrsig_first = VAR_11->rr_first;
 VAR_11->rrsig_last = VAR_11->rr_last;
 VAR_11->rr_first = 0;
 VAR_11->rr_last = 0;
 return VAR_11;
}

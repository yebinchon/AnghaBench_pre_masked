
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {size_t type; int flags; size_t rrset_class; int dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {size_t count; scalar_t__* rr_ttl; size_t** rr_data; int* rr_len; size_t rrsig_count; } ;
struct compress_tree_node {int dummy; } ;
typedef int sldns_rr_descriptor ;
typedef int sldns_pkt_section ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int,struct regional*,struct compress_tree_node**) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int *,struct regional*,struct compress_tree_node**,size_t,size_t*,int) ;
 int FUNC_2 (int *,size_t*,int,struct regional*,struct compress_tree_node**,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,int ,size_t,int) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int * FUNC_11 (struct ub_packed_rrset_key*) ;

__attribute__((used)) static int
FUNC_12(struct ub_packed_rrset_key* VAR_4, sldns_buffer* VAR_5,
 uint16_t* VAR_6, time_t VAR_7, struct regional* VAR_8,
 int VAR_9, int VAR_10, struct compress_tree_node** VAR_11,
 sldns_pkt_section VAR_12, uint16_t VAR_13, int VAR_14, size_t VAR_15)
{
 size_t VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 uint16_t VAR_21 = 0;
 struct packed_rrset_data* VAR_22 = (struct packed_rrset_data*)
  VAR_4->entry.data;


 if(!FUNC_5(VAR_12, FUNC_4(VAR_4->rk.type), VAR_13, VAR_14))
  return VAR_2;

 VAR_20 = FUNC_3(VAR_4->rk.dname);
 VAR_18 = FUNC_6(VAR_5);


 if((VAR_4->rk.flags & VAR_1) != 0)
  VAR_7 = 0;

 if(VAR_9) {
  const sldns_rr_descriptor* VAR_23 = FUNC_11(VAR_4);
  for(VAR_16=0; VAR_16<VAR_22->count; VAR_16++) {

   VAR_17 = (VAR_16 + VAR_15) % VAR_22->count;
   if((VAR_19=FUNC_1(VAR_4, VAR_5, VAR_8, VAR_11,
    VAR_18, &VAR_21, VAR_20))
    != VAR_2)
    return VAR_19;
   FUNC_8(VAR_5, &VAR_4->rk.type, 2);
   FUNC_8(VAR_5, &VAR_4->rk.rrset_class, 2);
   if(VAR_22->rr_ttl[VAR_17] < VAR_7)
    FUNC_10(VAR_5, 0);
   else FUNC_10(VAR_5,
     VAR_22->rr_ttl[VAR_17]-VAR_7);
   if(VAR_23) {
    if((VAR_19=FUNC_2(VAR_5, VAR_22->rr_data[VAR_17],
     VAR_22->rr_len[VAR_17], VAR_8, VAR_11, VAR_23))
     != VAR_2)
     return VAR_19;
   } else {
    if(FUNC_7(VAR_5) < VAR_22->rr_len[VAR_17])
     return VAR_3;
    FUNC_8(VAR_5, VAR_22->rr_data[VAR_17],
     VAR_22->rr_len[VAR_17]);
   }
  }
 }

 if(VAR_10 && VAR_14) {
  size_t VAR_24 = VAR_22->count+VAR_22->rrsig_count;
  for(VAR_16=VAR_22->count; VAR_16<VAR_24; VAR_16++) {
   if(VAR_21 && VAR_20 != 1) {
    if(FUNC_7(VAR_5) <
     2+4+4+VAR_22->rr_len[VAR_16])
     return VAR_3;
    FUNC_8(VAR_5, &VAR_21, 2);
   } else {
    if((VAR_19=FUNC_0(VAR_4->rk.dname,
     VAR_5, VAR_20, VAR_8, VAR_11))
     != VAR_2)
     return VAR_19;
    if(FUNC_7(VAR_5) <
     4+4+VAR_22->rr_len[VAR_16])
     return VAR_3;
   }
   FUNC_9(VAR_5, VAR_0);
   FUNC_8(VAR_5, &VAR_4->rk.rrset_class, 2);
   if(VAR_22->rr_ttl[VAR_16] < VAR_7)
    FUNC_10(VAR_5, 0);
   else FUNC_10(VAR_5,
     VAR_22->rr_ttl[VAR_16]-VAR_7);


   FUNC_8(VAR_5, VAR_22->rr_data[VAR_16],
    VAR_22->rr_len[VAR_16]);
  }
 }

 if(VAR_9)
  *VAR_6 += VAR_22->count;
 if(VAR_10 && VAR_14)
  *VAR_6 += VAR_22->rrsig_count;

 return VAR_2;
}

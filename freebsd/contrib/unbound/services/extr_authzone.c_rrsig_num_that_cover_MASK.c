
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct packed_rrset_data {size_t count; size_t rrsig_count; scalar_t__* rr_len; int * rr_data; } ;
struct auth_rrset {scalar_t__ type; struct packed_rrset_data* data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static size_t
FUNC_2(struct auth_rrset* VAR_1, uint16_t VAR_2, size_t* VAR_3)
{
 struct packed_rrset_data* VAR_4 = VAR_1->data;
 size_t VAR_5, VAR_6 = 0;
 *VAR_3 = 0;
 FUNC_0(VAR_4 && VAR_1->type == VAR_0);
 for(VAR_5=0; VAR_5<VAR_4->count+VAR_4->rrsig_count; VAR_5++) {
  if(FUNC_1(VAR_4->rr_data[VAR_5],
   VAR_4->rr_len[VAR_5]) == VAR_2) {
   VAR_6++;
   (*VAR_3) += VAR_4->rr_len[VAR_5];
  }
 }
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {size_t count; size_t rrsig_count; size_t* rr_len; int ** rr_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ub_packed_rrset_key* VAR_0, size_t VAR_1, uint8_t** VAR_2,
 size_t* VAR_3)
{
 struct packed_rrset_data* VAR_4 = (struct packed_rrset_data*)VAR_0->entry.data;
 FUNC_0(VAR_4 && VAR_1 < (VAR_4->count + VAR_4->rrsig_count));
 *VAR_2 = VAR_4->rr_data[VAR_1];
 *VAR_3 = VAR_4->rr_len[VAR_1];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {int* rr_len; scalar_t__** rr_data; scalar_t__ count; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ub_packed_rrset_key* VAR_0, int VAR_1,
 uint8_t** VAR_2, size_t* VAR_3)
{
        struct packed_rrset_data* VAR_4 = (struct packed_rrset_data*)
         VAR_0->entry.data;
 FUNC_0(VAR_4 && VAR_1 < (int)VAR_4->count);
 if(VAR_4->rr_len[VAR_1] < 2+5) {
  *VAR_2 = 0;
  *VAR_3 = 0;
  return 0;
 }
 *VAR_3 = (size_t)VAR_4->rr_data[VAR_1][2+4];
 if(VAR_4->rr_len[VAR_1] < 2+5+(size_t)*VAR_3) {
  *VAR_2 = 0;
  *VAR_3 = 0;
  return 0;
 }
 *VAR_2 = VAR_4->rr_data[VAR_1]+2+5;
 return 1;
}

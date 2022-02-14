
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {size_t dname_len; scalar_t__* dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {size_t rrsig_count; scalar_t__ count; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__**,size_t*,int) ;
 scalar_t__ FUNC_3 (struct packed_rrset_data*,scalar_t__) ;

int
FUNC_4(struct ub_packed_rrset_key* VAR_0, uint8_t** VAR_1,
 size_t* VAR_2)
{
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)VAR_0->
  entry.data;
 uint8_t VAR_4;
 int VAR_5;
 uint8_t* VAR_6;
 size_t VAR_7, VAR_8;
 if(VAR_3->rrsig_count == 0) {
  return 1;
 }
 VAR_4 = FUNC_3(VAR_3, VAR_3->count + 0);

 for(VAR_7=1; VAR_7<VAR_3->rrsig_count; VAR_7++) {
  if(VAR_4 != FUNC_3(VAR_3, VAR_3->count + VAR_7)) {
   return 0;
  }
 }




 VAR_6 = VAR_0->rk.dname;
 VAR_8 = VAR_0->rk.dname_len;

 if(FUNC_1(VAR_6)) {
  VAR_6 += 2;
  VAR_8 -= 2;
 }
 VAR_5 = (FUNC_0(VAR_6) - 1) - (int)VAR_4;
 if(VAR_5 > 0) {
  *VAR_1 = VAR_6;
  FUNC_2(VAR_1, &VAR_8, VAR_5);
  *VAR_2 = VAR_8;
  return 1;
 }
 return 1;
}

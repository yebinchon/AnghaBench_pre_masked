
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {int dname_len; int rrset_class; int type; int * dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {int* rr_len; size_t count; int ** rr_data; scalar_t__* rr_ttl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,size_t,char*,size_t) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct ub_packed_rrset_key* VAR_1, size_t VAR_2,
 time_t VAR_3, char* VAR_4, size_t VAR_5)
{
 struct packed_rrset_data* VAR_6 = (struct packed_rrset_data*)VAR_1->
  entry.data;
 uint8_t VAR_7[65535];
 size_t VAR_8 = VAR_1->rk.dname_len + 2 + 2 + 4 + VAR_6->rr_len[VAR_2];
 FUNC_0(VAR_5 > 0 && VAR_4);
 if(VAR_8 > VAR_5) {
  VAR_4[0] = 0;
  return 0;
 }
 FUNC_2(VAR_7, VAR_1->rk.dname, VAR_1->rk.dname_len);
 if(VAR_2 < VAR_6->count)
  FUNC_2(VAR_7+VAR_1->rk.dname_len, &VAR_1->rk.type, 2);
 else FUNC_4(VAR_7+VAR_1->rk.dname_len, VAR_0);
 FUNC_2(VAR_7+VAR_1->rk.dname_len+2, &VAR_1->rk.rrset_class, 2);
 FUNC_5(VAR_7+VAR_1->rk.dname_len+4,
  (uint32_t)(VAR_6->rr_ttl[VAR_2]-VAR_3));
 FUNC_2(VAR_7+VAR_1->rk.dname_len+8, VAR_6->rr_data[VAR_2], VAR_6->rr_len[VAR_2]);
 if(FUNC_3(VAR_7, VAR_8, VAR_4, VAR_5) == -1) {
  FUNC_1("rrbuf failure %d %s", (int)VAR_6->rr_len[VAR_2], VAR_4);
  VAR_4[0] = 0;
  return 0;
 }
 return 1;
}

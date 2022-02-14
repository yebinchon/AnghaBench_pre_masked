
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {size_t dname_len; scalar_t__* dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
typedef int sldns_buffer ;


 int FUNC_0 (scalar_t__**,size_t*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,size_t) ;

__attribute__((used)) static void
FUNC_6(sldns_buffer* VAR_0, struct ub_packed_rrset_key* VAR_1,
 uint8_t* VAR_2, uint8_t** VAR_3, size_t* VAR_4)
{
 int VAR_5 = (int)VAR_2[3];
 int VAR_6 = FUNC_1(VAR_1->rk.dname);
 *VAR_3 = FUNC_4(VAR_0);
 if(VAR_5 == VAR_6) {

  FUNC_5(VAR_0, VAR_1->rk.dname, VAR_1->rk.dname_len);
  FUNC_3(*VAR_3);
  *VAR_4 = VAR_1->rk.dname_len;
  return;
 }
 FUNC_2(VAR_5 < VAR_6);

 if(VAR_5 < VAR_6) {
  int VAR_7;
  uint8_t* VAR_8 = VAR_1->rk.dname;
  size_t VAR_9 = VAR_1->rk.dname_len;

  for(VAR_7=0; VAR_7<VAR_6-VAR_5; VAR_7++) {
   FUNC_0(&VAR_8, &VAR_9);
  }
  *VAR_4 = VAR_9+2;
  FUNC_5(VAR_0, (uint8_t*)"\001*", 2);
  FUNC_5(VAR_0, VAR_8, VAR_9);
  FUNC_3(*VAR_3);
 }
}

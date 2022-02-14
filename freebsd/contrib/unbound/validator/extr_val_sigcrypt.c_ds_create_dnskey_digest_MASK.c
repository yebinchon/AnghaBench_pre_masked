
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t dname_len; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct module_env {int * scratch_buffer; } ;
typedef int sldns_buffer ;


 int FUNC_0 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ub_packed_rrset_key*,size_t,int **,size_t*) ;
 int FUNC_3 (int ,unsigned char*,int ,unsigned char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_9(struct module_env* VAR_0,
 struct ub_packed_rrset_key* VAR_1, size_t VAR_2,
 struct ub_packed_rrset_key* VAR_3, size_t VAR_4,
 uint8_t* VAR_5)
{
 sldns_buffer* VAR_6 = VAR_0->scratch_buffer;
 uint8_t* VAR_7;
 size_t VAR_8;
 FUNC_2(VAR_1, VAR_2, &VAR_7, &VAR_8);




 FUNC_5(VAR_6);
 FUNC_8(VAR_6, VAR_1->rk.dname,
  VAR_1->rk.dname_len);
 FUNC_1(FUNC_4(VAR_6));
 FUNC_8(VAR_6, VAR_7+2, VAR_8-2);
 FUNC_6(VAR_6);

 return FUNC_3(FUNC_0(VAR_3, VAR_4),
  (unsigned char*)FUNC_4(VAR_6), FUNC_7(VAR_6),
  (unsigned char*)VAR_5);
}

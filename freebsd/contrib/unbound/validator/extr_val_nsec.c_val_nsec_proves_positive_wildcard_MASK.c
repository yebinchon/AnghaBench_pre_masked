
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {int qname; } ;


 int * FUNC_0 (int ,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ub_packed_rrset_key*,int ) ;

int FUNC_3(struct ub_packed_rrset_key* VAR_0,
 struct query_info* VAR_1, uint8_t* VAR_2)
{
 uint8_t* VAR_3;



 if(!FUNC_2(VAR_0, VAR_1->qname))
  return 0;

 VAR_3 = FUNC_0(VAR_1->qname, VAR_0);
 if(!VAR_3)
  return 0;
 if(FUNC_1(VAR_2, VAR_3) != 0) {
  return 0;
 }
 return 1;
}

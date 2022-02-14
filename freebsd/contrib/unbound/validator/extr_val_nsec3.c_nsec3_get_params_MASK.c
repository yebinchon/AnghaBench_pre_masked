
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_packed_rrset_key {int dummy; } ;


 int FUNC_0 (struct ub_packed_rrset_key*,int) ;
 size_t FUNC_1 (struct ub_packed_rrset_key*,int) ;
 int FUNC_2 (struct ub_packed_rrset_key*,int,int **,size_t*) ;
 int FUNC_3 (struct ub_packed_rrset_key*,int) ;
 scalar_t__ FUNC_4 (struct ub_packed_rrset_key*,int) ;

int FUNC_5(struct ub_packed_rrset_key* VAR_0, int VAR_1,
 int* VAR_2, size_t* VAR_3, uint8_t** VAR_4, size_t* VAR_5)
{
 if(!FUNC_3(VAR_0, VAR_1) || FUNC_4(VAR_0, VAR_1))
  return 0;
 if(!FUNC_2(VAR_0, VAR_1, VAR_4, VAR_5))
  return 0;
 *VAR_2 = FUNC_0(VAR_0, VAR_1);
 *VAR_3 = FUNC_1(VAR_0, VAR_1);
 return 1;
}

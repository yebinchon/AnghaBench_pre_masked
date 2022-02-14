
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ub_packed_rrset_key {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ub_packed_rrset_key*,size_t,int **,size_t*) ;

uint16_t
FUNC_3(struct ub_packed_rrset_key* VAR_0, size_t VAR_1)
{
 uint16_t VAR_2;
 uint8_t* VAR_3;
 size_t VAR_4;
 FUNC_2(VAR_0, VAR_1, &VAR_3, &VAR_4);
 if(VAR_4 < 2+2)
  return 0;
 FUNC_0(&VAR_2, VAR_3+2, 2);
 return FUNC_1(VAR_2);
}

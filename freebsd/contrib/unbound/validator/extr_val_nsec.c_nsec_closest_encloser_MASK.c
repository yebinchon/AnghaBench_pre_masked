
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ub_packed_rrset_key*,int **,size_t*) ;

uint8_t*
FUNC_3(uint8_t* VAR_0, struct ub_packed_rrset_key* VAR_1)
{
 uint8_t* VAR_2;
 size_t VAR_3;
 uint8_t* VAR_4, *VAR_5;
 if(!FUNC_2(VAR_1, &VAR_2, &VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1->rk.dname, VAR_0);
 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if(FUNC_0(VAR_4) > FUNC_0(VAR_5))
  return VAR_4;
 return VAR_5;
}

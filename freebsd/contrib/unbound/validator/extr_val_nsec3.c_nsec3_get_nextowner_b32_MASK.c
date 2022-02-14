
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t dname_len; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;


 int FUNC_0 (int **,size_t*) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int,int **,size_t*) ;
 size_t FUNC_2 (int *,size_t,int *,size_t,int *,size_t) ;

size_t FUNC_3(struct ub_packed_rrset_key* VAR_0, int VAR_1,
 uint8_t* VAR_2, size_t VAR_3)
{
 uint8_t* VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;
 if(!FUNC_1(VAR_0, VAR_1, &VAR_4, &VAR_6))
  return 0;

 VAR_5 = VAR_0->rk.dname;
 VAR_7 = VAR_0->rk.dname_len;
 FUNC_0(&VAR_5, &VAR_7);
 return FUNC_2(VAR_4, VAR_6, VAR_5, VAR_7, VAR_2, VAR_3);
}

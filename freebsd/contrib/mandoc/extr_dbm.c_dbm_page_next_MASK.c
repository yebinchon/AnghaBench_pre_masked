
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbm_res {int member_0; int member_1; } ;





 int VAR_0 ;
 struct dbm_res FUNC_0 (int *) ;
 struct dbm_res FUNC_1 (int ,int *) ;
 struct dbm_res FUNC_2 (int,int *) ;

struct dbm_res
FUNC_3(void)
{
 struct dbm_res VAR_1 = {-1, 0};

 switch(VAR_0) {
 case 128:
  return VAR_1;
 case 130:
  return FUNC_0(((void*)0));
 case 129:
  return FUNC_1(0, ((void*)0));
 default:
  return FUNC_2(VAR_0, ((void*)0));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_memattr_t ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;




__attribute__((used)) static vm_memattr_t
FUNC_1(enum ttm_caching_state VAR_3)
{

 switch (VAR_3) {
 case 129:
  return (VAR_0);
 case 128:
  return (VAR_2);
 case 130:
  return (VAR_1);
 }
 FUNC_0("caching state %d\n", VAR_3);
}

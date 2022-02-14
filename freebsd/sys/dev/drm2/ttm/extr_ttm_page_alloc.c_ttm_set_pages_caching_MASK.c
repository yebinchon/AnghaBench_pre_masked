
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;



__attribute__((used)) static int FUNC_3(vm_page_t *VAR_0,
  enum ttm_caching_state VAR_1, unsigned VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  if (VAR_3)
   FUNC_0("[TTM] Failed to set %d pages to uc!\n", VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (VAR_3)
   FUNC_0("[TTM] Failed to set %d pages to wc!\n", VAR_2);
  break;
 default:
  break;
 }
 return VAR_3;
}

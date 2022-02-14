
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
struct pglist {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_2__ {int q; } ;


 int FUNC_0 (struct pglist*,int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pglist *VAR_1,
  int VAR_2, enum ttm_caching_state VAR_3,
  vm_page_t *VAR_4, unsigned VAR_5)
{
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  FUNC_0(VAR_1, VAR_4[VAR_6], VAR_0.q);
  FUNC_1(VAR_4[VAR_6]);
 }
}

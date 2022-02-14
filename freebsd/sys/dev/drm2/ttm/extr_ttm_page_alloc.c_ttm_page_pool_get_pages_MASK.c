
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
struct ttm_page_pool {unsigned int npages; int lock; int list; } ;
struct pglist {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_2__ {int q; } ;


 int FUNC_0 (struct pglist*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pglist*,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_6 (struct ttm_page_pool*,int,int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_7(struct ttm_page_pool *VAR_1,
     struct pglist *VAR_2,
     int VAR_3,
     enum ttm_caching_state VAR_4,
     unsigned VAR_5)
{
 vm_page_t VAR_6;
 unsigned VAR_7;

 FUNC_4(&VAR_1->lock);
 FUNC_6(VAR_1, VAR_3, VAR_4, VAR_5);

 if (VAR_5 >= VAR_1->npages) {

  FUNC_0(VAR_2, &VAR_1->list, VAR_0.q);
  VAR_5 -= VAR_1->npages;
  VAR_1->npages = 0;
  goto out;
 }
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_1(&VAR_1->list);
  FUNC_3(&VAR_1->list, VAR_6, VAR_0.q);
  FUNC_2(VAR_2, VAR_6, VAR_0.q);
 }
 VAR_1->npages -= VAR_5;
 VAR_5 = 0;
out:
 FUNC_5(&VAR_1->lock);
 return VAR_5;
}

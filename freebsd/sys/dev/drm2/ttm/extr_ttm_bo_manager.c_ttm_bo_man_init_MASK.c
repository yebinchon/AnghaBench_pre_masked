
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_range_manager {int lock; int mm; } ;
struct ttm_mem_type_manager {struct ttm_range_manager* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,unsigned long) ;
 int FUNC_1 (struct ttm_range_manager*,int ) ;
 struct ttm_range_manager* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ttm_mem_type_manager *VAR_4,
      unsigned long VAR_5)
{
 struct ttm_range_manager *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1, VAR_3 | VAR_2);
 VAR_7 = FUNC_0(&VAR_6->mm, 0, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_6, VAR_1);
  return VAR_7;
 }

 FUNC_3(&VAR_6->lock, "ttmrman", ((void*)0), VAR_0);
 VAR_4->priv = VAR_6;
 return 0;
}

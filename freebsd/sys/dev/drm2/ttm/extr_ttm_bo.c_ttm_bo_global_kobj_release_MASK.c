
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_global {int dummy_read_page; int shrink; int mem_glob; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ttm_bo_global *VAR_0)
{

 FUNC_0(VAR_0->mem_glob, &VAR_0->shrink);
 FUNC_1(VAR_0->dummy_read_page);
}

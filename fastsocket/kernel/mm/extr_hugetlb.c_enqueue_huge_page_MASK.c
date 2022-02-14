
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct hstate {int * free_huge_pages_node; int free_huge_pages; int * hugepage_freelists; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct hstate *VAR_0, struct page *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 FUNC_0(&VAR_1->lru, &VAR_0->hugepage_freelists[VAR_2]);
 VAR_0->free_huge_pages++;
 VAR_0->free_huge_pages_node[VAR_2]++;
}

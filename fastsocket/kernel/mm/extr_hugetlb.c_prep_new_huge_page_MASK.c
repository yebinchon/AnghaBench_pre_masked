
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int * nr_huge_pages_node; int nr_huge_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hstate *VAR_2, struct page *VAR_3, int VAR_4)
{
 FUNC_1(VAR_3, VAR_0);
 FUNC_2(&VAR_1);
 VAR_2->nr_huge_pages++;
 VAR_2->nr_huge_pages_node[VAR_4]++;
 FUNC_3(&VAR_1);
 FUNC_0(VAR_3);
}

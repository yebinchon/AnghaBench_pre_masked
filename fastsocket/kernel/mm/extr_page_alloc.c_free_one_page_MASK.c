
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lock; scalar_t__ pages_scanned; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,struct zone*,int,int) ;
 int FUNC_1 (struct zone*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zone*) ;
 int FUNC_5 (struct zone*,int ) ;

__attribute__((used)) static void FUNC_6(struct zone *VAR_2, struct page *VAR_3, int VAR_4,
    int VAR_5)
{
 FUNC_2(&VAR_2->lock);
 FUNC_5(VAR_2, VAR_1);
 VAR_2->pages_scanned = 0;

 FUNC_0(VAR_3, VAR_2, VAR_4, VAR_5);
 FUNC_1(VAR_2, VAR_0, 1 << VAR_4);
 FUNC_3(&VAR_2->lock);

 FUNC_4(VAR_2);
}

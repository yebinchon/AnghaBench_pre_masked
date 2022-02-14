
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* free_area; } ;
struct page {int lru; } ;
struct TYPE_2__ {int nr_free; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct zone*,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zone*) ;
 unsigned int FUNC_5 (struct page*) ;
 struct zone* FUNC_6 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,int ) ;
 int FUNC_10 (struct page*,unsigned int) ;
 int FUNC_11 (struct zone*,int ,unsigned long,int ,int ) ;

int FUNC_12(struct page *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 struct zone *VAR_7;

 FUNC_0(!FUNC_1(VAR_4));

 VAR_7 = FUNC_6(VAR_4);
 VAR_5 = FUNC_5(VAR_4);


 VAR_6 = FUNC_4(VAR_7) + (1 << VAR_5);
 if (!FUNC_11(VAR_7, 0, VAR_6, 0, 0))
  return 0;


 FUNC_3(&VAR_4->lru);
 VAR_7->free_area[VAR_5].nr_free--;
 FUNC_7(VAR_4);
 FUNC_2(VAR_7, VAR_1, -(1UL << VAR_5));


 FUNC_8(VAR_4);
 FUNC_10(VAR_4, VAR_5);

 if (VAR_5 >= VAR_3 - 1) {
  struct page *VAR_8 = VAR_4 + (1 << VAR_5) - 1;
  for (; VAR_4 < VAR_8; VAR_4 += VAR_2)
   FUNC_9(VAR_4, VAR_0);
 }

 return 1 << VAR_5;
}

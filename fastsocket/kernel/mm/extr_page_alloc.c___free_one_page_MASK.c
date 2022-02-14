
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* free_area; } ;
struct page {int lru; } ;
struct TYPE_2__ {int nr_free; int * free_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned int) ;
 struct page* FUNC_3 (struct page*,unsigned long,unsigned int) ;
 unsigned long FUNC_4 (struct zone*,struct page*) ;
 int FUNC_5 (struct page*,unsigned int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct page*,struct page*,unsigned int) ;
 int FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,unsigned int) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static inline void FUNC_15(struct page *VAR_1,
  struct zone *VAR_2, unsigned int VAR_3,
  int VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 struct page *VAR_7;

 if (FUNC_14(FUNC_0(VAR_1)))
  if (FUNC_14(FUNC_5(VAR_1, VAR_3)))
   return;

 FUNC_1(VAR_4 == -1);

 VAR_5 = FUNC_10(VAR_1) & ((1 << VAR_0) - 1);

 FUNC_1(VAR_5 & ((1 << VAR_3) - 1));
 FUNC_1(FUNC_4(VAR_2, VAR_1));

 while (VAR_3 < VAR_0-1) {
  VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_3);
  if (!FUNC_9(VAR_1, VAR_7, VAR_3))
   break;


  FUNC_8(&VAR_7->lru);
  VAR_2->free_area[VAR_3].nr_free--;
  FUNC_12(VAR_7);
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  VAR_1 = VAR_1 + (VAR_6 - VAR_5);
  VAR_5 = VAR_6;
  VAR_3++;
 }
 FUNC_13(VAR_1, VAR_3);
 if ((VAR_3 < VAR_0-2) && FUNC_11(FUNC_10(VAR_7))) {
  struct page *VAR_8, *VAR_9;
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  VAR_8 = VAR_1 + VAR_6 - VAR_5;
  VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_3 + 1);
  if (FUNC_9(VAR_8, VAR_9, VAR_3 + 1)) {
   FUNC_7(&VAR_1->lru,
    &VAR_2->free_area[VAR_3].free_list[VAR_4]);
   goto out;
  }
 }

 FUNC_6(&VAR_1->lru, &VAR_2->free_area[VAR_3].free_list[VAR_4]);
out:
 VAR_2->free_area[VAR_3].nr_free++;
}
